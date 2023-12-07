#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char *data;
    struct Node *next;
};

struct MinhaStruct {
    int id;
    char tipo[50];
    char escopo[50];
    _Bool tem_retorno;
    char tipo_retorno[50];
    struct Node *parametros; // Lista ligada de strings para os parâmetros
};

// Função para criar um novo nó na lista ligada de strings
struct Node* criarNo(char *data) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->data = strdup(data); // Usando strdup para alocar e copiar a string
    novoNo->next = NULL;
    return novoNo;
}

// Função para adicionar um nó à lista ligada de strings
void adicionarParametro(struct MinhaStruct *estrutura, char *parametro) {
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
void liberarLista(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp->data);
        free(temp);
    }
}

int main() {
    // Exemplo de utilização da estrutura
    struct MinhaStruct exemplo;
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
    printf("ID: %d\n", exemplo.id);
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

    // Liberando a memória alocada para a lista ligada de strings
    liberarLista(exemplo.parametros);

    return 0;
}