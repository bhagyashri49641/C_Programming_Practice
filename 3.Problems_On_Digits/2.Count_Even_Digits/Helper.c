#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : 	CountEvenDigits
//  Input : 		Interger
//  Output :    	Integer
//  Description :   	It is used to count number of even digits
//  Autor : 		shree
//  Date :  		3rd August 2020
//
//////////////////////////////////////////////////////////////

int CountEvenDigits(int iNo)                
{
    int iCnt = 0;                           
    int iDigit = 0;                          
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









