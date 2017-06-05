#include <stdio.h>
int main()
{
int i;
int soma;
float media;

for (i=1;i<=100;i++)
 {
  soma=soma+i;
 }
media=(float) soma/100;
printf("\nA media eh=%f",media);
return 0;
}
