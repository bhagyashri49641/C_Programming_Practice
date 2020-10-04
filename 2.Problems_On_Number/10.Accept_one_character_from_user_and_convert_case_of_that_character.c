//accept one chracter from user and convert the case of that character
#include<stdio.h>
void ConvertCase(char cChar)
{

	//printf("%d",cChar);
	if(cChar>='a'&&cChar<='z')
	{
		cChar=cChar-32;
		printf("%c\t",cChar);

	}
	else if(cChar>='A'&&cChar<='Z')
	{
		cChar=(cChar+32);
		printf("%c\t",cChar);
	}

}
int main()
{
	char cValue;
	printf("Enter one character :");
	scanf("%c",&cValue);
	ConvertCase(cValue);
	return 0;
}
