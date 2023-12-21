#include<stdio.h>
#include<string.h>

main()
{
	char email[100]="kisusorathiya@gmail.com";
	char email1[100];
	char password[100]="krishna@123";
	char password1[100];
	
	int i,n;
	
	printf("Enter Your Email = ");
	gets(email1);
	
	printf("Enter Your PAssword = ");
	gets(password1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(password,password1)==0)
		{
			printf("You Are Login Successfully...");	
		}
		else
		{
			printf("Please ! Enter Valid Password.");
		}
	}
	else
	{
		printf("Please ! Enter Vallid Email Address.");	
	}
	
}