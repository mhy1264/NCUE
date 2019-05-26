#include <stdio.h>
#include <stdlib.h>
//git test
 
int main()
{
    int N, M, K;
    int member[200000]={0};
    scanf("%d %d %d",&N, &M, &K);
    if(N==(K+1))
    {
        int final_m = 0;
        for(int n=1; n<=N; n++)
        {
            final_m=(final_m+M)%n;
        }
        printf("%d\n",final_m+1);
    }

    else{
        for(int i=0; i<N ; i++)
        {
            member[i]=i+1;
        }
        int now=0;
        for(int i=0;i<K;i++){
            now=(now+M-1)%N;
            for(int j=now; j<N-1; j++)
            {
            member[j]=member[j+1];
            }
            N-=1;
        }
      printf("%d\n",member[now%N]);
    }

    return 0;
}
