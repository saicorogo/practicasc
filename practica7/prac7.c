/*saine cor
practica 7  
cifrado con XOR*/
#include<stdio.h>

int main()
{
int a;
char i[]={'h','o','l','a'};

for (a=0;a<sizeof(i)/sizeof(char);a++)
{
      printf("%c : \t %c",i[a]^2,i[a]^2^2);
      
	printf("\n");
}  
}
