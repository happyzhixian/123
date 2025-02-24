#include<stdio.h>
int judge(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0 )
		{
			break;
		}
	}
	if(i==a) return 1;
	else return 0;
}
int exchange(int a)
{
	int re=0,i;
	while (a!=0)
	{
		re=re*10+a%10;
		a=a/10;
	}
	return re;
}
int main()
{
	int min,max;
	scanf("%d %d",&min,&max);
	int i;
	for(i=min;i<=max;i++)
	{
		if(judge(i)==1 && judge(exchange(i))==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
