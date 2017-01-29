#include<stdio.h>

int main(){
int f;
printf("inserta un numero\t");
scanf("%d",&f);//almacena un enterio 
printf("El factorial de %d es: %d\n",f,factorial(f));//se manda llamar a la funcion factorial para imprimir el valor que retorna
}

int factorial(int f){//declaracion de la funcion factorial
int d=1,i;
for (i=f;i>1;i--){ //operacion de factorial 
     d=d*i;
}
return (d);//return del resultado de la funcion

}
