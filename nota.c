#include <stdio.h>
int main()
{
  char nome[20];
  float av1,av2,media;
  
  printf("\nQual o seu nome:");
  scanf("%s",nome);
  
  printf("\nEntre com av1:");
  scanf("%f",&av1);
  
  printf("\nEntre com av2:");
  scanf("%f",&av2);
  
  media=(av1+av2)/2;
  printf("Olá %s.Sua media eh %.1f\n",nome,media);
  return 0;
}