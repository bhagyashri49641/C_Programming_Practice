/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 Implement strcat. (With white space)
 
 First : "abcd xy"
 Second : "pqr 21"
 
 Updated Second : "pqr 21_abcd xy"
 */

#include<stdio.h>
#include<string.h>
void strcat1(char *dest,char *src)
{
	if((src==NULL))
	{
		return;
	}

	while(*dest !='\0')
	{
		dest++;
	}
	*dest=' ';
	dest++;

	while(*src != '\0')
	{
		*dest =*src;
		src++;
		dest++;
	}
	*dest='\0';
}

void strcat2(char *dest,char *src)
{
	int i=0,j=0;
	if((src==NULL))
	{
		return;
	}

	while(dest[i] !='\0')
	{
		i++;
	}
	dest[i]=' ';
	i++;

	while(src[j] != '\0')
	{
		dest[i] =src[j];
		j++;
		i++;
	}
	dest[i]='\0';
}
int main()
{
    char arr[30] = {'\0'};   //Mane
    char brr[30] = {'\0'};   //Bhagyashri
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr); 
    
    getchar();

    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
     
    strcat(brr,arr);   //inbuilt function
    printf("String after concatination %s\n",brr);
    

    strcat1(brr,arr);  //my strcat one approach
    printf("String after my concat1: %s\n",brr);
    

    strcat2(brr,arr);	//my strcat one approach
    printf("String after my concat2: %s\n",brr);
    
    return 0;
}
