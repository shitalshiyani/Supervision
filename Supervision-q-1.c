#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p=fopen("File_Handling.txt","w");
	
	if (p==NULL)
	{
		printf("File Not Open");
	}
	else
	{
		printf("Enter Data=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data Enter Successfully....");
	}
	fclose(p);
}
