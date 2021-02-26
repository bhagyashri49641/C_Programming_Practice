/*
Write a program which accept string from user and reverse each
word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO”
*/
#include<stdio.h>

void StrWrdRev(char *str)
{
		char temp='\0';
		char *start=NULL;
		char *End=NULL;

		if(str == NULL)
		{
			return ;
		}

		while(*str != '\0') // starting pasun string travel lkr end pryant
		{
		
			if(*str==' ')    // jar space ahe tr aat ja
			{
				while((*str==' ') && (*str!='\0')) // jopryant spaces yet rahtat ani string sampt nahi tovr travel kr
				{
					str++;
				}
			}
			else if((*str!=' ') && (*str!='\0')) //space pn nahi end pn nahi mnje word chalu ahe ...aat ja
			{
				End=str;  //word chya start la end pointer set kela

				while((*End!=' ') && (*End !='\0')) //travel krt End pointer la shevti gheun ja
					{
						End++;
					}

				start=End; 	// apli string reverse krt krt ardhyat yeu thambel ..
							//tila next word la neun thevayla lagel mnun start pointer la End chi value deun thevli 
				End--; // end ek ni kmi kela karan loop space kiva \0 ala ki thambto

				while(str<End) // ata string ani end chya values adla bdl kelya
					{
						temp=*End;
						*End=*str;
						*str=temp;
						str++;
						End--;
					}
				str=start; // ardhyat thamblelya str la next word kutun suru hot ahe te dakhvl
							// mnje start chi value prt str la dli karan aple bakiche loop str vr chaltat
			}
		}
		
	}

int main()
	{
		int iRet=0;
		
		char arr[50] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		StrWrdRev(arr);
		printf("reversed string is:%s\n",arr);
		
		return 0;
	}