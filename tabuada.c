#include <stdio.h>


int main()
{
  int num;
  int i,resp;
  
  
  printf("\nDigite um numero: ");
  scanf("%d",&num);
  
  for(i=0;i<=10;i++)
  {
    resp=num*i;
    printf(" %d X %d = %d\n",num,i,resp);
  }  
  return 0;
}