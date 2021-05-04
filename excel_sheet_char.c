#include<stdio.h>
#include<math.h>

void main()
{	
	int n,j,t;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);	
	
	t=n%26;
	j=n/26;
	if(n<=26)
	{
		printf("%c",64+n);
	}
	else
	{
		if(t==0)
		{
			printf("%cZ",63+j);
		}
		else
		printf("%c%c",64+j,64+t);
	}

	getch();
}
