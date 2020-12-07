#include<stdio.h>
main()
{
	int a[100]={0};
	int list[10]={3,4,2,4,2,4,2,6,8,63};
	int i,j;
	for(i=0;i<10;i++)//存入数组a中
	{
		j=list[i];
		a[j]=a[j]+1;
	}
	for(i=0;i<100;i++)//从数组a中取出
	{
		j=a[i];
		while (j>0)
		{
			printf("%d ",i);
			j=j-1;
		}
	}
}
