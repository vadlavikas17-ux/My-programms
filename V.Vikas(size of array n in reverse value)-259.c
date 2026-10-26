#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter size of elements in array\n");
	scanf("%d",&n);
	printf("%d element \n",n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("element in reverse order\n");
	for(i=n-1;i>=0;i--)
	printf("%d",a[i]);
	return 0;
	
}
