int main()
{	
	int list[10]={3,4,2,4,2,4,2,6,8,63};
	int n=10,j,i,minindex;
	for (i = 0; i<n-1 ; i ++)    
	{
		minindex=i;
		for (j = i+1; j<n; j++)
		{
			if (list[j]<list[minindex])
			{
				minindex=j;
			}
		}
		jiaohaun(list,i,minindex);
	
	}
	print(list,n);
}
