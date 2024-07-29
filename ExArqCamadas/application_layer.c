#include <string.h>
#include "data_layer.h"  // 📂 Inclui a camada de dados
#include "application_layer.h"

// 🧩 Camada de Aplicação
int adicionar_livro(char *titulo, char *autor) {
    if (titulo == NULL || autor == NULL || strlen(titulo) == 0 || strlen(autor) == 0) {
        return 0; // Dados inválidos
    }
    Livro livro;
    strcpy(livro.titulo, titulo);
    strcpy(livro.autor, autor);
    salvar_livro(livro);
    return 1; // Sucesso
}

void listar_livros_aplicacao() {
    listar_livros();
}
