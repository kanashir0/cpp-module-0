# C++ Module 00

## 📝 Descrição

Este repositório contém as soluções para o **Módulo 00** do currículo de C++ da 42. O objetivo deste módulo é introduzir a linguagem C++, servindo como uma transição do C para a Programação Orientada a Objetos (POO).

Os principais conceitos abordados incluem:
- Namespaces
- Classes e Objetos
- Funções Membro
- Streams de entrada/saída (stdio: `std::cout`, `std::cin`, `std::endl`)
- Listas de inicialização
- `static`, `const` e encapsulamento

## 📂 Estrutura do Projeto

O módulo é dividido em exercícios. Atualmente, este repositório contém:

### ex00: Megaphone
Um programa simples que funciona como um megafone, convertendo todos os argumentos passados para letras maiúsculas. Se nenhum argumento for fornecido, ele emite um "ruído de feedback" padrão.

**Conceitos Praticados:**
- Sintaxe básica de C++
- Manipulação de strings e char
- Uso de `std::cout` e `std::toupper`

## 🛠️ Como Compilar e Executar

Cada exercício possui seu próprio `Makefile`. Para compilar e testar o **ex00**, siga os passos abaixo:

1. Navegue até o diretório do exercício:
   ```bash
   cd ex00
   ```

2. Compile o código usando `make`:
   ```bash
   make
   ```
   Isso gerará um executável chamado `megaphone`.

3. Execute o programa com argumentos:
   ```bash
   ./megaphone "shhhhh... I think the students are asleep..."
   ```
   **Saída Esperada:**
   ```
   SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
   ```

4. Teste sem argumentos:
   ```bash
   ./megaphone
   ```
   **Saída Esperada:**
   ```
   * LOUD AND UNBEARABLE FEEDBACK NOISE *
   ```

5. Para limpar os arquivos objetos e o executável:
   ```bash
   make fclean
   ```

## ✅ Status da Revisão

- **ex00 (Megaphone)**: O código segue os requisitos do subject, compilando com as flags corretas (`-Wall -Wextra -Werror -std=c++98`) e produzindo a saída esperada. O `Makefile` foi ajustado para gerenciar corretamente os diretórios de objetos.

### ex01: My Awesome PhoneBook
Uma agenda telefônica simples interativa. O programa aceita três comandos principais: `ADD`, `SEARCH` e `EXIT`.

**Conceitos Praticados:**
- Classes e Objetos
- Controle de fluxo e loops
- Manipulação de arrays de objetos da classe
- Formatação de saída com `iomanip` (`std::setw`)

## 🛠️ Como Compilar e Executar

Cada exercício possui seu próprio `Makefile`. Para compilar e testar o **ex01**, siga os passos abaixo:

1. Navegue até o diretório do exercício:
   ```bash
   cd ex01
   ```

2. Compile o código usando `make`:
   ```bash
   make
   ```
   Isso gerará um executável chamado `phonebook`.

3. Execute o programa:
   ```bash
   ./phonebook
   ```

4. Interaja com o programa usando os comandos:
   - `ADD`: Adiciona um novo contato (limite de 8, sobrescreve o mais antigo).
   - `SEARCH`: Lista os contatos e permite visualizar detalhes pelo índice.
   - `EXIT`: Fecha o programa e perde os contatos (memória volátil).

5. Para limpar os arquivos objetos e o executável:
   ```bash
   make fclean
   ```
