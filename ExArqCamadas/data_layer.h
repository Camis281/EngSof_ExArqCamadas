#ifndef DATA_LAYER_H
#define DATA_LAYER_H

typedef struct {
    char titulo[100];
    char autor[100];
} Livro;

void salvar_livro(Livro livro);
void listar_livros();

#endif
