#include<stdio.h>
int main()
{
	int i,x,f=1;
	printf("enter x value\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("%d is factorial",f);
	return 0;
	
}
