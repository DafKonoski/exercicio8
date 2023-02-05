//receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char nome[50];
  int tam;
  
  printf("Nome:\n");
  gets(nome);

  for(int i = 0; i <= strlen(nome); i++){
    for(int j = 0; j < strlen(nome); j++){
          printf("\%c", nome[j]);
      }
      printf("\n\n");
  }
    
}