#include<stdio.h>
#include<string.h>
int main()
{
	char st1[10],st2[10];
	printf("enter string to reverse\n");
	gets(st1);
	strrev(st2,st1);
	printf("%s=reverse string\n",st2);
	return 0;
	
}
