#ifndef TABLE_H
#define TABLE_H

typedef struct Symbol {
    char *id;
    int escopo;
    char *tipo;
	int qntParams;
    char **tipoParams;
} Symbol;

void up();
void down();
int lookup(char *name, Symbol *symb);
int insert(char* id, char* tipo, int qntParams, char** tipoParams);
void print_table();
void free_table();

#endif