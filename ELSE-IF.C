#include<stdio.h>
#include<conio.h>
int main()
{
	int t;
	//clrscr();
	scanf("%d",&t);
	if(t==1)
	{
		printf("sunday") ;
	}
	else if(t==2)
	{
		printf("monday")  ;
	}
	else if(t==3)
	{
		printf("tuesday")   ;
	}
	else if(t==4)
	{
		printf("wednesday") ;
	}
	else if(t==5)
	{
		printf("thrusday");
	}
	else if(t==6)
	{
		printf("friday");
	}
	else if(t==7)
	{
		printf("saturday")    ;
	}
	else
	{
		printf("Invalid")    ;
	}

	 getch();

}
