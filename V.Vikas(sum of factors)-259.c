#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
		
}
printf("%d is a factor\n",sum);

	return 0;
}
