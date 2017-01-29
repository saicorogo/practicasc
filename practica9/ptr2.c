/*saine
practica 9*/
#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);
int main(int argc, char *argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");//imprimir error est
		exit(1349);
	}	
	printf("%d\n",atoi(argv[argc-1]));//se hace referencia al ultimo elemento del arreglo
}
//int atoi(char *num)
//{
//	return strtol(num,NULL,10);
//}
