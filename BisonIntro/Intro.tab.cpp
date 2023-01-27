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
#line 46 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 47 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 48 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 49 "Intro.y"
    { (yyval.node) =g_root= new CompileUnit((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node)); }
    break;

  case 6:
/* Line 670 of lalr1.cc  */
#line 52 "Intro.y"
    { (yyval.node) = new Declaration((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 7:
/* Line 670 of lalr1.cc  */
#line 53 "Intro.y"
    { (yyval.node) = new Declaration((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 56 "Intro.y"
    { (yyval.node) = new FunctionDeclaration((yysemantic_stack_[(6) - (1)].node),(yysemantic_stack_[(6) - (2)].node),(yysemantic_stack_[(6) - (4)].node),(yysemantic_stack_[(6) - (6)].node));  }
    break;

  case 9:
/* Line 670 of lalr1.cc  */
#line 59 "Intro.y"
    { (yyval.node) = new DataDeclarations((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 10:
/* Line 670 of lalr1.cc  */
#line 60 "Intro.y"
    { (yyval.node) = new DataDeclarations((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 11:
/* Line 670 of lalr1.cc  */
#line 63 "Intro.y"
    { (yyval.node) = new DataDeclaration((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 64 "Intro.y"
    { (yyval.node) = new DataDeclaration((yysemantic_stack_[(4) - (1)].node),(yysemantic_stack_[(4) - (2)].node),(yysemantic_stack_[(4) - (4)].node));  }
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 67 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_INT); }
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 68 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_DOUBLE); }
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 69 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_STRING); }
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 70 "Intro.y"
    { (yyval.node) = new CTypeSpecifier(TS_VOID); }
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 73 "Intro.y"
    {(yyval.node)=(yysemantic_stack_[(1) - (1)].node);}
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 74 "Intro.y"
    {(yyval.node)=(yysemantic_stack_[(1) - (1)].node); }
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 77 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 78 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 79 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 80 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 81 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 82 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 83 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 84 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 85 "Intro.y"
    { (yyval.node) = new Statement((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 88 "Intro.y"
    { (yyval.node) = new CompoundStatement((yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 89 "Intro.y"
    { (yyval.node) = new CompoundStatement();  }
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 92 "Intro.y"
    { (yyval.node) = new StatementList((yysemantic_stack_[(1) - (1)].node));  }
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 93 "Intro.y"
    { (yyval.node) = new StatementList((yysemantic_stack_[(2) - (1)].node),(yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 97 "Intro.y"
    { (yyval.node) = new BreakStatement();  }
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 100 "Intro.y"
    { (yyval.node) = new ReturnStatement((yysemantic_stack_[(3) - (2)].node));  }
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 101 "Intro.y"
    { (yyval.node) = new ReturnStatement();  }
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 104 "Intro.y"
    { (yyval.node) = new ContinueStatement();  }
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 107 "Intro.y"
    { (yyval.node) = new ExpressionStatement((yysemantic_stack_[(2) - (1)].node));  }
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 110 "Intro.y"
    { (yyval.node) = new EmptyStatement();  }
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 113 "Intro.y"
    { (yyval.node) =new WhileStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)); }
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 116 "Intro.y"
    { (yyval.node) =new ForStatement((yysemantic_stack_[(6) - (3)].node), (yysemantic_stack_[(6) - (4)].node), (yysemantic_stack_[(6) - (6)].node)); }
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 117 "Intro.y"
    { (yyval.node) =new ForStatement((yysemantic_stack_[(7) - (3)].node), (yysemantic_stack_[(7) - (4)].node), (yysemantic_stack_[(7) - (5)].node),(yysemantic_stack_[(7) - (7)].node)); }
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 120 "Intro.y"
    {(yyval.node) =new ForPrimitive((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 121 "Intro.y"
    {(yyval.node) =new ForPrimitive((yysemantic_stack_[(1) - (1)].node));}
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 124 "Intro.y"
    { (yyval.node)= new IfStatement((yysemantic_stack_[(5) - (3)].node),(yysemantic_stack_[(5) - (5)].node)); }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 125 "Intro.y"
    { (yyval.node)= new IfStatement((yysemantic_stack_[(7) - (3)].node),(yysemantic_stack_[(7) - (5)].node),(yysemantic_stack_[(7) - (7)].node)); }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 129 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 130 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 131 "Intro.y"
    { (yyval.node) = new Parenthesis((yysemantic_stack_[(3) - (2)].node)); }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 132 "Intro.y"
    { (yyval.node) = new Assignment((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));}
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 133 "Intro.y"
    { (yyval.node) = new Addition((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 134 "Intro.y"
    { (yyval.node) = new Subtraction((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 135 "Intro.y"
    { (yyval.node) = new Multiplication((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 136 "Intro.y"
    { (yyval.node) = new Division((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 137 "Intro.y"
    { (yyval.node) = new Less((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 138 "Intro.y"
    { (yyval.node) = new Greater((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 139 "Intro.y"
    { (yyval.node) = new LessEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 140 "Intro.y"
    { (yyval.node) = new GreaterEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 141 "Intro.y"
    { (yyval.node) = new Equal((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 142 "Intro.y"
    { (yyval.node) = new NotEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 143 "Intro.y"
    { (yyval.node) = new And((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 144 "Intro.y"
    { (yyval.node) = new Or((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 145 "Intro.y"
    { (yyval.node) = new Not((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 62:
/* Line 670 of lalr1.cc  */
#line 146 "Intro.y"
    { (yyval.node) = new Plus((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 63:
/* Line 670 of lalr1.cc  */
#line 147 "Intro.y"
    { (yyval.node) = new Minus((yysemantic_stack_[(2) - (2)].node));  }
    break;


/* Line 670 of lalr1.cc  */
#line 842 "Intro.tab.cpp"
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
  const signed char parser::yypact_ninf_ = -72;
  const short int
  parser::yypact_[] =
  {
       142,   -14,   -24,   -12,   -10,    -6,     6,   168,   -72,   -72,
     -72,   -72,   -72,    62,    62,    62,    62,   -72,    11,    93,
     -72,   -72,   -72,    42,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   200,    62,    62,    62,   170,   -72,
     -72,   -72,   219,   -72,   -72,   -72,   238,   -72,   -72,   106,
     -72,   -72,   -72,    -9,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,   -72,   306,   255,   272,
     -72,   -72,   170,   -72,   -72,   -72,   -72,    14,    56,   -72,
     317,   327,   337,   337,   337,   337,   337,   337,    12,    12,
     -72,   -72,   155,   155,   183,   -72,   -72,   -72,    29,   -72,
      43,    40,   -72,   155,   289,   155,    56,   -11,   155,   -72,
     155,   -72,   -72,   -72,   -72
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    46,     0,     0,     0,     0,     0,     0,    13,    14,
      16,    15,    45,     0,     0,     0,     0,    37,     0,     0,
       2,     7,     6,     0,     3,    27,    24,    25,    26,    19,
      20,    21,    23,    22,     0,     0,     0,     0,     0,    32,
      35,    34,     0,    63,    62,    61,     0,    29,    30,     0,
       1,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    48,     0,     0,
      41,    42,     0,    33,    47,    28,    31,     0,     0,    11,
      60,    59,    53,    54,    57,    58,    56,    55,    50,    49,
      51,    52,     0,     0,     0,    18,    17,    12,     0,     9,
       0,    43,    38,     0,     0,     0,     0,     0,     0,    39,
       0,     8,    10,    44,    40
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  parser::yypgoto_[] =
  {
       -72,   -72,    52,   -72,   -72,   -71,   -56,   -72,   -18,   -72,
     -72,   -72,   -72,   -72,   -36,   -33,   -72,   -72,     0,   -72,
      -3
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    19,    20,    21,    98,    22,    23,    97,    24,    25,
      49,    26,    27,    28,    29,    30,    31,    32,    72,    33,
      34
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -1;
  const signed char
  parser::yytable_[] =
  {
        48,    52,    70,    35,    42,    71,    77,    99,    77,    36,
      43,    44,    45,    46,     1,     2,     3,     4,     5,     6,
       7,    37,   100,    38,    78,    79,    12,    79,    95,    96,
      39,    76,    67,    68,    69,   112,    70,    13,    14,    71,
      64,    65,    40,    15,    16,    53,   107,    17,    18,    47,
     100,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   105,   106,     1,     8,     9,    10,    11,
     108,    51,    94,     0,   101,   102,     0,    12,     0,     0,
       0,     0,     0,     0,     0,   109,     0,   111,    13,    14,
     113,   104,   114,    50,    15,    16,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    12,     1,
       2,     3,     4,     5,     6,     7,     0,     0,     0,    13,
      14,    12,     0,     0,     0,    15,    16,     0,     0,    17,
      18,     0,    13,    14,     0,     0,     0,     0,    15,    16,
       0,     0,    17,    18,    75,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    12,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,    13,    14,
      12,     1,     0,     1,    15,    16,     0,     0,    17,    18,
       0,    13,    14,    12,     0,    12,     1,    15,    16,     0,
       0,    17,    18,     0,    13,    14,    13,    14,    12,     0,
      15,    16,    15,    16,    41,     0,    17,     0,     0,    13,
      14,     0,     0,     0,     0,    15,    16,   103,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,    66,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,    73,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,    74,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,    92,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,    93,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,   110,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65
  };

  /* YYCHECK.  */
  const signed char
  parser::yycheck_[] =
  {
        18,    19,    38,    17,     7,    38,    17,    78,    17,    33,
      13,    14,    15,    16,     3,     4,     5,     6,     7,     8,
       9,    33,    78,    33,    33,    36,    15,    36,    14,    15,
      36,    49,    35,    36,    37,   106,    72,    26,    27,    72,
      28,    29,    36,    32,    33,     3,     3,    36,    37,    38,
     106,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    34,    35,     3,    10,    11,    12,    13,
      30,    19,    72,    -1,    92,    93,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   105,    26,    27,
     108,    94,   110,     0,    32,    33,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    26,
      27,    15,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,
      37,    -1,    26,    27,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    37,    38,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    26,    27,
      15,     3,    -1,     3,    32,    33,    -1,    -1,    36,    37,
      -1,    26,    27,    15,    -1,    15,     3,    32,    33,    -1,
      -1,    36,    37,    -1,    26,    27,    26,    27,    15,    -1,
      32,    33,    32,    33,    36,    -1,    36,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    32,    33,    34,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    15,    26,    27,    32,    33,    36,    37,    40,
      41,    42,    44,    45,    47,    48,    50,    51,    52,    53,
      54,    55,    56,    58,    59,    17,    33,    33,    33,    36,
      36,    36,    59,    59,    59,    59,    59,    38,    47,    49,
       0,    41,    47,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    36,    59,    59,    59,
      53,    54,    57,    36,    34,    38,    47,    17,    33,    36,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    34,    34,    57,    14,    15,    46,    43,    44,
      45,    47,    47,    34,    59,    34,    35,     3,    30,    47,
      34,    47,    44,    47,    47
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
     279,   280,   281,    40,    41,    44,    59,   123,   125
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    39,    40,    40,    40,    40,    41,    41,    42,    43,
      43,    44,    44,    45,    45,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      49,    49,    50,    51,    51,    52,    53,    54,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     1,     2,     2,     1,     1,     6,     1,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     2,     2,     3,     2,     2,     2,     1,     5,     6,
       7,     1,     1,     5,     7,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2
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
  "UNARYOP", "NOT", "'('", "')'", "','", "';'", "'{'", "'}'", "$accept",
  "compileunit", "declaration", "functiondeclaration", "datadeclarations",
  "datadeclaration", "typespecifier", "datavalue", "statement",
  "compoundstatement", "statementlist", "breakstatement",
  "returnstatement", "continuestatement", "exprstatement",
  "emptystatement", "whilestatement", "forstatement", "forprimitive",
  "ifstatement", "expr", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        40,     0,    -1,    41,    -1,    47,    -1,    40,    41,    -1,
      40,    47,    -1,    44,    -1,    42,    -1,    45,     3,    33,
      43,    34,    47,    -1,    44,    -1,    43,    35,    44,    -1,
      45,     3,    36,    -1,    45,     3,    17,    46,    -1,    10,
      -1,    11,    -1,    13,    -1,    12,    -1,    15,    -1,    14,
      -1,    53,    -1,    54,    -1,    55,    -1,    58,    -1,    56,
      -1,    50,    -1,    51,    -1,    52,    -1,    48,    -1,    37,
      49,    38,    -1,    37,    38,    -1,    47,    -1,    49,    47,
      -1,     7,    36,    -1,     9,    59,    36,    -1,     9,    36,
      -1,     8,    36,    -1,    59,    36,    -1,    36,    -1,     5,
      33,    59,    34,    47,    -1,     6,    33,    57,    57,    34,
      47,    -1,     6,    33,    57,    57,    59,    34,    47,    -1,
      53,    -1,    54,    -1,     4,    33,    59,    34,    47,    -1,
       4,    33,    59,    34,    47,    30,    47,    -1,    15,    -1,
       3,    -1,    33,    59,    34,    -1,     3,    17,    59,    -1,
      59,    27,    59,    -1,    59,    26,    59,    -1,    59,    28,
      59,    -1,    59,    29,    59,    -1,    59,    20,    59,    -1,
      59,    21,    59,    -1,    59,    25,    59,    -1,    59,    24,
      59,    -1,    59,    22,    59,    -1,    59,    23,    59,    -1,
      59,    19,    59,    -1,    59,    18,    59,    -1,    32,    59,
      -1,    27,    59,    -1,    26,    59,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,    10,    13,    15,    17,    24,
      26,    30,    34,    39,    41,    43,    45,    47,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    67,    69,    73,
      76,    78,    81,    84,    88,    91,    94,    97,    99,   105,
     112,   120,   122,   124,   130,   138,   140,   142,   146,   150,
     154,   158,   162,   166,   170,   174,   178,   182,   186,   190,
     194,   198,   201,   204
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    46,    46,    47,    48,    49,    52,    53,    56,    59,
      60,    63,    64,    67,    68,    69,    70,    73,    74,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    88,    89,
      92,    93,    97,   100,   101,   104,   107,   110,   113,   116,
     117,   120,   121,   124,   125,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147
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
      33,    34,    28,     2,    35,    26,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      20,    17,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
  const int parser::yylast_ = 366;
  const int parser::yynnts_ = 21;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 50;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 39;

  const unsigned int parser::yyuser_token_number_max_ = 281;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1507 "Intro.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 152 "Intro.y"


namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
