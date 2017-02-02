
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
	pass();}


void pass(){
  char llaveXOR;
  int fdrandom; //Declaracion de un descriptor de archivos.
  char *archivo="/dev/random"; // archivo que genera aleaotreamente
  fdrandom=open(archivo,O_RDONLY);// Se abre como solo lectura
  int num;
  unsigned char llave[32];
  // read regresa el numero de bits que leyo
  for (int i = 0; i < 32;i++){
    if(read(fdrandom,&num,sizeof(int))!=0){
      llave[i]= (unsigned char) abs(num%25) + 65;
    }
  }
  if(read(fdrandom,&num,sizeof(int))!=0){
 llaveXOR= (char) abs(num%25) + 65;
  printf("\npassword: %s\n", llaveXOR);}
  if(close(fdrandom)==-1) //debe cerrar.
    exit(1);
}

