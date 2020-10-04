#include<stdio.h>

void Display(int); // helper function declaration
////////////////////////////////////////////
// Entry point function
//////////////////////////////////////////
int main()
{
	int value = 0;

	printf("Enter Number:");
	scanf("%d",&value);

	Display(value);
	
	return 0;
}
//////////////////////////////////////////////////////////////
//
//  Function name : 	Display
//  Input : 			Integer
//  Output :    	    display on terminal 
//  Description :   	It is used to display Power of a number
//  Autor : 			shree
//  Date :  			31th July 2020
//
//////////////////////////////////////////////////////////////
void Display(int No)
{
	register int i = 0;

	printf("Number Line is:\n");
	for(i = -(No) ; i <= No ; i++)
	{
		printf("%d\t",i);
	}
}

