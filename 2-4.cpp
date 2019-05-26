#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int count = 0 ;
	int id[50001],check[50001];

    scanf("%d",&n);//f->id v->check
    for(int i=0;i<n;i++)
	{
        scanf("%d",&id[i]);
        check[i] = 0 ;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i] == 0)
		{
            if(id[i] == i)
			{
                count++;
                check[i] = 1 ;
            }
			else
			{
            	check[i] = 1 ;
            	int temp = id[i];
                while(check[temp] == 0)
				{
               		check[temp] = 1;
                	temp = id[temp] ;
                }
                count++;

            }
        }
    }
    printf("%d",count);
    return 0;
}
