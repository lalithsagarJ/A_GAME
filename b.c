#include<stdio.h>
#include<stdlib.h>
struct player 
{
	char n[100];
	int score;
};
int main()
{
	int i,n,highest=0;
	printf("enter the no of players");
	scanf("%d",&n);
	struct player p[n-1];
	for(int i=0;i<n;i++)
	{
		int k=0;
		printf("enter the name of player %d: ",i+1);
		scanf("%s",p[i].n);
		for(int j=0;j<3;j++)
		{
			printf("the score of player %d for round %d: ",i+1,j+1);
			scanf("%d",&p[i].score);
			k=k+p[i].score+rand();
		}
		p[i].score=k;
		printf("the score of player %d is %d: ",i+1,p[i].score);
		printf("\n");
	}
	highest=p[0].score;
	for(i=1;i<n;i++)
	{
		if(p[i].score>highest)
		{
			 highest=p[i].score;
		}
	}
	for(i=0;i<n;i++)
	{
		if(highest==p[i].score)
		{
			printf(" the winner is %s",p[i].n);
		}
	}
}

		


	
