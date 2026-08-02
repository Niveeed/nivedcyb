#include<stdio.h>
int main()
{
	int n,i,ch,q[100],REAR=-1,FRONT=-1,item,MAX=5;
	for( ; ; )
	{
		printf("\n");
		printf(" 1. insert \n 2. delete \n 3. display \n 4. exit \n ");
		printf("enter your choice");
		scanf("%d",&ch);
		if (ch==1)
		{ 
		
			//for(i=0;i<MAX;i++)
			//{
				printf("enter element");
				scanf("%d",&item);
				if (FRONT==-1 && REAR==-1)
				{
					FRONT=0;
					REAR=0;
					q[REAR]=item;
				}
				else if (FRONT==(REAR+1)% MAX)
				{
					printf("overflow");
				}
				else 
				{
					REAR=(REAR+1)%MAX;
					q[REAR]=item;
				}
			//}
		}
		else if (ch==2)
		{
			if (FRONT==-1 && REAR==-1)
			{
				printf("UNDERFLOW");
			}
			else if (FRONT==REAR)
			{
				 item=q[FRONT];
				 FRONT=-1;
				 REAR=-1;
			}
			else
			{
				item=q[FRONT];
				FRONT=(FRONT+1)%MAX;
			}
		}
		else if (ch==3)
		{
			if (FRONT==-1)
			{
				printf("UNDERFLOW");
			}
			else
			{
				printf("queue elements");
				i=FRONT;
				while(1)
				{
					
					printf("%d , ",q[i]);
					if(i==REAR)
					{
						break;
					}
					i=(i+1)%MAX;
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




