// Accept one number from user and display all its factors

#include<stdio.h>

void DisplayFactors(int);

int main()
{
	int value = 0;
	
	printf("Enter Number:");
	scanf("%d",&value);

	DisplayFactors(value);
	
	return 0;
}
//////////////////////////////////////////////////////////////
//
//  Function name : 	DisplayFactors
//  Input : 			Interger
//  Output :    	    Display on terminal
//  Description :   	It is used to display factors of a number
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////
void DisplayFactors(int No)
{
	register int i = 0;

	printf("Factors are:\n");
	for(i = 1 ; i <= No/2 ; i++)
	{
		if((No % i) == 0)
		{
			printf("%d\t",i);
		}
	}
}

