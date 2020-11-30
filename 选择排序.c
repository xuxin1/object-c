//Ñ¡ÔñÅÅĞò


#include<stdio.h>
int jiaohaun(int list[],int a,int b)
{


	int tmp;
	tmp = list[a];
	list[a]=list[b];
	list[b]=tmp;
	return list[10];
}

void print(int list[],int n)
{
	int i;
	for (i = 0; i < n; i++)

	{
		printf("%d ",list[i]);
	}
}

int main()
{	
	int list[10]={3,4,2,4,2,4,2,6,8,63};
	int n=10,j,i,tmp,preindex;
	for (i = 1; i<n; i++)

	{	
		preindex=i-1;
		tmp = list[i];
		while (preindex>=0 && list[preindex]>tmp)
		{
			list[preindex+1]=list[preindex];
			preindex--;
		}
		list[preindex+1]=tmp;

	}
	print(list,10);
}

