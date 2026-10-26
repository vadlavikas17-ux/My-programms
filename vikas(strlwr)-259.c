#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("enter string\n");
	scanf("%s",st);
	strlwr(st);
	printf("string translated to lowercase=%s",st);
	return 0;
	
}
