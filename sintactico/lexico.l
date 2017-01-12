%{
#include <stdlib.h>
#include <string.h>

%}

%option yylineno
%option noyywrap

%%


"principal"		{    ; return(PRINCIPAL);}
"repetir"		{    ; return(REPETIR);}
"hasta"			{    ; return(HASTA);}
"leer"			{    ; return(LEER);}
"escribir"		{    ; return(ESCRIBIR);}
"mientras"		{    ; return(MIENTRAS);}
"si"			{    ; return(SI);}
"sino"			{    ; return(SINO);}
"="				{    ; return(ASIGNACION);}
"{"				{     ; return(INICIOBLOQUE);}
"}"				{     ; return(FINBLOQUE);}
"var"			{    ; return(VAR);}
"finvar"		{    ; return(FINVAR);}
"devolver"		{    ; return(DEVOLVER);}
"entero"		{    ; return(TIPOBASICO);}
"real"			{    ; return(TIPOBASICO);}
"caracter"		{   ; return(TIPOBASICO);}
"logico"		{   ; return(TIPOBASICO);}
"["				{    ; return(CORIZQ);}
"]"				{    ; return(CORDER);}
","				{    ; return(COMA);}
"("				{     ; return(PARIZQ);}
")"				{     ; return(PARDER);}
";"				{    ; return(PUNTOYCOMA);}
"+"				{    ; return(SUMRES);} 
"-"				{    ; return(SUMRES);} 
"*"				{    ; return(OPBINARIO);} 
"/"				{    ; return(OPBINARIO);} 
"=="			{    ; return(OPRELACIONAL);} 
"!="			{    ; return(OPRELACIONAL);} 
"<="			{    ; return(OPRELACIONAL);} 
">="			{    ; return(OPRELACIONAL);} 
"<"				{    ; return(OPRELACIONAL);} 
">"				{    ; return(OPRELACIONAL);} 
"&&"			{    ; return(OPAND);} 
"||"			{    ; return(OPOR);} 
"!"				{    ; return(OPUNARIO);} 
"#"				{    ; return(OPUNARIO);}
"?"				{    ; return(OPUNARIO);}
"verdadero"		{    ; return(CONSTLOGICA);}
"falso" 		{    ; return(CONSTLOGICA);}
[a-zA-Z]([a-zA-Z]|[0-9]|_)*			{   ; return(IDENT);}
[0-9]+				{    ; return(CONSTENTERA);}
[0-9]*\.([0-9]+)?	{    ; return(CONSTREAL);}
"'"[^"'"]"'"	{    ; return(CONSTCARACTER);}
"\""[^"'"]+"\""		{    ; return(CONSTCADENA);}

\n				{++linea_actual;}
\t				{;}
[ \t]					{;}
\r					{;}
.   				{printf("(Line ) %d el(los) caracter(es) '%s' no forma(n) ningun token conocido",yylineno,yytext); }
%%


