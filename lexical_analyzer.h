#ifndef LEXICAL_ANALYZER_H
#define LEXICAL_ANALYZER_H

void tokenize(FILE *file);
int isKeyword(char *str);
int isOperator(char ch);

#endif