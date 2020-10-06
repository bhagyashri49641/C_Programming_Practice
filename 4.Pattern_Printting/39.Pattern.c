/////////////////////////////////
// 1 2 3 4 
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7
/////////////////////////////////

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iNo=0;

	for(i=1;i<=iRow;i++)
	{
		iNo=i;
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iNo);
			iNo++;
		}
		
		printf("\n");
	}

}
int main()
{
	int Row=0,Col=0;
	printf("Enter number of rows:\n");
	scanf("%d",&Row);

	printf("Enter number of columns:\n");
	scanf("%d",&Col);
	Pattern(Row,Col);


	return 0;
}