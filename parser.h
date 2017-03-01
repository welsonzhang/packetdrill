/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ELLIPSIS = 258,
     SA_FAMILY = 259,
     SIN_PORT = 260,
     SIN_ADDR = 261,
     _HTONS_ = 262,
     INET_ADDR = 263,
     MSG_NAME = 264,
     MSG_IOV = 265,
     MSG_FLAGS = 266,
     FD = 267,
     EVENTS = 268,
     REVENTS = 269,
     ONOFF = 270,
     LINGER = 271,
     ACK = 272,
     ECR = 273,
     EOL = 274,
     MSS = 275,
     NOP = 276,
     SACK = 277,
     SACKOK = 278,
     TIMESTAMP = 279,
     VAL = 280,
     WIN = 281,
     WSCALE = 282,
     PRO = 283,
     FAST_OPEN = 284,
     ECT0 = 285,
     ECT1 = 286,
     CE = 287,
     ECT01 = 288,
     NO_ECN = 289,
     IPV4 = 290,
     IPV6 = 291,
     ICMP = 292,
     UDP = 293,
     GRE = 294,
     MTU = 295,
     MPLS = 296,
     LABEL = 297,
     TC = 298,
     TTL = 299,
     OPTION = 300,
     FLOAT = 301,
     INTEGER = 302,
     HEX_INTEGER = 303,
     WORD = 304,
     STRING = 305,
     BACK_QUOTED = 306,
     CODE = 307,
     IPV4_ADDR = 308,
     IPV6_ADDR = 309
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 438 "parser.y"

	s64 integer;
	double floating;
	char *string;
	char *reserved;
	s64 time_usecs;
	enum direction_t direction;
	enum ip_ecn_t ip_ecn;
	struct mpls_stack *mpls_stack;
	struct mpls mpls_stack_entry;
	u16 port;
	s32 window;
	u32 sequence_number;
	struct {
		int protocol;		/* IPPROTO_TCP or IPPROTO_UDP */
		u32 start_sequence;
		u16 payload_bytes;
	} tcp_sequence_info;
	struct option_list *option;
	struct event *event;
	struct packet *packet;
	struct syscall_spec *syscall;
	struct command_spec *command;
	struct code_spec *code;
	struct tcp_option *tcp_option;
	struct tcp_options *tcp_options;
	struct expression *expression;
	struct expression_list *expression_list;
	struct errno_spec *errno_info;


/* Line 2058 of yacc.c  */
#line 143 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_H_INCLUDED  */
