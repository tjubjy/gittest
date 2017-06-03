#include <stdio.h>

int main()
{
	int i,j,n;
	int *p=NULL;
	printf("input two numbers\n");
	scanf("%d %d",&i,&j);
	*p=3;
	n=i*j;
	printf("i*j=%d\n",n);
	return 0;
}
