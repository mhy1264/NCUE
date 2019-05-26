#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100001];
	scanf("%s",str);
	int i;
	
	for(i= 0 ;i != '\0';i++)
	{
		if(str[i]<='A')
		{
			str[i]='1'; 	//DEF 1 ¤j¼g 
		}
		else
		{
			str[i]='2'; 	//DEF 2 ¤p¼g 
		}
	}
		
	printf("%s",str);
	
	
	
	
	system("pause");
}


