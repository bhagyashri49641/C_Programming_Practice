/* 
Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input :  hello shree 
Output : eerhs olleh
*/
#include<stdio.h>
#include<string.h>

void StrCpyRev(char *dest, char *src)
	{
		int length=0;
		int i=0,j=0;

		if((src==NULL)||(dest==NULL))
		{
			return;
		}

		length = strlen(src);
		printf("length of string is:%d\n",length);

		i = length-1; // string index length peksha ek ni kmi aste always remember this 

		while(src[i] != '\0')
		{
			dest[j]=src[i];
			i--;
			j++;
		}
		dest[j]='\0';
}

int main()
	{
		char arr[30] = {'\0'};
		char brr[30] ={'\0'};  // Empty string

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);
		
		StrCpyRev(brr,arr);
		printf("%s\n",brr);
	
		return 0;
	}