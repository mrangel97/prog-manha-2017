#include <stdio.h>
int main()
{
  int num;
  
  do{
  printf("\nQual operaçãoo você deseja fazer");
  printf("\n1-Adição");
  printf("\n2-Subtração");
  printf("\n3-Multiplicação");
  printf("\n4-Divisão");
  printf("\n0-Sair");
  printf("\nOpção: ");
         
  scanf("%d",&num);
  
     switch(num)
     {
      case 1:
       printf("\nAdição selecionada!!");
       break;
      case 2:
       printf("\nSubtração selecionada!!");
       break;
      case 3:
       printf("\nMultiplicação selecionada!!");
       break;
      case 4:
       printf("\nDivisão selecionada!!");
       break;
      case 0:
       printf("\nTchau!!!");
       break;
      default:
       printf("\nOpção Inválida!!");
    }
      
  }while(num!=0);
  
  return 0;
}