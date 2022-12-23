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
extern int yylex(yy::parser::semantic_type *yylval);
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
        yychar = yylex (&yylval);
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
          case 43:
/* Line 670 of lalr1.cc  */
#line 117 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 118 "Intro.y"
    { (yyval.node) = (yysemantic_stack_[(1) - (1)].node); }
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 119 "Intro.y"
    { (yyval.node) = new Parenthesis((yysemantic_stack_[(3) - (2)].node)); }
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 120 "Intro.y"
    { (yyval.node) = new Assignment((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));}
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 121 "Intro.y"
    { (yyval.node) = new Addition((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 122 "Intro.y"
    { (yyval.node) = new Subtraction((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 123 "Intro.y"
    { (yyval.node) = new Multiplication((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 124 "Intro.y"
    { (yyval.node) = new Division((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 125 "Intro.y"
    { (yyval.node) = new Less((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 126 "Intro.y"
    { (yyval.node) = new Greater((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 127 "Intro.y"
    { (yyval.node) = new LessEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 128 "Intro.y"
    { (yyval.node) = new GreaterEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 129 "Intro.y"
    { (yyval.node) = new Equal((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 130 "Intro.y"
    { (yyval.node) = new NotEqual((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 131 "Intro.y"
    { (yyval.node) = new And((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 132 "Intro.y"
    { (yyval.node) = new Or((yysemantic_stack_[(3) - (1)].node),(yysemantic_stack_[(3) - (3)].node));  }
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 133 "Intro.y"
    { (yyval.node) = new Not((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 134 "Intro.y"
    { (yyval.node) = new Plus((yysemantic_stack_[(2) - (2)].node));  }
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 135 "Intro.y"
    { (yyval.node) = new Minus((yysemantic_stack_[(2) - (2)].node));  }
    break;


/* Line 670 of lalr1.cc  */
#line 574 "Intro.tab.cpp"
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
  const signed char parser::yypact_ninf_ = -45;
  const short int
  parser::yypact_[] =
  {
       123,   -45,     6,    -9,    -4,    27,    26,    30,   143,   -45,
     -45,   -45,   -45,   161,   161,   161,   161,   -45,     8,    89,
     -45,   -45,   -45,    58,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   178,   161,   161,   161,   159,   -45,
     -45,   -45,   197,   -45,   -45,   -45,   216,   -45,    31,   -45,
     -45,   -45,   -11,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   -45,   284,   233,   250,   -45,
     -45,   159,   -45,   -45,   -45,    32,    63,   -45,   295,    85,
     305,   305,   305,   305,   305,   305,    -8,    -8,   -45,   -45,
     135,   135,    38,   -45,   -45,   -45,    -7,   -45,    74,    50,
     -45,   135,   267,   135,    63,   -10,   135,   -45,   135,   -45,
     -45,   -45,   -45
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    43,    44,     0,     0,     0,     0,     0,     0,    13,
      14,    16,    15,     0,     0,     0,     0,    35,     0,     0,
       2,     7,     6,     0,     3,    27,    24,    25,    26,    19,
      20,    21,    23,    22,     0,     0,     0,     0,     0,    30,
      33,    32,     0,    61,    60,    59,     0,    29,     0,     1,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    46,     0,     0,    39,
      40,     0,    31,    45,    28,     0,     0,    11,    58,    57,
      51,    52,    55,    56,    54,    53,    48,    47,    49,    50,
       0,     0,     0,    17,    18,    12,     0,     9,     0,    41,
      36,     0,     0,     0,     0,     0,     0,    37,     0,     8,
      10,    42,    38
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  parser::yypgoto_[] =
  {
       -45,   -45,    48,   -45,   -45,   -44,   -38,   -45,   -18,   -45,
     -45,   -45,   -45,   -35,   -34,   -45,   -45,     9,   -45,    -6
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    19,    20,    21,    96,    22,    23,    95,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    71,    33,    34
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -1;
  const signed char
  parser::yytable_[] =
  {
        48,    51,    42,    69,    70,    75,    75,    43,    44,    45,
      46,     1,     2,     3,     4,     5,     6,     7,     8,    63,
      64,    76,    35,    36,    77,    77,   103,   104,    37,    66,
      67,    68,    97,    13,    14,    93,    69,    70,    98,    15,
      16,     1,     2,    17,    18,    47,    94,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    38,
     110,    39,    52,    13,    14,    40,    98,    50,    74,    15,
      16,   101,    99,   100,     9,    10,    11,    12,   105,   106,
      92,     0,     0,   107,     0,   109,   102,     0,   111,    49,
     112,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,    17,    18,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     1,     2,
       3,     4,     5,     6,     7,     8,     1,     2,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,    17,    18,
      13,    14,     1,     2,     1,     2,    15,    16,    13,    14,
      17,    18,     0,     0,    15,    16,     0,     0,    41,     0,
       0,     0,     0,     0,    13,    14,    13,    14,     0,     0,
      15,    16,    15,    16,    17,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,    65,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    72,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,    73,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,    90,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,    91,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
     108,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64
  };

  /* YYCHECK.  */
  const signed char
  parser::yycheck_[] =
  {
        18,    19,     8,    38,    38,    16,    16,    13,    14,    15,
      16,     3,     4,     5,     6,     7,     8,     9,    10,    27,
      28,    32,    16,    32,    35,    35,    33,    34,    32,    35,
      36,    37,    76,    25,    26,     3,    71,    71,    76,    31,
      32,     3,     4,    35,    36,    37,    14,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    32,
     104,    35,     4,    25,    26,    35,   104,    19,    37,    31,
      32,    33,    90,    91,    11,    12,    13,    14,     4,    29,
      71,    -1,    -1,   101,    -1,   103,    92,    -1,   106,     0,
     108,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     3,     4,
       5,     6,     7,     8,     9,    10,     3,     4,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,    36,
      25,    26,     3,     4,     3,     4,    31,    32,    25,    26,
      35,    36,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    25,    26,    25,    26,    -1,    -1,
      31,    32,    31,    32,    35,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    25,    26,    31,    32,    35,    36,    39,
      40,    41,    43,    44,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    16,    32,    32,    32,    35,
      35,    35,    57,    57,    57,    57,    57,    37,    46,     0,
      40,    46,     4,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    35,    57,    57,    57,    51,
      52,    55,    35,    33,    37,    16,    32,    35,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      33,    33,    55,     3,    14,    45,    42,    43,    44,    46,
      46,    33,    57,    33,    34,     4,    29,    46,    33,    46,
      43,    46,    46
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    61,   271,   272,    60,
      62,   273,   274,   275,   276,    45,   277,    42,    47,   278,
     279,   280,    40,    41,    44,    59,   123,   125
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    38,    39,    39,    39,    39,    40,    40,    41,    42,
      42,    43,    43,    44,    44,    44,    44,    45,    45,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    47,    47,
      48,    49,    49,    50,    51,    52,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     1,     2,     2,     1,     1,     6,     1,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     2,     2,     2,     1,     5,     6,     7,     1,
       1,     5,     7,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2
  };


  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "IF", "WHILE",
  "FOR", "BREAK", "CONTINUE", "RETURN", "INT", "DOUBLE", "VOID", "STRING",
  "IFRULE", "'='", "OR", "AND", "'<'", "'>'", "EQ", "NE", "GE", "LE",
  "'-'", "PLUS", "'*'", "'/'", "ELSE", "UNARYOP", "NOT", "'('", "')'",
  "','", "';'", "'{'", "'}'", "$accept", "compileunit", "declaration",
  "functiondeclaration", "datadeclarations", "datadeclaration",
  "typespecifier", "datavalue", "statement", "compoundstatement",
  "breakstatement", "returnstatement", "continuestatement",
  "exprstatement", "emptystatement", "whilestatement", "forstatement",
  "forprimitive", "ifstatement", "expr", YY_NULL
  };

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        39,     0,    -1,    40,    -1,    46,    -1,    39,    40,    -1,
      39,    46,    -1,    43,    -1,    41,    -1,    44,     4,    32,
      42,    33,    46,    -1,    43,    -1,    42,    34,    43,    -1,
      44,     4,    35,    -1,    44,     4,    16,    45,    -1,    11,
      -1,    12,    -1,    14,    -1,    13,    -1,     3,    -1,    14,
      -1,    51,    -1,    52,    -1,    53,    -1,    56,    -1,    54,
      -1,    48,    -1,    49,    -1,    50,    -1,    47,    -1,    36,
      46,    37,    -1,    36,    37,    -1,     8,    35,    -1,    10,
      57,    35,    -1,    10,    35,    -1,     9,    35,    -1,    57,
      35,    -1,    35,    -1,     6,    32,    57,    33,    46,    -1,
       7,    32,    55,    55,    33,    46,    -1,     7,    32,    55,
      55,    57,    33,    46,    -1,    51,    -1,    52,    -1,     5,
      32,    57,    33,    46,    -1,     5,    32,    57,    33,    46,
      29,    46,    -1,     3,    -1,     4,    -1,    32,    57,    33,
      -1,     4,    16,    57,    -1,    57,    26,    57,    -1,    57,
      25,    57,    -1,    57,    27,    57,    -1,    57,    28,    57,
      -1,    57,    19,    57,    -1,    57,    20,    57,    -1,    57,
      24,    57,    -1,    57,    23,    57,    -1,    57,    21,    57,
      -1,    57,    22,    57,    -1,    57,    18,    57,    -1,    57,
      17,    57,    -1,    31,    57,    -1,    26,    57,    -1,    25,
      57,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,    10,    13,    15,    17,    24,
      26,    30,    34,    39,    41,    43,    45,    47,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    67,    69,    73,
      76,    79,    83,    86,    89,    92,    94,   100,   107,   115,
     117,   119,   125,   133,   135,   137,   141,   145,   149,   153,
     157,   161,   165,   169,   173,   177,   181,   185,   189,   193,
     196,   199
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    37,    37,    38,    39,    40,    43,    44,    47,    50,
      51,    54,    55,    58,    59,    60,    61,    64,    65,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    79,    80,
      85,    88,    89,    92,    95,    98,   101,   104,   105,   108,
     109,   112,   113,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135
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
      32,    33,    27,     2,    34,    25,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
      19,    16,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      15,    17,    18,    21,    22,    23,    24,    26,    29,    30,
      31
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 333;
  const int parser::yynnts_ = 20;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 49;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 38;

  const unsigned int parser::yyuser_token_number_max_ = 280;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1230 "Intro.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 140 "Intro.y"


namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}
