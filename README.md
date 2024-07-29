# Projeto de Gerenciamento de Livros em Camadas

Este repositório apresenta um exemplo de projeto desenvolvido com o padrão de arquitetura em camadas. O projeto foi criado como parte do trabalho de Engenharia de Software do 4º período do curso de Engenharia da Computação.
Este projeto é uma aplicação simples de gerenciamento de livros que utiliza uma arquitetura em camadas. A arquitetura em camadas é uma abordagem comum para organizar o código de forma modular e escalável, onde cada camada tem uma responsabilidade específica. Este projeto é dividido nas seguintes camadas:

- **Camada de Dados** 📂: Gerencia a leitura e escrita dos dados dos livros.
- **Camada de Aplicação** 🧩: Implementa a lógica de adicionar e listar livros.
- **Camada de Apresentação** 🎨: Fornece a interface com o usuário e captura as entradas.
- **Main** 🚀: Controla o fluxo do programa e interage com o usuário por meio de um menu.

## Funcionalidades

- **Adicionar Livro**: Permite ao usuário adicionar um novo livro informando o título e o autor.
- **Listar Livros**: Exibe todos os livros que foram adicionados e salvos em um arquivo.

## Estrutura do Projeto

- **data_layer.h** 📂: Cabeçalho da camada de dados, contendo a definição da estrutura `Livro` e as declarações das funções `salvar_livro` e `listar_livros`.
- **data_layer.c** 📂: Implementação das funções de manipulação de dados, como salvar e listar livros.
- **application_layer.h** 🧩: Cabeçalho da camada de aplicação, declarando as funções `adicionar_livro` e `listar_livros_aplicacao`.
- **application_layer.c** 🧩: Implementação da lógica de negócios, incluindo a adição e listagem de livros.
- **presentation_layer.h** 🎨: Cabeçalho da camada de apresentação, declarando as funções `menu_adicionar_livro` e `menu_listar_livros`.
- **presentation_layer.c** 🎨: Implementação da interface com o usuário e interação com a camada de aplicação.
- **main.c** 🚀: Ponto de entrada do programa, gerenciando o menu e a interação com o usuário.

## Compilação e Execução

Para compilar o projeto, você pode usar o `gcc` para compilar todos os arquivos `.c` juntos. No terminal, navegue até a pasta do projeto e execute:

```sh
gcc main.c data_layer.c application_layer.c presentation_layer.c -o layered_app
