#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRUCTS 100 // Tamanho máximo do array de structs

struct Node {
    char *data;
    struct Node *next;
};

struct Entidade {
    int id;
    char tipo[50];
    char escopo[50];
    _Bool tem_retorno;
    char tipo_retorno[50];
    struct Node *parametros; // Lista ligada de strings para os parâmetros
};

struct Entidade tabelaDeSimbolos[MAX_STRUCTS]; // Array de structs

int tamanhoAtual = 0; // Variável global para controlar o número atual

// Função para criar um novo nó na lista ligada de strings
struct Node* criarNo(char *data) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->data = strdup(data); // Usando strdup para alocar e copiar a string
    novoNo->next = NULL;
    return novoNo;
}

// Função para adicionar um nó à lista ligada de strings
void adicionarParametro(struct Entidade *estrutura, char *parametro) {
    if (estrutura->parametros == NULL) {
        estrutura->parametros = criarNo(parametro);
    } else {
        struct Node *atual = estrutura->parametros;
        while (atual->next != NULL) {
            atual = atual->next;
        }
        atual->next = criarNo(parametro);
    }
}

// Função para liberar a memória alocada para a lista ligada de strings
void liberarListaParametros(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp->data);
        free(temp);
    }
}

// Função para encontrar o índice da struct no array com base no Id
int encontrarIndicePorId(int id) {
    for (int i = 0; i < tamanhoAtual; i++) {
        if (tabelaDeSimbolos[i].id == id) {
            return i; // Retorna o índice se o Id for encontrado
        }
    }
    return -1; // Retorna -1 se o Id não for encontrado
}

// Função para inserir uma nova struct no array
void inserirStruct(int id, const char *tipo, const char *escopo, _Bool tem_retorno, const char *tipo_retorno) {
    if (tamanhoAtual < MAX_STRUCTS) {
        tabelaDeSimbolos[tamanhoAtual].id = id;
        strncpy(tabelaDeSimbolos[tamanhoAtual].tipo, tipo, sizeof(tabelaDeSimbolos[tamanhoAtual].tipo));
        strncpy(tabelaDeSimbolos[tamanhoAtual].escopo, escopo, sizeof(tabelaDeSimbolos[tamanhoAtual].escopo));
        tabelaDeSimbolos[tamanhoAtual].tem_retorno = tem_retorno;
        strncpy(tabelaDeSimbolos[tamanhoAtual].tipo_retorno, tipo_retorno, sizeof(tabelaDeSimbolos[tamanhoAtual].tipo_retorno));
        tamanhoAtual++;
        printf("Sucesso.\n");
    } else {
        printf("Falha. Limite atingido.\n");
    }
}

// Função para remover uma struct com base no Id
void removerStruct(int id) {
    int indice = encontrarIndicePorId(id);
    if (indice != -1) {
        // Substitui a struct a ser removida pela última struct no array
        tabelaDeSimbolos[indice] = tabelaDeSimbolos[tamanhoAtual - 1];
        tamanhoAtual--;
        printf("Sucesso.\n");
    } else {
        printf("Falha. Id não encontrado.\n");
    }
}

// Função para buscar uma struct com base no Id
void buscarStruct(int id) {
    int indice = encontrarIndicePorId(id);
    if (indice != -1) {
        printf("Id: %d, Tipo: %s, Escopo: %s, Tem Retorno: %d, Tipo de Retorno: %s\n",
               tabelaDeSimbolos[indice].id,
               tabelaDeSimbolos[indice].tipo,
               tabelaDeSimbolos[indice].escopo,
               tabelaDeSimbolos[indice].tem_retorno,
               tabelaDeSimbolos[indice].tipo_retorno);
    } else {
        printf("Falha. Id não encontrado.\n");
    }
}

// Função para atualizar uma struct com base no Id
void atualizarStruct(int id, const char *novo_tipo, const char *novo_escopo, _Bool novo_tem_retorno, const char *novo_tipo_retorno) {
    int indice = encontrarIndicePorId(id);
    if (indice != -1) {
        strncpy(tabelaDeSimbolos[indice].tipo, novo_tipo, sizeof(tabelaDeSimbolos[indice].tipo));
        strncpy(tabelaDeSimbolos[indice].escopo, novo_escopo, sizeof(tabelaDeSimbolos[indice].escopo));
        tabelaDeSimbolos[indice].tem_retorno = novo_tem_retorno;
        strncpy(tabelaDeSimbolos[indice].tipo_retorno, novo_tipo_retorno, sizeof(tabelaDeSimbolos[indice].tipo_retorno));
        printf("Sucesso.\n");
    } else {
        printf("Falha. Id não encontrado.\n");
    }
}

int main() {
    // Exemplo de utilização da estrutura
    struct Entidade exemplo;
    exemplo.id = 1;
    strcpy(exemplo.tipo, "ExemploTipo");
    strcpy(exemplo.escopo, "ExemploEscopo");
    exemplo.tem_retorno = 1; // Supondo que "1" represente verdadeiro
    strcpy(exemplo.tipo_retorno, "TipoRetorno");

    // Inicializando a lista de parâmetros como NULL
    exemplo.parametros = NULL;

    // Adicionando parâmetros à lista ligada de strings
    adicionarParametro(&exemplo, "parametro1");
    adicionarParametro(&exemplo, "parametro2");
    adicionarParametro(&exemplo, "parametro3");

    // Exibindo os dados da estrutura e dos parâmetros adicionados
    printf("Id: %d\n", exemplo.id);
    printf("Tipo: %s\n", exemplo.tipo);
    printf("Escopo: %s\n", exemplo.escopo);
    printf("Tem Retorno: %s\n", exemplo.tem_retorno ? "Sim" : "Não");
    printf("Tipo de Retorno: %s\n", exemplo.tipo_retorno);

    printf("Parâmetros:\n");
    struct Node *atual = exemplo.parametros;
    while (atual != NULL) {
        printf("%s\n", atual->data);
        atual = atual->next;
    }

    inserirStruct(1, "Exemplo", "Global", 1, "Inteiro");
    inserirStruct(2, "OutroExemplo", "Local", 0, "Nenhum");
    buscarStruct(1); // Busca a struct com Id 1
    buscarStruct(3); // Tentativa de buscar uma struct com Id inexistente
    atualizarStruct(1, "NovoTipo", "NovoEscopo", 0, "NovoRetorno");
    buscarStruct(1); // Verifica se a atualização foi feita corretamente
    removerStruct(2); // Remove a struct com Id 2
    buscarStruct(2); // Verifica se a remoção foi feita corretamente

    // Liberando a memória alocada para a lista ligada de strings
    liberarListaParametros(exemplo.parametros);

    return 0;
}