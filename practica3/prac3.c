#include<stdio.h>
#include<time.h>
#include<limits.h>

int main()
{
	time_t tiempo = INT_MAX; //variable de tipo tiempo 
	printf("\nEl limite es hasta: %s\n",ctime(&tiempo));
//con ctime() se convierte un tiempo almacenado en un valor largo en un caracter tipo tiempo
}
