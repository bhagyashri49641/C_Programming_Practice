///////////////////////////////////////////////////////////
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
//		B h a g y a s h r i
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(char *str)
{
	int size=0;
	int i=0,j=0;
	char *temp=str;
	size=strlen(str);
	printf("size=%d\n",size);

	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("%c\t",*temp);
			temp++;
		}
		printf("\n");
		temp=str;
	}
	printf("\n");

}
int main()
{
	char str[30]={'\0'};

	printf("Enter String:\n");
	scanf("%[^'\n']s",str);

	printf("Enetred string is:%s\n",str);

	Display(str);
	return 0;
}