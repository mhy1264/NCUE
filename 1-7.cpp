#include<stdio.h> 
#include<stdlib.h>
 /******
 * (0,0,4,1)未通過 
 * 把 ru rd lu ld 的副程式移到fun( )內=>用4array去紀錄4個分身 
 *
 *
 *****/
float ru(float x0,float y0,float x,float y)
{
	if(x0 >0 && y0 > 0)
	{
		x+= x0 ; 
		y+= y0 ;
	} 
}

float rd(float x0,float y0,float x,float y)
{
	if(x0 >0 && y0 > 0)
	{
		x+= x0 ; 
		y+= y0 ;
	} 
}

float lu(float x0,float y0,float x,float y)
{
	if(x0 >0 && y0 > 0)
	{
		x+= x0 ; 
		y+= y0 ;
	} 	
}

float ld(float x0 , float y0 , float x , float y)
{
	if(x0 >0 && y0 > 0)
	{
		x+= x0 ; 
		y+= y0 ;
	} 	
}

float fun(float x0 , float y0 , float lenth , int times , float x , float y )
{
	lenth/=2; 
	ru(x0+lenth , y0+lenth , x , y );//右上 
	rd(x0+lenth , y0-lenth , x , y );//右下 
	lu(x0-lenth , y0+lenth , x , y );//左上 
	ld(x0-lenth,y0-lenth,x,y);//左下 
	if(times == 0)
	{
		printf("%d %d",x,y);
		return 0;
	}
	return fun( x0 , y0 , lenth /2 , times -1,x,y);	
}

int main()
{
	float x0,y0,lenth,x,y;
	int times;
	scanf("%f %f %f %d",&x0,&y0,&lenth,&times);
	fun(x0,y0,lenth,times,x,y);	

}
