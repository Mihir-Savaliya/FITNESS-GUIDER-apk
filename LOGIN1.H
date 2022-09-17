#include<stdio.h>
#include<conio.h>
int n,mobileNumber[10];
char username,email,password;
char firstName, lastName, emailAddress, country;

void login()
{   
	textbackground(7);
    clrscr();
    
    gotoxy(34,4); textcolor(0);
    cprintf("-------------\n");
    gotoxy(38,5); textcolor(0);
    cprintf("Login \n");
    gotoxy(34,6); textcolor(0);
    cprintf("-------------\n");
    gotoxy(20,10);textcolor(0);
    cprintf("Username  :  ");
    gotoxy(35,10);
    cscanf("%s", &username);
    gotoxy(20,12);textcolor(0);
    cprintf("Email     :  ");
	gotoxy(35,12);
    cscanf("%s", &email);
}

void signin()
{
	textbackground(7);
    clrscr();
   
	gotoxy(34,4); textcolor(0);
    cprintf("-------------\n");
    gotoxy(38,5);textcolor(0);
    printf("singin \n");
	gotoxy(34,6); textcolor(0);
    cprintf("-------------\n");
    gotoxy(20,8);textcolor(0);
    cprintf("First Name     :  ");
	gotoxy(38,8);textcolor(0);
    cscanf("%s", &firstName);
    gotoxy(20,10);textcolor(0);
    cprintf("Last Name      :  ");
	gotoxy(38,10);textcolor(0);
    cscanf("%s", &lastName);
    gotoxy(20,12);textcolor(0);
    cprintf("Username       :  ");
	gotoxy(38,12);textcolor(0);
    cscanf("%s", &username);
    gotoxy(20,14);textcolor(0);
    cprintf("Email Address  :  ");
	gotoxy(38,14);textcolor(0);
    cscanf("%s", &emailAddress);
    gotoxy(20,16);textcolor(0);
    cprintf("Mobile Number  :  ");
	gotoxy(38,16);textcolor(0);
    cscanf("%d",&mobileNumber[10]);
    gotoxy(20,18);textcolor(0);
    cprintf("country        :  ");
	gotoxy(38,18);textcolor(0);
    cscanf("%s", &country);
}

void login1()
{
	textbackground(7);
	clrscr();
	
	gotoxy(20,8);textcolor(0);
	cprintf("1. Login\n");
	gotoxy(20,10);textcolor(0);
	cprintf("2. Signin ");
	gotoxy(20,12);textcolor(0);
	cprintf("3. Exit");
	gotoxy(10,24);textcolor(0);
	cprintf("Enter Your Choice [1-3]  :  ");
	
	scanf("%d",&n);
	switch (n)
	{
	   case 1:
		   login();
		   break;
	   case 2:
		   signin();
		   break;
	   case 3:
		   exit(0);
		   break;
	   default:
		   printf("Enter valid number.....");
		   main();
	}
}