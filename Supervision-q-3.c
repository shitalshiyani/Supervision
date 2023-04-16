#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p=fopen("File_Handling.txt","a");
	
	if (p==NULL)
	{
		printf("File Not Open");
	}
	else
	{
		printf("Enter Data=");
		gets(data);
		fputs("\n",p);
		printf("Data Enter Successfully...");
	}
	fclose(p);
	printf("\n.....................\n");
	
	p=fopen("File_Handling.txt","r");
	
	if (p==NULL)
	{
		printf("File Not Open");
	}
	else
	{
		while (fgets(data,100,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
