#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter n value\n");
	scanf("%d",&n);
	i-1,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
		if(c==2)
		printf("%d is an prime number",c);
		else{
			printf("%d is not an prime number\n");
			
		}
	}
	
	return 0;
	
	
	
}
