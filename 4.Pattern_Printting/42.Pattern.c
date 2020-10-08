////////////////////////////////////////////////////////////
//		B h a g y a s h r i
//		B h a g y a s h r 
//		B h a g y a s h 
//		B h a g y a s 
//		B h a g y a 
//		B h a g y 
//		B h a g 
//		B h a 
//		B h 
//		B 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void Display(char *str)
{
	if(str==NULL)
	{
		printf("Invlid String:");
		return;
	}
	int size=0;
	int i=0,j=0;
	char *temp=str;

	size=strlen(str);
	printf("Size of string :%d\n",size);
	
	for(i=size;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i>=j)
			{
				printf("%c\t",*temp);
				temp++;
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
		temp=str;
	}
}
int main()
{
	char str[30]={'\0'};

	 printf("Enter string:\n");
	 scanf("%[^'\n']s",str);

	 Display(str);
	 return 0;
}