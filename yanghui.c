#include<stdio.h>
main()
{
	int list[100]={0,1},list2[100]={0};
	int i,j,k;
	for (i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			list2[j]=list[j-1]+list[j];
		}
		for(k=2;k<=i;k++)
		{
			printf("%d ",list[k-1]);
		}
		for(k=1;k<=i;k++)
		{	
			list[k]=list2[k];
		}
		printf("\n");
	}
}