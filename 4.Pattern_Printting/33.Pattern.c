/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept string from user and print following pattern
//		string => AMOL
//
//		A
//		A	M
//		A	M	O
//		A	M	O	L
//		
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void PatternDisplay(char *sPtr)
{
	int iRow,iCol;
	
	int strlength=strlen(sPtr);

	char *temp=sPtr;

	for(iRow=1;iRow<=strlength;iRow++)
	{
		for(iCol=1;iCol<=iRow;iCol++)
		{
			printf("%c\t",*temp);
			temp++;
		}
		printf("\n");
		temp=sPtr;
	}
}
int main()
{
	char cString[20]={'\0'};

	printf("\n Enter Your string to display pattern : ");
	scanf("%[^'\n']s",cString);

	PatternDisplay(cString);

	return 0;

}
