#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int x=10;
	char c[]={'h','o','l','a','\0'};
	
	for(int i=0;i<4;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
}
