/*practica 0 
coronado gozain saine*/
#include <stdio.h>
int main(){
int i;
for(i=0;i<=30;i++){//se inicualiza el conteo 
 if ((i%3==0) && (i%5==0)){//si el indice es submultiplo de 5 y de 3 
	printf("fizzBuzz\n");}
else if(i%5==0){//si el indice es submultiplo de 5
printf("buzz\n");}
else if (i%3==0){//si el indice es submultiplo de 3
printf("fizz\n");}
else {printf("%d\n",i);}
}
}
