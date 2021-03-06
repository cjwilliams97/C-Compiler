/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STATIC = 258,
    INT = 259,
    BOOL = 260,
    CHAR = 261,
    IF = 262,
    THEN = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    FOR = 267,
    TO = 268,
    BY = 269,
    RETURN = 270,
    BREAK = 271,
    OR = 272,
    AND = 273,
    NOT = 274,
    GEQ = 275,
    LEQ = 276,
    EQ = 277,
    NEQ = 278,
    MAX = 279,
    MIN = 280,
    ADDASS = 281,
    SUBASS = 282,
    MULASS = 283,
    DIVASS = 284,
    INC = 285,
    DEC = 286,
    CHARCONST = 287,
    ID = 288,
    NUMCONST = 289,
    STRINGCONST = 290,
    BOOLCONST = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "c-.y" /* yacc.c:1909  */

    TokenData *tokenData;
    double value;

#line 96 "c-.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */
