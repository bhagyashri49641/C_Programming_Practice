//accept one chracter from user and check it is vowel or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
		
}
/////////////////////// Entry point function /////////////////////////////
int main()
{
	char cValue;
	BOOL bret=FALSE;
	printf("Enter one character :");
	scanf("%c",&cValue);
	bret=CheckVowel(cValue);
	if(bret==TRUE)
	{
		printf("Entered char is vowel");
	}
	else
	{
		printf("Entered char is not vowel");
	}
	return 0;
}
