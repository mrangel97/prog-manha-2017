#include <stdio.h>
int main()
{
  int voto1;
  int voto2;
  int soma;
  int resp;
  float perc1;
  float perc2;
  
  do{
     printf("\nInforme os votos do candidato1:");
     scanf("%d",&voto1);
    
    printf("\nInforme os votos do candidato2: ");
    scanf("%d",&voto2);
    
    soma=voto1+voto2;
    
    perc1=(float) voto1/soma;
    perc2=(float) voto2/soma;
    
    printf("\nDeseja continuar(1-sim/2-nao):");
    scanf("%d",&resp);
  }while(resp==1);
    
  printf("\nPorcentagem dos votos do candidato1=%.2f",perc1);
  printf("\nPorcentagem dos votos do candidato2=%.2f",perc2);
  
  return 0;
  
  
}