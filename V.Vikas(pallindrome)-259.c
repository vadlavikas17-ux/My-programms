#include<stdio.h>
int main()
{
	int n,rem,r,pallindrome;
	printf("enter n value\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}
	if(palindrome==r)
	printf("%d is a pallindrome");
	else
{
		printf("%d is not a pallindrome");}
		return 0;
		
	
}
