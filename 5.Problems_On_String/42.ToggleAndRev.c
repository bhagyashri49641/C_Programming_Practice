/*
Accept sing from user and reverse the contents of that string by
toggling the case.
Input : “aCBdef”
Output : “FEDcbA”
*/
#include<stdio.h>

void StrRevTogX(char *str)
	{
		char temp;
		char *first,*last;
		// Filter
		if(str==NULL)
		{
			return;
		}

		first = str;  //first points to starting of the str
		last = str;
		while(*last != '\0')
		{
			last++;
		}
		last--;  //now last points to end of the str

		while(first <= last) // here addresses are compared 
		{

			temp=*first;
			*first=*last;
			*last=temp;
			first++;
			last--;
		}
	}

int main()
	{
		char arr[50] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		StrRevTogX(arr);
		printf("%s\n",arr);
		return 0;
	}