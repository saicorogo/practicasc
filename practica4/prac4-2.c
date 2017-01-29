/*practica 4-2
saine coronado gozain 
*/
#include<stdio.h>
int main()
{
int n,i;
	printf("inserta un numero\t");
	scanf("\n%d",&n);//almacena un entero
for (i=0;i<=n;i++){//for desde 0 hasta n
	printf(!(i%2==0)?"%d\n":"",i);}//imprime numeros nones
}
