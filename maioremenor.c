#include <stdio.h>
int main()
{
	int num;
	int resp;
	int maior;
	int menor;
	
	maior=-9999;
	menor=9999;
	
	do{
	   printf("\nEntre com um numero de 0 a 100:");
	   scanf("%d",&num);
	
      if(num>maior)
	        maior=num;
      if(num<menor)
            menor=num;
      
	  printf("\nDeseja continuar(1-sim/2-nao)?");
	  scanf("%d",&resp);
   }while(resp==1);
   
   	printf("\nMaior numero eh=%d",maior);
   	printf("\nMenor numero eh=%d",menor);
   
   return 0;
}