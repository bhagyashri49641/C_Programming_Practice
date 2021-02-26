/*
    Problem statement : Accept tring from user and return the length of that string.
    
 Input : "Hello"
 Output : 5

 Input : "Hello World"
 Output : 11
 
 Input : "A"
 Output : 1
 
 Input : "India_ _is_ _my country"
 Output : 21
 */


#include<stdio.h>
#include<string.h>


int StrlenX(char str[])
{
    int iCnt = 0,i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }

    /*
    while(*(s+i)!='\0')
	{
		i++;
	}
	return i;
    */
    return iCnt;
}

int main()
{
    char arr[30];       // Static memory allocation of array
    int iRet = 0;
    int iRet1 = 0;

    
    printf("Enter the string\n");
    
    scanf("%[^'\n']s",arr);     // Accept the input till user enerets enter key
    
    iRet=strlen(arr);
    iRet1 = StrlenX(arr);           // StrlenX(100);
    
    printf("String length is %d\n",iRet);       // 10
    printf("String length is %d\n",iRet1);  
    return 0;
}


