#include<stdio.h>
#include<stdlib.h>
struct palyer
{
	 char c[100];
	 int points;
}
int main()
{
	struct player p[4];
	for(int i=0;i<5;i++)
	{
		
              int k=0;
	      printf("enter the name of player %d",(i+1));
	      scanf("%s",p[i].c);
	      for(int j=0;j<3;j++)
	      {
	       printf("enter the round %d score:",j+1);
               scanf("%d",&p[i].points);
               k=k+p[i].points+rand();
               j++;
	  }       
         
