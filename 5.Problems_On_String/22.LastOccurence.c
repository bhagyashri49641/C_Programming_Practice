/*
    Problem statement : Accept string from user and one charcter return the last occurance of that character
 
 Input : "Hello"
            l
 Output : 3

 Input : "Hello World"
              l
 Output : 9
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */

#include<stdio.h>

int LastOcc(char str[],char ch)
{
	int i=0;
	int iPos=0;

	if((str==NULL)||(ch=='\0'))
	{
		return -1;
	}

	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			iPos=i;
		}
		i++;
	}
	iPos++;
	return iPos;

}

int LastOccX(char *str,char ch)
{
	int iPos=0;
	int i=0;

	if((*str=='\0')||(ch=='\0'))
	{
		return -1;
	}

	while(*str != '\0')
	{
		if(*str==ch)
		{
			iPos=i;
		}
		str++;
		i++;
	}
	iPos++;

	return iPos;
}


int main()
{
	char ch='\0';
	char str[30];
	int iRet=0;

	printf("Enetr string:\n");
	scanf("%[^\n]s",str);

	getchar();  // it will take new line char as input and clears input buffer before next step

	printf("Enter character\n");
	scanf("%c",&ch);

	iRet=LastOcc(str,ch);

	if(iRet==-1)
	{
		printf("There is no such character\n");
	}
	else
	{
		printf("Last occ of given charater is at %d",iRet);
	}
	

	return 0;
}

