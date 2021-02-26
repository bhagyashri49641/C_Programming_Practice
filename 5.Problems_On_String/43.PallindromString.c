/*
Accept string from user and check whether the string is palindrome
or not without considering its case.
Input : “1abccBA1”
Output : TRUE
*/
#include<stdio.h>
#include<string.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrPallindrome(char *str)
	{
		int i=0,j=0;

		// Filter
		if(str==NULL)
		{
			return -1;
		}

		while(str[j] !='\0')		//j=strlen(str);
		{
			j++;
		}
		
		j--; // index starts from 0 therefore length will be one less 
		

		while(i<j)
		{

			//making all values capital
			if((str[i] >= 'A') && (str[i] <= 'Z'))
    		{
      			str[i] = str[i] + 32;
    		}
    		
    		if((str[j] >= 'A') && (str[j] <= 'Z'))
    		{
    			str[j] = str[j] + 32;
    		}

    		//checking for pallindrome

			if(str[i] != str[j])
			{
				break;
			}
			
				i++;
				j--;
			
		}
		if(i>=j)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
/*
	/////////////////////////////////// Another Method ////////////////////////////	
	BOOL chkPalindrome(char *str)
{
	char *end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(str<end)
	{
		if((*str>=65) && (*str<=90))
		{
			*str=*str+32;
		}
		else if((*end>=65) && (*end<=90))
		{
			*end=*end+32;
		}

		if(*str!=*end)
		{
			break;
		}
		str++;
		end--;
	}

	if(str>=end)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

*/

int main()
	{
		BOOL bret;
		char arr[50] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		bret = StrPallindrome(arr);
	//	bret =chkPalindrome(arr);

		if(bret == TRUE)
		{
			printf("String is pallindrome\n");
		}
		else if(bret == FALSE)
		{
			printf("String is not pallindrome\n");
		}
		else
		{
			printf("Invalid inpiut\n");
		}
		return 0;
	}