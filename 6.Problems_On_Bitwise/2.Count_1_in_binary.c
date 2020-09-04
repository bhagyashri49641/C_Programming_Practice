/*
    Problem statement :
 Accept number from user and count number of 1 in the binary format.
 */
#include<stdio.h>

int CountOne(int iValue)  
{  
	int iCount=0;
	int iRem = 0;

	if(iValue < 0)  
	{  
		iValue = -iValue;  
	}  
 
	while(iValue != 0)  
	{  
		iRem = iValue % 2;  
		iValue = iValue / 2;  
		printf("%d",iRem); 
		if(iRem==1)
		{
			iCount++;
		} 
	}  
	printf("\n%d",iCount);

	return iCount;
}  

int main()  
{  
    	int iNo = 0;
    	int iRet = 0;
    
    	printf("Enter number\n");
    	scanf("%d",&iNo);
    	
   		iRet = CountOne(iNo);
    
    	printf("Number of 1's in the numer is : %d\n",iRet);
    
    	return 0;  
}  