#include <stdio.h>

int main()
// printf("hello world!\n");
{
  int A, B, Soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &A);
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &B);
  
  Soma = A + B;
  printf ("O Valor da soma = %d", Soma);
  
  if(A > 10 && A < 20)
  {
    printf("O valor da soma eh maior que 10\n");
  }
  
  
  return(0);

}
