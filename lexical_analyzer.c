#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_TOKEN_LENGTH 100

// List of C keywords
const char *keywords[] = {
    "int", "float", "if", "else", "while", "return", "for", "do", "break", "continue", "switch",
    "case", "default", "void", "char", "double", "long", "short", "unsigned", "signed", "static", "struct"
};

#define NUM_KEYWORDS (sizeof(keywords) / sizeof(keywords[0]))

// Function to check if a string is a keyword
int isKeyword(char *str) {
    for (int i = 0; i < NUM_KEYWORDS; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' ||
            ch == '<' || ch == '>' || ch == '!' || ch == '&' || ch == '|');
}

// Function to tokenize input C code
void tokenize(FILE *file) {
    char ch, buffer[MAX_TOKEN_LENGTH];
    int index = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch) || ch == '_') {
            buffer[index++] = ch;
        } else {
            if (index != 0) {
                buffer[index] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else if (isdigit(buffer[0]))
                    printf("Number: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                index = 0;
            }
            if (isOperator(ch)) {
                printf("Operator: %c\n", ch);
            } else if (ch == ';' || ch == ',' || ch == '(' || ch == ')' || ch == '{' || ch == '}') {
                printf("Symbol: %c\n", ch);
            }
        }
    }
}

int main() {
    FILE *file = fopen("test.c", "r");
    if (!file) {
        printf("Error: Cannot open test.c\n");
        return 1;
    }
    tokenize(file);
    fclose(file);
    return 0;
}