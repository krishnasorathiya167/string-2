#include<stdio.h>
#include<string.h>

main()
{
	char password[100];
	int i, letter = 0, digit = 0, symbol = 0;
	
	printf("Enter Your Password = ");
	gets(password);
	
	if(strlen(password)>=6)
	{
		for(i=0;password[i]!=NULL;i++)
		{
			if(password[i]>='A' && password[i]<='Z'  || password[i]>='a' && password[i]<='z')
			{
				letter = 1;
			}
			else if(password[i]>='0' && password[i]<='9')
			{
				digit = 1;
			}
			else
			{
				symbol = 1;
			}
		}
		if(letter==1 && digit==1 && symbol==1)
		{
			printf("Your Password Is Valid.");
		}
		else
		{
			printf("Please! Enter letter, Digit And Symbol.");
		}
	}
	else
	{
		printf("Password Is Not Valid.");
	}
}