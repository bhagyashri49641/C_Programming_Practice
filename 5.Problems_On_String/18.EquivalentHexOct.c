// input =A
// output = 65 0101
#include<stdio.h>

void Display (char ch)
{
  printf("Hex=0X%X\t  Oct=0%o \t",ch,ch);
}
int main()
{
	char cValue ='\0';
	printf("Enter the character");
	scanf("%c",&cValue);
	Display(cValue);

return 0;
}