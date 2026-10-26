#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter value of n\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	}
	printf("%d=sum\n",sum);
	return 0;
	
	
}
