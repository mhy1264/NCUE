#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,way;
	scanf("%d",&n);
	int arr[n][n];
	scanf("%d",&way);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int x=n/2;

	int y=x;
/*	printf("%d\n",arr[x][y]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	 } 
*/
	printf("%d",arr[x][y]);

	if(way == 0)    //left
	{
		for(i=1;i<n;i++)
		{
			if(i%2 == 1)
			{
				for(j=1;j<=i;j++)   //l
				{
					y--;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //u
				{
					x--;
					printf("%d",arr[x][y]);									
				}						
			}
			else
			{
				for(j=1;j<=i;j++)   //r
				{
					y++;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //u
				{
					x++;
					printf("%d",arr[x][y]);									
				}									
			}
		}
		for(i=1;i<n;i++)				//l
		{
			y--;				
			printf("%d",arr[x][y]);			
		}

	}
	if(way == 1)//up
	{
		for(i=1;i<n;i++)
		{
			if(i%2 == 1)
			{
				for(j=1;j<=i;j++)   //up
				{
					x--;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //right
				{
					y++;
					printf("%d",arr[x][y]);									
				}						
			}
			else
			{
				for(j=1;j<=i;j++)   //down
				{
					x++;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //left
				{
					y--;
					printf("%d",arr[x][y]);									
				}									
			}
		}
		for(i=1;i<n;i++)
		{
			x--;
			printf("%d",arr[x][y]);			
		}

	}
	if(way == 2)//right
	{
		for(i=1;i<n;i++)
		{
			if(i%2 == 1)
			{
				for(j=1;j<=i;j++)   //r
				{
					y++;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //d
				{
					x++;
					printf("%d",arr[x][y]);									
				}						
			}
			else
			{
				for(j=1;j<=i;j++)   //l
				{
					y--;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //u
				{
					x--;
					printf("%d",arr[x][y]);									
				}									
			}
		}		
		for(i=1;i<n;i++)
		{
			y++;
			printf("%d",arr[x][y]);			
		}
	}
	if(way == 3)//down
	{
		for(i=1;i<n;i++)
		{
			if(i%2 == 1)
			{
				for(j=1;j<=i;j++)   //d
				{
					x++;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //l
				{
					y--;
					printf("%d",arr[x][y]);									
				}						
			}
			else
			{
				for(j=1;j<=i;j++)   //u
				{
					x--;
					printf("%d",arr[x][y]);
				}
				for(j=1;j<=i;j++)  //r
				{
					y++;
					printf("%d",arr[x][y]);									
				}									
			}
		}		
		for(i=1;i<n;i++)
		{
			x++;
			printf("%d",arr[x][y]);			
		}
	}

}


 
