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

