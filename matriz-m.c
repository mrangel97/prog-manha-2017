#include <stdio.h>
int main()
{
  float notas[4][3],media=0;
  int i,j,matricula;
  
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("\nEntre com nota da av%d do aluno %d: ",j+1,i+1);
      scanf("%f",&notas[i][j]);
    }
    printf("\n");
  }
  // imprimir as notas da av1
  
  printf("\nNotas AV1");
  for(i=0;i<=3;i++)
  {
    printf("\nAluno%d - nota %.2f: ",i+1,notas[i][0]);
  }
  //pedir a matricula e imprimir notas com o resultado
  printf("\nEntre com a matricula[1-4]: ");
  scanf("%d",&matricula);
  i=matricula-1;
  
  media=(notas[i][0] + notas[i][1] + notas[i][2]) / 3;
  printf("\nNotas do aluno%d",matricula);
  
  for(j=0;j<=2;j++)
  {
    printf("\nAV%d = %.2f",j+1,notas[i][j]);
  }
  printf("\nMedia final= %.2f\n",media);
  
  
                           
 return 0; 
}