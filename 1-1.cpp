#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b) //交換兩個變數
{
    int temp ;
	temp = *a;
    *a = *b;
    *b = temp;
}
void sel(int arr[], int len) 
{
    int i,j;

	for (i=1;i<=len;i++) 
    {
		int min = i;
		for (j = i + 1; j <= len; j++)     
			if (arr[j] < arr[min])    
				min = j;    
	   	swap(&arr[min], &arr[i]);   
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	
	int score[n+1];
	
	for (i=0;i<=n;i++)
	{
		score[i]=0;
	} 
	
	for (i=1;i<=n;i++)
	{
		scanf("%d",&score[i]);

	}
	
	 
	for (i=1;i<=n;i++)
	{
		sel(score,i);
	}
	
	for (i=1;i<=n;i++)
	{
		printf("%d ",score[i]);
	} 
	printf("\n");
	if(score[1]>=60)
	{
		printf("best case\n");
		printf("%d\n",score[1]);
	}
//	printf("%d",n);
	if(score[n]<60)
	{
		printf("%d\n",score[n]);
		printf("worst case\n");
	}
	
	for(i=1;i<=n;i++)
	{
		if(score[i]<60 && score[i+1]>= 60)
		{
			printf("%d\n%d\n",score[i],score[i+1]);
			break;
		}
	}
}


