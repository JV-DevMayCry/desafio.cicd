#include <stdio.h>
#include <assert.h>

void testar(){
  //função de teste simples
  assert(1 == 1); //verifica se 1 é igual a 1
  printf("Teste passou!\n");
  printf("Assim não po rra!\n");
}

int main() {
  testar();
  return 0;
}
