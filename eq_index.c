#include<stdio.h>

void main()
{
	
	int i,a[100],r,s,n,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter no%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	for(i=1;i<n;i++)		
	{				
		r=0;
		for(j=0;j<i;j++)
		{
			r=r+a[j];
		}
		
		s=0;
		for(j=i+1;j<n;j++)
		{
			s=s+a[j];
		}
		if(r==s)
		{
			printf("%d ",i);
		}
	}
	getch();
	
}	 		
