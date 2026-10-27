#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("enter string\n");
	scanf("%s",st);
	strupr(st);
	printf("translate string to uppercase=%s",st);
	return 0;
	
}
