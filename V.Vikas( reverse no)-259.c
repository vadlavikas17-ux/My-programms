#include<stdio.h>
int main()
{
	int n,r=0,rem;
	printf("enter n value\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		r=r*10+rem;
		n=n/10;
		
	}
	printf("%d is a reverse of n",r);
	return 0;
	
	
	
}
