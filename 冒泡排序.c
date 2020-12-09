//冒泡排序

#include<stdio.h>
int main()
{	
	int list[10]={3,4,2,4,2,4,2,6,8,63};
	int n=10,i,j;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n-1; j++)
		{
			if (list[j]>list[j+1])
			{
				int tmp=list[j];
				list[j]=list[j+1];
				list[j+1]=tmp;

			}
		}
	}
	for(i=0;i<n;i++)
	{

		printf("%d  ",list[i]);
	}
}
