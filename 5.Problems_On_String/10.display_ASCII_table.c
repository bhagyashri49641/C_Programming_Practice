/*Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.*/
#include<stdio.h>
#include<string.h>

void DisplayASCII()
{
	int iCnt=0;
	printf("Char   Decimal   Hex   oct");
	
	for(iCnt=0;iCnt<=255;iCnt++)
	{
		
		printf("%c\t %d\t %x\t %o\t \n",iCnt,iCnt,iCnt,iCnt);
	}
}
int main()
{
DisplayASCII();
return 0;
}

