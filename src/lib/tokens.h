// myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H
#include <string>
#include <cstring>


enum TokenType {LEFT, RIGHT, ADD, SUBTRACT, MULTIPLY, DIVIDE, NUMBER, OTHER};

TokenType identify(char *t) {
    if (strcmp(t, "(" == 0))
        return LEFT;
    if (strcmp(t, ")" == 0))
        return RIGHT;
    if (strcmp(t, "+" == 0))
        return ADD;
    if (strcmp(t, "-" == 0))
        return SUBTRACT;
    if (strcmp(t, "*" == 0))
        return MULTIPLY;
    if (strcmp(t, "/" == 0))
        return DIVIDE;
    float value;
    if (sscanf(t, "%g", &value) == 1)
        return NUMBER;
    return OTHER;
}

struct Token {
    int line;
    int column;
    TokenType token_type;
    
};


#endif