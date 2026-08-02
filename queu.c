#include<stdio.h>
int main()
{
	int n,i,ch,q[100],REAR=-1,FRONT=-1,item,MAX=5;
	for( ; ; )
	{
		printf("\n");
		printf(" 1. insert \n 2. delete \n 3. display \n 4. exit ");
		printf("enter your choice");
		scanf("%d",&ch);
		if (ch==1)
		{ 
			printf("enter no of elements");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("enter element");
				scanf("%d",&item);
				if (REAR==MAX-1)
				{
					printf("OVERFLOW- QUEUE is full");
				}
				else if (FRONT==-1 && REAR==-1)
				{
					FRONT=0;
					REAR=0;
					q[REAR]=item;
				}
				else 
				{
					REAR+=1;
					q[REAR]=item;
				}
			}
		}
		else if (ch==2)
		{
			if (FRONT==-1 && REAR==-1)
			{
				printf("UNDERFLOW-QUEUE is empty");
			}
			else if (FRONT==REAR)
			{
				 FRONT=-1;
				 REAR=-1;
			}
			else
			{
				FRONT=FRONT+1;
			}
		}
		else if (ch==3)
		{
			if (FRONT==-1)
			{
				printf("UNDERFLOW-QUEUE is empty");
			}
			else
			{
				printf("queue elements");
				for(i=FRONT;i<=REAR;i++)
				{
					printf("%d , ",q[i]);
				}
			}
			printf("\n");
		}
		else if (ch==4)
		{
			break;
		}
		else
		{
			printf("invalid choice");
		}
	}
}





