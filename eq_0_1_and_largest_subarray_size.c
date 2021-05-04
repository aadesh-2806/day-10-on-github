#include<stdio.h>

void main()
{
	
	int i,b[40],a[100],r,s,j,t,x,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	x=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			r=0;t=0;
			for(s=i;s<=j;s++)
			{
				if(a[s]==1)
				{
					r++;
				}
				if(a[s]==0)
				{
					t++;
				}
			}
			if(r==t)
			{
				b[x++]=j-i+1;
			}
		}
	}
	m=b[0];
	for(i=1;i<x;i++)
	{
		if(m<b[i])
		{
			m=b[i];
		}
	}
	printf("%d",m);
	getch();
	
}	 		
