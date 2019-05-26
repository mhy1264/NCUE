#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp ;
	temp = *a;
    *a = *b;
    *b = temp;
}


void sel(int arr[], int len) 
{
    int i,j;

	for (i = 0 ; i <= len  ; i++) 
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
	int l[4];
	int i;
	for(i=1;i<=3;i++)
	{ 
		scanf("%d",&l[i]);
	} 
	
	for(i=1;i<=3;i++)
	{ 
		sel(l,i);
	} 

	printf("%d %d %d",l[1],l[2],l[3]); 
	printf("\n");
	
	if(l[1]+l[2] <= l[3])
	{
		printf("No\n");
		break;
	}	
	if(l[1]*l[1]+l[2]*l[2] == l[3]*l[3])
	{
		printf("Right\n");
		break;
	}
	if(l[1]*l[1]+l[2]*l[2] < l[3]*l[3])
	{
		printf("Obtuse\n");
		break;
	}	
	if(l[1]*l[1]+l[2]*l[2] > l[3]*l[3])
	{
		printf("Acute\n");
		break;		
	}






 system("pause");
}


