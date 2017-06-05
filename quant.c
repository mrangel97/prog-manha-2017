#include <stdio.h>

int main()
{
  float nota;
  int quant,maior=0,menor=0;
  int i;
  float media,soma;
  
  printf("\nQuantos alunos tem na sala: ");
  scanf("%d",&quant);
  
  for(i=0;i<quant;i++)
  {
    printf("\nQual a nota do aluno %d : ",i+1);
    scanf("%f",&nota);
    
    soma+=nota;
    
    if(nota>=5)
     maior++;
    else if(nota<5)
     menor++;
  }
  media=soma/quant;
  printf("\nA media dos alunos= %.2f",media);
  printf("\nOs alunos que ficaram com a nota acima de 5 = %d",maior);
  printf("\nOs alunos que não ficaram com a nota acima de 5 = %d\n",menor);
  
  return 0;
  
}