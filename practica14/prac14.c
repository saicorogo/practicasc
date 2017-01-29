/*saine
practica 14*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
int r;
#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random";//le esta pasando una ruta

	fd=open(archivo,O_RDONLY); //se abre como solo lectura
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

//#if 0
	if(read(fd,&r,sizeof(int))>0)
		printf("el numero aleatorio:%d",r);

/* para la funcion read los parametros son(la variable del descriptor de arch
ivo, la direccion de la variable que va leer, el tamaño de la variable*/	
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
