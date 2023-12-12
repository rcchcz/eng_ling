#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela.h"

#define MAX_SYMBOLS 100

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;
int currentScope = 0;

void up() {
    currentScope++;
}

void down() {
    currentScope--;
    if (currentScope < 0) {
        currentScope = 0;
    }
}

int lookup(char* id, Symbol* symb) {
    for (int i = symbolCount - 1; i >= 0; i--) {
        if (strcmp(symbolTable[i].id, id) == 0 && symbolTable[i].escopo <= currentScope) {
            *symb = symbolTable[i];
            return 1;
        }
    }
    return 0;
}

int insert(char* id, char* tipo, int qntParams, char** tipoParams) {
    if (symbolCount >= MAX_SYMBOLS) {
        printf("Tabela de símbolos está cheia.\n");
        return 0;
    }

    Symbol symbol;
    symbol.id = strdup(id);
    symbol.escopo = currentScope;
    symbol.tipo = strdup(tipo);
    symbol.qntParams = qntParams;
    symbol.tipoParams = (char *) malloc (qntParams);
    for(int i = 0; i < qntParams; i++){
        symbol.tipoParams[i] = strdup(tipoParams[i]);
    }

    symbolTable[symbolCount++] = symbol;
    return 1;
}

void print_table() {
    printf("Tabela de símbolos:\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("Nome: %s, Tipo: %s, Escopo: %d\n", symbolTable[i].id, symbolTable[i].tipo, symbolTable[i].escopo);
    }
}

void free_table() {
    for (int i = 0; i < symbolCount; i++) {
        free(symbolTable[i].id);
        free(symbolTable[i].tipo);
        for(int j = 0; j < symbolTable[i].qntParams; j++){
            free(symbolTable[i].tipoParams[j]);
        }
        free(symbolTable[i].tipoParams);
    }
}