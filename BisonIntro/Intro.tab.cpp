/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
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


/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 2 "Intro.y"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "STNode.h"
#include "Intro.tab.h"
extern int yylex(yy::parser::semantic_type *yylval,yy::parser::location_type *yylloc);
using namespace std;

/* Line 279 of lalr1.cc  */
#line 48 "Intro.tab.cpp"


#include "Intro.tab.h"

/* User implementation prologue.  */

/* Line 285 of lalr1.cc  */
#line 56 "Intro.tab.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
/* Line 353 of lalr1.cc  */
#line 151 "Intro.tab.cpp"

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {
  }

  parser::~parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 19 "Intro.y"
{
// Filename for locations here
yylloc.begin.filename = yylloc.end.filename = new std::string("test.txt");
}
/* Line 545 of lalr1.cc  */
#line 350 "Intro.tab.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */
#line 47 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 48 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 49 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 50 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 53 "Intro.y"
    { (yyval.node) = new Declaration((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 54 "Intro.y"
    { (yyval.node) = new Declaration((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 57 "Intro.y"
    { (yyval.node) = new FunctionDeclaration((yysemantic_stack_[(8) - (1)].node),(yysemantic_stack_[(8) - (2)].node),(yysemantic_stack_[(8) - (4)].node),(yysemantic_stack_[(8) - (7)].node));  }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 58 "Intro.y"
    { (yyval.node) = new FunctionDeclaration((yysemantic_stack_[(7) - (1)].node),(yysemantic_stack_[(7) - (2)].node),(yysemantic_stack_[(7) - (6)].node));  }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 59 "Intro.y"
    { (yyval.node) = new FunctionDeclaration((yysemantic_stack_[(6) - (1)].node),(yysemantic_stack_[(6) - (2)].node));  }
    break;

  case 11:
/* Line 670 of lalr1.cc  */
#line 60 "Intro.y"
    { (yyval.node) = new FunctionDeclaration((yysemantic_stack_[(7) - (1)].node),(yysemantic_stack_[(7) - (2)].node),(yysemantic_stack_[(7) - (4)].node));  }
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 63 "Intro.y"
    { (yyval.node) = new FunctionParameters((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 64 "Intro.y"
    { (yyval.node) = new FunctionParameters((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (3)].node),(yysemantic_stack_[(4) - (4)].node));  }
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 68 "Intro.y"
    { (yyval.node) = new FunctionBody((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 69 "Intro.y"
    { (yyval.node) = new FunctionBody((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 70 "Intro.y"
    { (yyval.node) = new FunctionBody((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 73 "Intro.y"
    { (yyval.node) = new Statements((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 74 "Intro.y"
    { (yyval.node) = new Statements((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 77 "Intro.y"
    { (yyval.node) = new DataDeclarations((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 78 "Intro.y"
    { (yyval.node) = new DataDeclarations((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 81 "Intro.y"
    { (yyval.node) = new DataDeclaration((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 82 "Intro.y"
    { (yyval.node) = new DataDeclaration((yysemantic_stack_[(5) - (1)].node),(yysemantic_stack_[(5) - (2)].node),(yysemantic_stack_[(5) - (4)].node));  }
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 85 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_INT); }
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 86 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_DOUBLE); }
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 87 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_STRING); }
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 88 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_VOID); }
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 91 "Intro.y"
    {(yyval.node)=(yysemantic_stack_[(1) - (1)].node);}
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 92 "Intro.y"
    {(yyval.node)=(yysemantic_stack_[(1) - (1)].node); }
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 95 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 96 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 97 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 98 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 99 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 100 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 101 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 102 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 103 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 106 "Intro.y"
    { (yyval.node) = new CompoundStatement((yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 107 "Intro.y"
    { (yyval.node) = new CompoundStatement();  }
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 110 "Intro.y"
    { (yyval.node) = new StatementList((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 111 "Intro.y"
    { (yyval.node) = new StatementList((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 115 "Intro.y"
    { (yyval.node) = new BreakStatement();  }
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 118 "Intro.y"
    { (yyval.node) = new ReturnStatement((yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 119 "Intro.y"
    { (yyval.node) = new ReturnStatement();  }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 122 "Intro.y"
    { (yyval.node) = new ContinueStatement();  }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 125 "Intro.y"
    { (yyval.node) = new ExpressionStatement((yysemantic_stack_[(2) - (1)].node));  }
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 128 "Intro.y"
    { (yyval.node) = new EmptyStatement();  }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 131 "Intro.y"
    { (yyval.node) =new WhileStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)); }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 134 "Intro.y"
    { (yyval.node) =new ForStatement((yysemantic_stack_[(6) - (3)].node), (yysemantic_stack_[(6) - (4)].node), (yysemantic_stack_[(6) - (6)].node)); }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 135 "Intro.y"
    { (yyval.node) =new ForStatement((yysemantic_stack_[(7) - (3)].node), (yysemantic_stack_[(7) - (4)].node), (yysemantic_stack_[(7) - (5)].node),(yysemantic_stack_[(7) - (7)].node)); }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 138 "Intro.y"
    {(yyval.node) =new ForPrimitive((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 139 "Intro.y"
    {(yyval.node) =new ForPrimitive((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 142 "Intro.y"
    { (yyval.node)= new IfStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)); }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 143 "Intro.y"
    { (yyval.node)= new IfStatement((yysemantic_stack_[(7) - (3)].node),(yysemantic_stack_[(7) - (5)].node),(yysemantic_stack_[(7) - (7)].node)); }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 147 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 148 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 149 "Intro.y"
    { (yyval.node) = new FunctionCall((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (3)].node)); }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 150 "Intro.y"
    { (yyval.node) = new Parenthesis((yysemantic_stack_[(3) - (2)].node)); }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 151 "Intro.y"
    { (yyval.node) = new Assignment((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));}
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 152 "Intro.y"
    { (yyval.node) = new Addition((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 153 "Intro.y"
    { (yyval.node) = new Subtraction((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 154 "Intro.y"
    { (yyval.node) = new Multiplication((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 155 "Intro.y"
    { (yyval.node) = new Division((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 64:
/* Line 670 of lalr1.cc  */
#line 156 "Intro.y"
    { (yyval.node) = new Less((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 65:
/* Line 670 of lalr1.cc  */
#line 157 "Intro.y"
    { (yyval.node) = new Greater((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 66:
/* Line 670 of lalr1.cc  */
#line 158 "Intro.y"
    { (yyval.node) = new LessEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 67:
/* Line 670 of lalr1.cc  */
#line 159 "Intro.y"
    { (yyval.node) = new GreaterEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 68:
/* Line 670 of lalr1.cc  */
#line 160 "Intro.y"
    { (yyval.node) = new Equal((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 69:
/* Line 670 of lalr1.cc  */
#line 161 "Intro.y"
    { (yyval.node) = new NotEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 70:
/* Line 670 of lalr1.cc  */
#line 162 "Intro.y"
    { (yyval.node) = new And((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 71:
/* Line 670 of lalr1.cc  */
#line 163 "Intro.y"
    { (yyval.node) = new Or((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 72:
/* Line 670 of lalr1.cc  */
#line 164 "Intro.y"
    { (yyval.node) = new Not((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 73:
/* Line 670 of lalr1.cc  */
#line 165 "Intro.y"
    { (yyval.node) = new Plus((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 74:
/* Line 670 of lalr1.cc  */
#line 166 "Intro.y"
    { (yyval.node) = new Minus((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 75:
/* Line 670 of lalr1.cc  */
#line 169 "Intro.y"
    { (yyval.node) = new FunctionCallArguments((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 76:
/* Line 670 of lalr1.cc  */
#line 170 "Intro.y"
    { (yyval.node) = new FunctionCallArguments((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node)); }
    break;


/* Line 670 of lalr1.cc  */
#line 920 "Intro.tab.cpp"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char parser::yypact_ninf_ = -38;
  const short int
  parser::yypact_[] =
  {
        61,    10,    -8,     4,     6,     8,    25,     3,   -38,   -38,
     -38,   -38,   -38,   238,   238,   238,   238,   204,   -38,   119,
     -38,   -38,   -38,    41,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   310,   238,   238,   238,   238,    74,
     -38,   -38,   -38,   331,   -38,   -38,   -38,   352,   -38,   -38,
     240,   -38,   -38,   -38,     9,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   -38,   420,   420,
     -29,   369,   386,   -38,   -38,    74,   -38,   -38,   -38,   -38,
      34,    11,   -38,   431,   115,   151,   151,   151,   151,   151,
     151,   -14,   -14,   -38,   -38,   -38,   238,   289,   289,   274,
     -38,   -38,    37,    48,   -21,    81,   420,    55,   -38,   289,
     403,   -38,   155,    51,    68,   -38,   289,   -38,   289,   -38,
      66,   289,   253,   -38,    88,   -38,   191,   100,   -38,   -38,
     -38,   -38,    68,   289,   -10,   -38,    69,   -38,   -38,   -38
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    56,     0,     0,     0,     0,     0,     0,    23,    24,
      26,    25,    55,     0,     0,     0,     0,     0,    47,     0,
       2,     7,     6,     0,     3,    37,    34,    35,    36,    29,
      30,    31,    33,    32,     0,     0,     0,     0,     0,     0,
      42,    45,    44,     0,    74,    73,    72,     0,    39,    40,
       0,     1,     4,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    59,    75,
       0,     0,     0,    51,    52,     0,    43,    58,    38,    41,
       0,     0,    21,    71,    70,    64,    65,    68,    69,    67,
      66,    61,    60,    62,    63,    57,     0,     0,     0,     0,
      28,    27,     0,     0,     0,     0,    76,    53,    48,     0,
       0,    22,     0,     0,     0,    12,     0,    49,     0,    10,
       0,    14,    15,    19,     0,    17,     0,     0,    54,    50,
       9,    18,     0,    16,     0,    11,     0,    13,    20,     8
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  parser::yypgoto_[] =
  {
       -38,   -38,    89,   -38,   -38,   -15,    -9,   -38,   -22,     1,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -37,   -35,   -38,
     -38,    39,   -38,    -4,   -38
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    19,    20,    21,   104,   120,   121,   122,    22,   124,
     102,   125,    25,    50,    26,    27,    28,    29,    30,    31,
      32,    75,    33,    34,    70
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -1;
  const short int
  parser::yytable_[] =
  {
        24,    23,    73,    43,    74,    95,     1,    80,    96,    44,
      45,    46,    47,   113,    65,    66,   114,    49,    12,    53,
      23,     8,     9,    10,    11,    37,    80,    35,    82,    13,
      14,    68,    69,    71,    72,    15,    16,    38,    73,    39,
      74,    42,    81,    36,    54,   103,    40,    82,   100,   101,
      79,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    41,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   111,    12,     1,     8,     9,
      10,    11,   105,   112,   115,   116,   126,    13,    14,    12,
     123,   134,   106,    15,    16,   110,    17,   107,   108,    18,
      13,    14,   130,   137,   123,   139,    15,    16,    52,   117,
     138,   136,    18,   133,    99,   127,   128,     0,   129,    51,
       0,   131,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   131,    12,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    13,    14,     0,     0,     0,
       0,    15,    16,     0,    17,     0,     0,    18,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    13,    14,     0,     0,     0,     0,    15,    16,     0,
      17,   119,     0,    18,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,    12,     1,     2,     3,
       4,     5,     6,     7,     0,     0,     0,    13,    14,    12,
       0,     0,     0,    15,    16,     0,    17,   135,     0,    18,
      13,    14,     0,     0,     0,     0,    15,    16,     0,    17,
      48,     1,    18,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     0,    12,     0,    12,     1,     2,     3,     4,
       5,     6,     7,     0,    13,    14,    13,    14,    12,     0,
      15,    16,    15,    16,     0,    17,    78,     1,    18,    13,
      14,     0,     0,     0,     0,    15,    16,     0,    17,    12,
     132,    18,     1,     2,     3,     4,     5,     6,     7,     0,
      13,    14,     0,     0,    12,     0,    15,    16,   109,     0,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,    15,    16,     0,    17,     0,     0,    18,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,    77,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,    97,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
      98,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,   118,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66
  };

  /* YYCHECK.  */
  const short int
  parser::yycheck_[] =
  {
         0,     0,    39,     7,    39,    34,     3,    17,    37,    13,
      14,    15,    16,    34,    28,    29,    37,    17,    15,    19,
      19,    10,    11,    12,    13,    33,    17,    17,    38,    26,
      27,    35,    36,    37,    38,    32,    33,    33,    75,    33,
      75,    38,    33,    33,     3,    34,    38,    38,    14,    15,
      50,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    38,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    38,    15,     3,    10,    11,
      12,    13,    81,    35,     3,    30,    35,    26,    27,    15,
     112,     3,    96,    32,    33,    99,    35,    97,    98,    38,
      26,    27,    36,     3,   126,    36,    32,    33,    19,   109,
     132,   126,    38,   122,    75,   114,   116,    -1,   118,     0,
      -1,   121,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   133,    15,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    26,    27,    -1,    -1,    -1,
      -1,    32,    33,    -1,    35,    -1,    -1,    38,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    26,    27,    15,
      -1,    -1,    -1,    32,    33,    -1,    35,    36,    -1,    38,
      26,    27,    -1,    -1,    -1,    -1,    32,    33,    -1,    35,
      36,     3,    38,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    15,    -1,    15,     3,     4,     5,     6,
       7,     8,     9,    -1,    26,    27,    26,    27,    15,    -1,
      32,    33,    32,    33,    -1,    35,    36,     3,    38,    26,
      27,    -1,    -1,    -1,    -1,    32,    33,    -1,    35,    15,
      37,    38,     3,     4,     5,     6,     7,     8,     9,    -1,
      26,    27,    -1,    -1,    15,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    32,    33,    -1,    35,    -1,    -1,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    15,    26,    27,    32,    33,    35,    38,    40,
      41,    42,    47,    48,    50,    51,    53,    54,    55,    56,
      57,    58,    59,    61,    62,    17,    33,    33,    33,    33,
      38,    38,    38,    62,    62,    62,    62,    62,    36,    50,
      52,     0,    41,    50,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    38,    62,    62,
      63,    62,    62,    56,    57,    60,    38,    34,    36,    50,
      17,    33,    38,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    34,    37,    34,    34,    60,
      14,    15,    49,    34,    43,    48,    62,    50,    50,    34,
      62,    38,    35,    34,    37,     3,    30,    50,    34,    36,
      44,    45,    46,    47,    48,    50,    35,    48,    50,    50,
      36,    50,    37,    45,     3,    36,    44,     3,    47,    36
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    61,   272,   273,
      60,    62,   274,   275,   276,   277,    45,   278,    42,    47,
     279,   280,   281,    40,    41,   123,   125,    44,    59
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    39,    40,    40,    40,    40,    41,    41,    42,    42,
      42,    42,    43,    43,    44,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    55,    56,    57,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     1,     2,     2,     1,     1,     8,     7,
       6,     7,     2,     4,     1,     1,     2,     1,     2,     1,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     2,     2,     3,     2,     2,     2,     1,     5,     6,
       7,     1,     1,     5,     7,     1,     1,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     1,     3
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "IDENTIFIER", "IF", "WHILE", "FOR",
  "BREAK", "CONTINUE", "RETURN", "INT_TYPE", "DOUBLE_TYPE", "VOID_TYPE",
  "STRING_TYPE", "STRING", "NUMBER", "IFRULE", "'='", "OR", "AND", "'<'",
  "'>'", "EQ", "NE", "GE", "LE", "'-'", "PLUS", "'*'", "'/'", "ELSE",
  "UNARYOP", "NOT", "'('", "')'", "'{'", "'}'", "','", "';'", "$accept",
  "compileunit", "declaration", "functiondeclaration",
  "functionparameters", "functionbody", "statements", "datadeclarations",
  "datadeclaration", "typespecifier", "datavalue", "statement",
  "compoundstatement", "statementlist", "breakstatement",
  "returnstatement", "continuestatement", "exprstatement",
  "emptystatement", "whilestatement", "forstatement", "forprimitive",
  "ifstatement", "expr", "funargs", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        40,     0,    -1,    41,    -1,    50,    -1,    40,    41,    -1,
      40,    50,    -1,    47,    -1,    42,    -1,    48,     3,    33,
      43,    34,    35,    44,    36,    -1,    48,     3,    33,    34,
      35,    44,    36,    -1,    48,     3,    33,    34,    35,    36,
      -1,    48,     3,    33,    43,    34,    35,    36,    -1,    48,
       3,    -1,    43,    37,    48,     3,    -1,    45,    -1,    46,
      -1,    46,    45,    -1,    50,    -1,    45,    50,    -1,    47,
      -1,    46,    37,    47,    -1,    48,     3,    38,    -1,    48,
       3,    17,    49,    38,    -1,    10,    -1,    11,    -1,    13,
      -1,    12,    -1,    15,    -1,    14,    -1,    56,    -1,    57,
      -1,    58,    -1,    61,    -1,    59,    -1,    53,    -1,    54,
      -1,    55,    -1,    51,    -1,    35,    52,    36,    -1,    35,
      36,    -1,    50,    -1,    52,    50,    -1,     7,    38,    -1,
       9,    62,    38,    -1,     9,    38,    -1,     8,    38,    -1,
      62,    38,    -1,    38,    -1,     5,    33,    62,    34,    50,
      -1,     6,    33,    60,    60,    34,    50,    -1,     6,    33,
      60,    60,    62,    34,    50,    -1,    56,    -1,    57,    -1,
       4,    33,    62,    34,    50,    -1,     4,    33,    62,    34,
      50,    30,    50,    -1,    15,    -1,     3,    -1,     3,    33,
      63,    34,    -1,    33,    62,    34,    -1,     3,    17,    62,
      -1,    62,    27,    62,    -1,    62,    26,    62,    -1,    62,
      28,    62,    -1,    62,    29,    62,    -1,    62,    20,    62,
      -1,    62,    21,    62,    -1,    62,    25,    62,    -1,    62,
      24,    62,    -1,    62,    22,    62,    -1,    62,    23,    62,
      -1,    62,    19,    62,    -1,    62,    18,    62,    -1,    32,
      62,    -1,    27,    62,    -1,    26,    62,    -1,    62,    -1,
      63,    37,    62,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,    10,    13,    15,    17,    26,
      34,    41,    49,    52,    57,    59,    61,    64,    66,    69,
      71,    75,    79,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   119,
     122,   124,   127,   130,   134,   137,   140,   143,   145,   151,
     158,   166,   168,   170,   176,   184,   186,   188,   193,   197,
     201,   205,   209,   213,   217,   221,   225,   229,   233,   237,
     241,   245,   249,   252,   255,   258,   260
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    47,    47,    48,    49,    50,    53,    54,    57,    58,
      59,    60,    63,    64,    68,    69,    70,    73,    74,    77,
      78,    81,    82,    85,    86,    87,    88,    91,    92,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   106,   107,
     110,   111,   115,   118,   119,   122,   125,   128,   131,   134,
     135,   138,   139,   142,   143,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   169,   170
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    28,     2,    37,    26,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      20,    17,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    22,    23,    24,    25,    27,    30,
      31,    32
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 460;
  const int parser::yynnts_ = 25;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 51;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 39;

  const unsigned int parser::yyuser_token_number_max_ = 281;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1622 "Intro.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 174 "Intro.y"


namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
