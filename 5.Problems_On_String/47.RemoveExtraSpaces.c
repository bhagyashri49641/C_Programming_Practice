/*
Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.
Input : Marvellous   multi   OS
Output : “Marvellous multi OS”
*/
#include<stdio.h>
#include<string.h>

void StrCpyX(const char *src, char *dest)
	{
		
		if((src==NULL)||(dest==NULL))
			{
				return;
			}

		while(*src != '\0' )
			{
				while(*src==' ') // extra aslele spaces kadun tak
				{
					src++;
				}

				*dest =*src;  // copy ch logic
				dest++;
				src++;

				if(*src==' ') // ek space ali tr thike copy krun tak
				{
					*dest =*src;
					dest++;
					src++;
				}
				
			}
	}

int main()
	{
		char arr[50] ={'\0'};
		char brr[50]={'\0'};

		printf("Enter one string:\n");
		scanf("%[^'\n']s",arr);

		
		StrCpyX(arr,brr);

		printf("%s\n",brr);
		return 0;
	}	