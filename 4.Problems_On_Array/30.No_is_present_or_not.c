/*
    problem statement: Accept N numbers from user and one number, return the frequency of that number.
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :        45
Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :        55
 Output :        1
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :        58
 Output :        0
 */
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
    
    if(Arr == NULL)
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt]==iNo)
    {
    	return TRUE;
    }
    else
    {
    	return FALSE;
    }

}
BOOL FrequencyBidirectional(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iFrequency = 0;
    int iStart = 0, iEnd = 0;
    
    if(Arr == NULL)
    {
        return -1;
    }
    
    //       1                    ;          2     ;          3
    for(iStart = 0, iEnd = iSize-1; iStart <= iEnd ; iStart++, iEnd--)
    {
        if((iStart == iEnd) && (Arr[iStart] == iNo))// For middle element in case of odd no of elements
        {
            break;
        }
        if(Arr[iStart] == iNo)                      // 4
        {
            break;
        }
        if(Arr[iEnd] == iNo)                        // 4
        {
            break;
        }
    }
    if((Arr[iStart]==iNo)||(Arr[iEnd]==iNo))
    {
    	return TRUE;
    }
    else
    {
    	return FALSE;
    }
    
    
}
int main()
{
    int *ptr = NULL;
    int iValue = 0;
    BOOL bRet = FALSE;
    BOOL bRet1=FALSE;
    int iCnt = 0, iNo = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter the number that we want to search\n");
    scanf("%d",&iNo);
    
    bRet = Frequency(ptr,iValue,iNo);
    bRet1 = FrequencyBidirectional(ptr,iValue,iNo);

    if(bRet==TRUE)
    {
		printf("Number is present\n");
    }
    else
    {
    	printf("Number not found\n");
    }

    if(bRet1==TRUE)
    {
		printf("Number is present\n");
    }
    else
    {
    	printf("Number not found\n");
    }

    free(ptr);

    return 0;
}