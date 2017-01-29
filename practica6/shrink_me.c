//Practica 6
//"Hackea" este programa
#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int var1,var2;//variables de tipo entero sin signo
	printf("Ingresa dos enteros sin signo(maximo %u):",UINT_MAX);
	scanf("%d",&var1);
	scanf("%d",&var2);
	printf("%d",(var1>var2)? var1:var2);//seleccion entre de una variable a otra de acuerdo a la condicion para imprimir el num mayor
}
