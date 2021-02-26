/*Write a program which accept string from user and convert it into
lower case.
Input : BHAGYASHRI MANE
Output : bhagyashri mane

*/

#include<stdio.h>
void strlwrx(char *str)
{
	int i=0;

	if(str ==NULL)
	{
		return;
	}

	while(str[i]!='\0')
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			str[i]=str[i]+32;
		}
		str++;
	}
}

int main()
	{
		char arr[20];

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);

		strlwrx(arr);
		
		printf("Modified string is\n%s\n",arr);
		return 0;
	}

