/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SEMANTICO_TAB_H_INCLUDED
# define YY_YY_SEMANTICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OPOR = 258,
    OPAND = 259,
    OPRELACIONAL = 260,
    SUMRES = 261,
    OPBINARIO = 262,
    OPUNARIO = 263,
    ASIGNACION = 264,
    CORIZQ = 265,
    CORDER = 266,
    TIPOBASICO = 267,
    CONSTENTERA = 268,
    CONSTLOGICA = 269,
    CONSTREAL = 270,
    CONSTCARACTER = 271,
    CONSTCADENA = 272,
    COMA = 273,
    PARDER = 274,
    PARIZQ = 275,
    PUNTOYCOMA = 276,
    INICIOBLOQUE = 277,
    FINBLOQUE = 278,
    VAR = 279,
    FINVAR = 280,
    SI = 281,
    SINO = 282,
    MIENTRAS = 283,
    LEER = 284,
    ESCRIBIR = 285,
    DEVOLVER = 286,
    REPETIR = 287,
    HASTA = 288,
    PRINCIPAL = 289,
    IDENT = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SEMANTICO_TAB_H_INCLUDED  */
