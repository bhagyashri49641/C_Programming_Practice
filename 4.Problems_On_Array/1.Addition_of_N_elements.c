/*
 Problem statement :
 Accept N numbers from user and perform the addition of that N numbers.
 Input :
 Value of N : 9
 Numbers are :  5   -3   7   1   0    5     0   -8    1
 Output : 8

Algorithm
 
    START
        Accept the value of N
        Accept all N numbers
        Pass that value of N and N numbers to the function
 
        Function will perform the addition
        Accept the addition from the function
 
        Display the addition
    END
*/

#include<stdio.h>
#include<stdlib.h>
/*
int SumNNumbers(int arr[], int iSize)
{
    int iSum = 0;
    register int iCnt = 0;

    if((arr==NULL)||(iSize<0))
    {
        return 0;
    }
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }
    
    return iSum;
}*/


int SumNNumbers(int *Arr , int size)
{
    int iSum = 0;
    register int i = 0;

    if((Arr == NULL) || (size < 0))
    {
        return 0;
    }

    for(i = 0 ; i < size ; i++)
    {
        iSum = iSum + Arr[i];
    }
        
    return iSum;
}


int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;
    
    printf("Enter the value of N : ");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(sizeof(int) * iValue);  //100 104 108 112 116 120  100 to 120 memory allocate zali
    //      inter che     4 byte che    5 tukde
    printf("Enter the values of array\n");
    //     1               2               3
    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    
    iRet = SumNNumbers(ptr,iValue); // SumNNumbers(100,5);
    
    printf("\nAddition of all numbers is : %d\n",iRet);
    
    return 0;
}

























