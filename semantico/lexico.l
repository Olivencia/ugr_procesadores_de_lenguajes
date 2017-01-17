%{

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

%}

%option yylineno
%option noyywrap

%%

"principal"						{ return(PRINCIPAL); }
"repetir"						{ return(REPETIR); }
"hasta"							{ return(HASTA); }
"leer"							{ return(LEER); }
"escribir"						{ return(ESCRIBIR); }
"mientras"						{ return(MIENTRAS); }
"si"							{ return(SI); }
"sino"							{ return(SINO); }
"="								{ return(ASIGNACION); }
"{"								{ return(INICIOBLOQUE); }
"}"								{ return(FINBLOQUE); }
"var"							{ return(VAR); }
"finvar"						{ return(FINVAR); }
"devolver"						{ return(DEVOLVER); }
"entero"						{ yylval.tipo = ENTERO; return(TIPOBASICO); }
"real"							{ yylval.tipo = REAL; return(TIPOBASICO); }
"caracter"						{ yylval.tipo = CARACTER; return(TIPOBASICO); }
"logico"						{ yylval.tipo = BOOLEANO; return(TIPOBASICO); }
"["								{ return(CORIZQ); }
"]"								{ return(CORDER); }
","								{ return(COMA); }
"("								{ return(PARIZQ); }
")"								{ return(PARDER); }
";"								{ return(PUNTOYCOMA); }
"+"								{ return(SUMRES); }
"-"								{ return(SUMRES); }
"*"								{ yylval.atrib = 0; return(OPBINARIO); }
"/"								{ yylval.atrib = 1; return(OPBINARIO); }
"=="							{ yylval.atrib = 0; return(OPRELACIONAL); }
"!="							{ yylval.atrib = 1; return(OPRELACIONAL); }
"<="							{ yylval.atrib = 2; return(OPRELACIONAL); }
">="							{ yylval.atrib = 3; return(OPRELACIONAL); }
"<"								{ yylval.atrib = 4; return(OPRELACIONAL); }
">"								{ yylval.atrib = 5; return(OPRELACIONAL); }
"&&"							{ return(OPAND); }
"||"							{ return(OPOR); }
"!"								{ yylval.atrib = 0; return(OPUNARIO); } 
"#"								{ yylval.atrib = 1; return(OPUNARIO); }
"?"								{ yylval.atrib = 2; return(OPUNARIO); }
"verdadero"						{ yylval.atrib = 0; yylval.lexema = strdup(yytext); return(CONSTLOGICA); }
"falso" 						{ yylval.atrib = 1; yylval.lexema = strdup(yytext); return(CONSTLOGICA); }
[a-zA-Z]([a-zA-Z]|[0-9]|_)*		{ yylval.lexema = strdup(yytext); return(IDENT); }
[0-9]+							{ yylval.atrib = 2; yylval.lexema = strdup(yytext); return(CONSTENTERA); }
[0-9]*\.([0-9]+)?				{ yylval.atrib = 1; yylval.lexema = strdup(yytext); return(CONSTREAL); }
"'"[^"'"]"'"					{ yylval.atrib = 0; yylval.lexema = strdup(yytext); return(CONSTCARACTER); }
"\""[^"'"]+"\""					{ yylval.atrib = 3; yylval.lexema = strdup(yytext); return(CONSTCADENA); }

\n								{ ++lineaActual; }
\t								{ ; }
[ \t]							{ ; }
\r								{ ; }
.  								{ printf("(Line ) %d el(los) caracter(es) '%s' no forma(n) ningun token conocido",yylineno,yytext); }

%%
