
#include<stdio.h>
#include<string.h>

void mystrcpy(char *dest, char *src)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest='\0';
}
void mystrcpyX(char dest[],char src[])
{
	int i=0;

	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while(src[i] !='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';

}

int main()
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	getchar();
	strcpy(brr,arr);	//using inbuild function
	mystrcpy(brr,arr);	//one method
	mystrcpyX(brr,arr);	// another method
	
	printf("string after copy:\n%s\n",brr);
	printf("String after mycopy:\n%s\n",brr);
	printf("String after mycopy:\n%s\n",brr);
	return 0;
}