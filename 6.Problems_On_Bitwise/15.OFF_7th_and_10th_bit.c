/*2. Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.

Input :577 // both bits are ON
Output :1

IP:513 // 7th is already OFF i made only 10th OFF
OP:1

IP:321 // 10th is already off i made only 7th off
OP:257

IP:1081 //both are already OFF so no change 
OP:1081 

*/

#include<stdio.h>

int OffBit(int iNo)
{
    int iMask = 0x00000240; //0000 0000 0000 0000 0000 0010 0100 0000
    
    int iResult = 0;

    if(iNo < 0) //updator
    {
        iNo = -iNo;
    }

    iResult = iNo & iMask;
    
    if(iResult == iMask)	//IP:  0000 0000 0000 0000 0000 0010 0100 0001	
    {
    	printf("I am  in if\n");

        iNo=iNo^iMask; 		//0000 0000 0000 0000 0000 0010 0100 0001	

    }
 	else if(iResult==0x00000200)  // fakt 10th bit off kraychiy karan 7th bit already off ch ahe
 	{
 		printf("I am in First elseif\n");

 		iNo=iNo^0x00000200;
 	}
 	else if(iResult==0x0000040) //fakt 7th bit off kraychiy karan 10th bit already off ch ahe
 	{
 		printf("I am in second else if\n ");

 		iNo=iNo^0x0000040;
 	}
 	else
 	{
 		
 		printf("Both Bits are already OFF so no change in the number\n");
 	}
    return iNo;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    iRet = OffBit(iNo);
    
    printf("changed number is %d\n",iRet);
}