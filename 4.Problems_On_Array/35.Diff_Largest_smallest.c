/*
Accept N numbers from user and return the difference between largest
and smallest number.
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
	int iCnt=0;
    int iMin=0;
    int iMax=0;
	if((Arr==NULL)||(iSize<0))
	{
		printf("Error in inputs:\n");
		return -1;
	}
	 
    iMax = Arr[0];          // Lakshat thewaleli value : pahili value
    
    for(iCnt = 1; iCnt < iSize; iCnt++)     // Loop to travel the array .....purn firavch lagt
    {
        if(Arr[iCnt] > iMax)    // Sapadalela no jar lakshat asalelya value peksha motha asel tar
        {
            iMax = Arr[iCnt];   // Lakshat thewaleli value badala with the new value
        }
    }

     iMin = Arr[0];      // Lakshat thewaleli value : pahili value
    
    for(iCnt = 1; iCnt < iSize; iCnt++)     // Loop to travel the array
    {
        if(Arr[iCnt] < iMin)    // Sapadalela no jar lakshat asalelya value peksha motha asel tar
        {
            iMin = Arr[iCnt];   // Lakshat thewaleli value badala with the new value
        }
    }

    return iMax-iMin;
}

int main()
{
    int i , size = 0;
    int *ptr = NULL;
    int ret = 0;

    printf("Enter Number of Elements:\n");
    scanf("%d",&size);

    ptr = (int*)malloc(size * sizeof(int));
    
    printf("Enter data:\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    ret = Difference(ptr , size);
    printf("diff between max and min is:%d\n",ret);
    
    free(ptr);
    return 0;
}

