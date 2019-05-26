#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c=0,a,b,d=0;
	
	scanf("%d %d",&a,&b);
	
	int input[a][b],max[b+1];
	
	int i,j;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		 
			scanf("%d",&input[i][j]);
				
		}
		
	}
	
	for(i=0;i<=b;i++)
	{
		
		max[i]=0;
		
	}

		printf("\n");	
	
/*	for(i=0;i<a;i++)			//	Debug
	{
		for(j=0;j<b;j++)
		{
			
			printf("%d ",input[i][j]);
			
		}
		printf("\n");
	}	
*/
	
	for(i=0;i<a;i++)			//	find max
	{
		for(j=0;j<b;j++)
		{
			
			if(max[i] < input [i][j])
			max[i]=input[i][j];
			
		}
	}	
	
/*	for(i=0;i<a;i++)			//DEBUG
	{
		printf("%d ",max[i]);
		 
	}
*/
	
	for(i=0;i<a;i++)
	{
		d += max[i];
				
	}
	
	printf("%d\n",d);
	
	for(i=0;i<a;i++)
	{
		if(d%max[i] == 0)
		{
			printf("%d ",max[i]);
			c++;
		}
				
	}	
	if(c == 0)
	{
		printf("-1\n");
	}
	
	
    system("pause");

}


