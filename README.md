# Arch_minimal

Este código é um programa que executa algumas operações no Arch Linux usando a ferramenta de gerenciamento de pacotes pacman.

O programa apresenta um menu de quatro opções para o usuário escolher:

   1. Ver pacotes que não fazem parte dos repositórios oficiais.
   2. Remover pacotes que não fazem parte dos repositórios oficiais.
   3. Visualizar pacotes órfãos.
   4. Sair.

As opções são implementadas usando a função switch-case em que cada opção executa um comando do pacman no terminal.

A opção 1 executa "pacman -Qm", que lista todos os pacotes instalados que não fazem parte dos repositórios oficiais do Arch Linux, e "pacman -Qqm > pkgs.txt", que redireciona essa lista para um arquivo de texto chamado "pkgs.txt".

A opção 2 executa "pacman -Rscn $(cat pkgs.text)", que remove todos os pacotes listados no arquivo "pkgs.txt" e suas dependências desnecessárias.

A opção 3 executa "pacman -Qdt", que lista todos os pacotes instalados que não têm nenhuma dependência e não são necessários para o sistema.

A opção 4 encerra o programa. O programa usa algumas funções definidas no início do código para imprimir textos coloridos na saída do console.
