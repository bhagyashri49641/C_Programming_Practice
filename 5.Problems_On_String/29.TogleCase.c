/*Write a program which accept string from user and toggle the case.
Input : Bhagyashri Mane
Output : bHAGYASHRI mANE

*/

#include<stdio.h>

void strtogglex(char *str)
	{
		if(str==NULL)
		{
			return;
		}

		while(*str != '\0')
		{
			if((*str >= 'a') && (*str <= 'z'))
    			{
      				*str = *str - 32;
   				}
   				else if((*str>='A') && (*str<='Z'))
				{
					*str = *str+32;
				}
				str++;
		}

	}

int main()
	{
		char arr[20];

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);

		strtogglex(arr);

		printf("Modified string is:\n%s\n",arr);
		return 0;
	}
