#include <stdio.h>
#include<regex.h>
regex_t regex;
int main(){
        int v1,v2,r;
	scanf("%d %d",&v1,&v2);
	r=regcomp(&regex,"^[0-9]", 0);
	if(r){
		fprintf(stderr, "no se pudo compilar");
	exit(1);}
	r=regexec(&regex,&v1,0,NULL,0);
	if(r){
		r=regexec(&regex,&v2,0,NULL,0);
		if(r){
			printf("El resultado es: %d\n",(v1+v2));
	}}
else 
printf("no es un entero");
	
}
