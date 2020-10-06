/////////////////////////////////////////////
//   A B C D
//   a b c d 
//   A B C D
//   a b c d
/////////////////////////////////////////////


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	char SmallChar='a';
	char CapChar='A';
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("%c",SmallChar);
				SmallChar++;
			}
			else
			{
				printf("%c",CapChar);
				CapChar++;
			}
			
		}
		printf("\n");
		SmallChar='a';
		CapChar='A';
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