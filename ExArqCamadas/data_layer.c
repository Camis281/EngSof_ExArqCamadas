#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_layer.h"

// 📂 Camada de Dados
void salvar_livro(Livro livro) {
    FILE *file = fopen("livros.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(file, "%s,%s\n", livro.titulo, livro.autor);
    fclose(file);
}

void listar_livros() {
    FILE *file = fopen("livros.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    char linha[200];
    printf("Lista de Livros:\n");
    while (fgets(linha, sizeof(linha), file)) {
        char *titulo = strtok(linha, ",");
        char *autor = strtok(NULL, "\n");
        if (titulo && autor) {
            printf("Título: %s, Autor: %s\n", titulo, autor);
        }
    }
    fclose(file);
}
