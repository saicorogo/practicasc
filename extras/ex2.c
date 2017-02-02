#include<stdio.h>
int main(){

	int r,p,s;
	scanf("%d",&r);
       if((r>=10)&&(r<=99)){
	p=r/10;
	s=r%10;
	printf("%d\n",p+s);}
}
