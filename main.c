#include <stdio.h>

int main()
{
	int i,j,n;
	printf("input two numbers\n");
	scanf("%d %d",&i,&j);
	n=multi(i,j);
	printf("i*j=%d\n",n);
	return 0;
}
