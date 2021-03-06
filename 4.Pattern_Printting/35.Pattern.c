/////////////////////////////////////////////////////////////////////////////////////
//
//	 Accept string from user and print following pattern
//		string => BHAGYA
//		
//		b	h	a	g	y	a       61 62 63 64 65 66
//		b	h	a	g	y 			51 52 53 54 55 
//		b	h	a	g 				41 42 43 44 
//		b	h	a 					31 32 33 
//		b	h 						21 22
//		b 							11
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void PatternDisplay(char *sPtr)
{
	int iRow,iCol;
	
	int strlength=strlen(sPtr);

	char *temp=sPtr;

	for(iRow=strlength;iRow>0;iRow--)
	{
		for(iCol=1;iCol<=iRow;iCol++)
		{
			if(iCol % 2 != 0)
			{
				printf("%c\t",*temp);
			}
			else
			{
				
				printf("%c\t",*temp+32);
			}
			temp++;
		}
		printf("\n");
		temp=sPtr;
	}
}
int main()
{
	char cString[20]={'\0'};

	printf("\n Please Enter your string in capital letters: ");
	scanf("%s",cString);

	PatternDisplay(cString);

	return 0;

}
