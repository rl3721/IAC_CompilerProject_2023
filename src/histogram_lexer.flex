%option noyywrap

%{
/* Now in a section of C that will be embedded
   into the auto-generated code. Flex will not
   try to interpret code surrounded by %{ ... %} */

/* Bring in our declarations for token types and
   the yylval variable. */
#include "histogram.hpp"
#include <iostream>
#include <math.h>
#include <string> 

// This is to work around an irritating bug in Flex
// https://stackoverflow.com/questions/46213840/get-rid-of-warning-implicit-declaration-of-function-fileno-in-flex
extern "C" int fileno(FILE *stream);

/* End the embedded code section. */
%}


%%

-?([0-9])+    { fprintf(stderr, "Number : %s\n", yytext); /* TODO: get value out of yytext and into yylval.numberValue */ 
yylval.numberValue = std::stod(yytext);  return Number; }

-?([0-9])+"."([0-9])+     { fprintf(stderr, "Number : %s\n", yytext); /* TODO: get value out of yytext and into yylval.numberValue */ 
yylval.numberValue = std::stod(yytext);  return Number; }

-?[0-9]+"/"[0-9]+         { fprintf(stderr, "Number : %s\n", yytext); /* TODO: get value out of yytext and into yylval.numberValue */ 
std::string text(yytext);
std::string numerator;
std::string determinator;
int index;
index = text.find("/");
numerator = text.substr(0, index);
determinator = text.substr(index + 1);
yylval.numberValue = std::stod(numerator)/std::stod(determinator);
return Number; 
}

(?i:[a-z]*)              { fprintf(stderr, "Word : %s\n", yytext); /* TODO: get value out of yytext and into yylval.wordValue */ 
yylval.wordValue = new std::string(yytext); return Word; }

"["[^]]*"]"              { fprintf(stderr, "Word : %s\n", yytext); /* TODO: get value out of yytext and into yylval.wordValue */ 
std::string text = std::string(yytext);
yylval.wordValue = new std::string(text.substr(1, text.length() - 2));
return Word; }

\n                       { fprintf(stderr, "Newline\n"); }

. 

%%

/* Error handler. This will get called if none of the rules match. */
void yyerror (char const *s)
{
   fprintf (stderr, "Flex Error: %s\n", s); /* s is the text that wasn't matched */
   exit(1);
}
