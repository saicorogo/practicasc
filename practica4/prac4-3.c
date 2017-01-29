/*practica 4-3
saine coronado gozain 
*/
#include<stdio.h>
int main()
{
int n,i;
	printf("inserta un numero\t");
	scanf("\n%d",&n);//almacena un entero
for (i=0;i<=n;i++){//for desde 0 hasta n
	if(!((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0))||(i==2)||(i==5)||(i==3)||(i==7)){
//if para imprimir los numeros primos al no tener multiplos de 2,3,5 o que sean 2,3,5 ya que estos ultimos si son  num primos
	printf("%d\n",i);
}}
}
