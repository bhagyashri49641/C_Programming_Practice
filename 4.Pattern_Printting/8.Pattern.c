/////////////////////////////////////////////
//   A A A A
//   B B B B 
//   C C C C
//   D D D D
/////////////////////////////////////////////


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	char ch ='A';

	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);	
		}
		printf("\n");
		ch++;
	}
}

int main()
{
	int Row=0,Col=0;

	printf("Enetr number of rows:");
	scanf("%d",&Row);

	printf("Enter number of columns:");
	scanf("%d",&Col);

	Pattern(Row,Col);

	return 0;
}