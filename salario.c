#include <stdio.h>
#include <math.h>

int main()
{
  float sal_liq;
  float sal_bru;
  
  printf("\nEntre com o valor do sal_bru:");
  scanf("%f",&sal_bru);
  
  sal_liq=sal_bru*0.80;
  
  printf("\nSalario liquido eh=%f\n",sal_liq);
}