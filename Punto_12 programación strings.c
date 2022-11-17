#include <stdio.h>
#include <string.h>

int main(void) {
  char word[40];
  printf("Ingrese una palabra: ");
  scanf("%s",&word);
  printf("La palabra tiene %d caracteres.", strlen(word));
  return 0;
}