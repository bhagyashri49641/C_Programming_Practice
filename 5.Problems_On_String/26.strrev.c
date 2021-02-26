/*
    Problem statement : Accept string from user and reverse the contents of that sting inplace
 
 Input : "Hello"
 Output : "olleH"

 Input : "abcd"
 Output : "dcba"
 */

#include<stdio.h>
#include<string.h>

void Strrev(char str[])
{
    int iStart = 0, iEnd = 0;
    char temp = '\0';
    
    if(str == NULL)
    {
        return;
    }
    
    // Travel the string till end
    while(str[iEnd] != '\0')        // O(N)
    {
        iEnd++;
    }
    iEnd --;
    
    while(iStart < iEnd)            // O(N/2)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}

char *strrev1(char *str)
{
      char *p1, *p2;

      if (! str || ! *str) //t checks if the character pointed to by str is ascii null (NUL) '\0' which is the string delimiter (last char) in C strings.
      		return str;			//!*str will be true if *str is '\0'.
								
            

      for (p1 = str, p2 = str + strlen(str) - 1;     p2 > p1;      ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int main()
{
    char arr[30]={'\0'};
    char *brr='\0';
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);

   // strrev(arr); //there is no inbuilt function for reversing a string 
            
   	Strrev(arr);
    
    printf("Reverse string is\n%s\n",arr);
    Strrev(arr); // ulti zaleli prt reverse keli for next input

    brr=strrev1(arr);
    printf("Reverse string is\n%s\n",brr);
    return 0;
}






























