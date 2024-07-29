#include <stdio.h>
#include <string.h>
#include "application_layer.h"  // 🧩 Inclui a camada de aplicação
#include "presentation_layer.h"

// 🎨 Camada de Apresentação
void menu_adicionar_livro() {
    char titulo[100];
    char autor[100];
    printf("Digite o título do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = '\0'; // Remover nova linha
    printf("Digite o autor do livro: ");
    fgets(autor, sizeof(autor), stdin);
    autor[strcspn(autor, "\n")] = '\0'; // Remover nova linha

    if (adicionar_livro(titulo, autor)) {
        printf("Livro adicionado com sucesso!\n");
    } else {
        printf("Dados inválidos!\n");
    }
}

void menu_listar_livros() {
    listar_livros_aplicacao();
}
