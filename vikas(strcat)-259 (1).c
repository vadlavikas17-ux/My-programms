#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("enter string\n");
	scanf("%s",st1);
	scanf("%s",st2);
	strcat(st2,st1);
	printf("combination of st1 and st2=%s",st2);
	return 0;
	
}
