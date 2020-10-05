#include<stdio.h>

void DisplayTable(int iNo)
{
    int iTable=1,i=0;
    for(i=1;i<=10;i++)
    {
        iTable=iNo*i;
        printf("%d\t",iTable);
    }
    printf("\n");
}

void DisplayTableRev(int iNo)
{
  

    int iTable=1,i=0;

    for(i=10;i>=1;i--)
    {
        iTable=iNo*i;
        printf("%d\t",iTable);
    }
    printf("\n");
}

int main()
{
    int iValue=0;
    printf("Enter a number:");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    DisplayTableRev(iValue);
    return 0;
}