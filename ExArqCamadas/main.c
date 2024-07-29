#include <stdio.h>
#include "presentation_layer.h"  // 🎨 Inclui a camada de apresentação

// 🚀 Ponto de entrada do programa
int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do stdin

        switch (opcao) {
            case 1:
                menu_adicionar_livro();
                break;
            case 2:
                menu_listar_livros();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}
