#include<stdio.h>
#include<stdlib.h>
struct player 
{
	char n[100];
	int score;
};
int main()
{
	struct player p[4];
	for(int i=0;i<5;i++)
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
}

	
