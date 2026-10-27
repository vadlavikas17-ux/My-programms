#include<stdio.h>
#include<string.h>
int main()
{
	char st1[10],st2[10];
	printf("enter string\n");
	scanf("%s",st1);
	scanf("%s",st2);
	if(strstr(st1,st2)!=0){
		printf("substring found\n");
	} else
	printf("substring not found\n");
	
	return 0;
	
}
