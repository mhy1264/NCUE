#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input[1000];
	int i;
	scanf("%s",input);
//	printf("%s\n",input);
	int odd=0,even=0;
	for(i=0;input[i] != '\0';i++)
	{
		if(i % 2 == 0)
		{
			even+=input[i]-'0';
		}
		else
		{
			odd+=input[i]-'0';
		}
		 
	}
//	printf("%d %d",odd ,even);
	int key;
	if(odd<even)
	{
		key=even-odd;
	}
	else
	{
		key=odd-even;
	}
	printf("%d",key);
	system("pause");
}


