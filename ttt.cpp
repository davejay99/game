#include<stdio.h>
#include<string.h>
void display(char A[3][3]);
int check(char A[3][3],char c1,char c2)
{
	if(A[0][0]==c1 && A[1][1]==c1 && A[2][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][0]==c1 && A[0][1]==c1 && A[0][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][0]==c1 && A[1][0]==c1 && A[2][0]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[1][0]==c1 && A[1][1]==c1 && A[1][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[2][0]==c1 && A[2][1]==c1 && A[2][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][1]==c1 && A[1][1]==c1 && A[2][1]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][2]==c1 && A[1][2]==c1 && A[2][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[2][0]==c1 && A[1][1]==c1 && A[0][2]==c1)
	{
		printf("\nPlayer1 WON!!!!!!!!!!");
			printf("\n");
		display(A);
			
		return 0;
	}
	else if(A[0][0]==c2 && A[1][1]==c2 && A[2][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][0]==c2 && A[0][1]==c2 && A[0][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][0]==c2 && A[1][0]==c2 && A[2][0]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[1][0]==c2 && A[1][1]==c2 && A[1][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
		printf("\n");
		display(A);
		return 0;
	}
	else if(A[2][0]==c2 && A[2][1]==c2 && A[2][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][1]==c2 && A[1][1]==c2 && A[2][1]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[0][2]==c2 && A[1][2]==c2 && A[2][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else if(A[2][0]==c2 && A[1][1]==c2 && A[0][2]==c2)
	{
		printf("\nPlayer2 WON!!!!!!!!!!");
			printf("\n");
		display(A);
		return 0;
	}
	else 
	{
		display(A);
		return 1;
	}


}	
void display(char A[3][3])
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%c  ",A[i][j]);
			}
			printf("\n\n");
		}
	}
void position(int i,int j,char A[3][3],int count,char c1,char c2,int B[3][3])
	{
		if(B[i][j]==0)
		{
		
			if(count%2==0)
			{
				A[i][j]=c1;
				B[i][j]=1;
			}
			else
			{
				A[i][j]=c2;
				B[i][j]=1;
			}
		}
		else{printf("\n\nINvalid Input!!!\n\n Game Over");
		}
	
	}
	
	
int main()
{
	char A[3][3]={'_'},c1,c2;
	int B[3][3]={0};
	int p1,p2,i,j,count=0;
	printf("\n\n!!!!!!!!!!!!!!Wel-come to TIC-TAC-TOE!!!!!!!!!!!!!!!!!!!!!\n\n");
	while(1)
	{
		printf("\nPlayer1 select ur symbol 'X' or 'O':\n\n");
		scanf("%c",&c1);
		if(c1=='X')
		{
			c2='O';
			printf("\nPlayer1's symbol is 'X' and Player2's symbol is 'O'\n\n");
			break;
		}
		else if(c1=='O')
		{
			c2='X';
			printf("\nPlayer1's symbol is 'O' and Player2's symbol is 'X'\n\n");
			break;
		}
		else
		{
			printf("\nInvalid Choice\n\n");
		}
	}
		for(count=0;count<9;count++)
		{
			if(count%2==0)
			{
				printf("\nEnter the position Player1 where u want to enter ur symbol:");
				scanf("%d%d",&p1,&p2);
				position(p1,p2,A,count,c1,c2,B);
		
			}
			else
			{
			printf("Enter the position Player2 where u want to enter ur symbol:");
			scanf("%d%d",&p1,&p2);
			position(p1,p2,A,count,c1,c2,B);	
			}
			int a=check(A,c1,c2);
			if(a==0)
			{
				count=9;
			}
		}
		
	


	
	
	
	
	
	
	
}
