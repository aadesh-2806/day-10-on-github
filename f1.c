#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char a[20];
	int r;
	float p;
	
}stu;

void main()
{
	stu *s;
	int i,n,a;
	char v;
	FILE *t;
	
	t=fopen("filename.txt","r+t");
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	s=(stu *)malloc(n * sizeof(stu));
	if(s==NULL)
	{
		printf("no specific memory allocation");
		exit(1);
	}
	while(1)
	{
		if(v==EOF)
		{
			break;
		}
		v=fgetc(t);
		printf("%c",v);
		
	}
	
	i=0;
	while(i<n)
	{
		printf("name of student %d=",i+1);
		fprintf(t,"name of student %d=",i+1);
		
		fflush(stdin);
		
		gets(s[i].a);
		fputs(s[i].a,t);
		
		fprintf(t,"\n\troll no. of student %d=",i+1);
		printf("roll no. of student %d=",i+1);
		
		scanf("%d",&s[i].r);
		fprintf(t,"%d",s[i].r);
		
		fprintf(t,"\n\tper of student %d=",i+1);
		printf("per of student %d=",i+1);
		
		scanf("%f",&s[i].p);
		fprintf(t,"%f",s[i].p);
		
		fprintf(t,"\n");
		i++;
		
	}
	fclose(t);
	free(s);
	getch();
	
}	 		
