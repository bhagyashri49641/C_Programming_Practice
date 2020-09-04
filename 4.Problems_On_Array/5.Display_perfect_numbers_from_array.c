/*
 Display perfect numbers from N numbers.
 */


#include<stdio.h>
#include<stdlib.h>
int PerfectNumbers(int *,int);


int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    int iRet=0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        printf("Invalid array elements.");
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet=PerfectNumbers(ptr,iValue);
    printf("total count of perfect numbers in given array is:%d",iRet);
    
    free(ptr);
    
    return 0;
    
}

int PerfectNumbers(int arr[], int iSize)
{
    int iCnt = 0 , iNo = 0, i = 0;
    int iSum = 0;
    int iCount=0;
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -1;
    }
    
    printf("Perfect numbers are : \n ");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iNo = arr[iCnt];
        iSum = 0;
        
        for(i = 1; i<= (iNo/2); i++)
        {
            if((iNo % i) == 0)
            {
                iSum = iSum + i;
            }
        }
        
        if(iSum == iNo)
        {
            printf("%d\n",iNo);SS
            iCount++;
        }
    }
   return iCount;
}