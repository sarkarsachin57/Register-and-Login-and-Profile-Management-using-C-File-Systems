
// CALLING REQUIRED C HEADER FILES --------------------

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>



// DECLEARING ALL REQUIRED USER DEFINE FUNCTIONS ----------------------

void start();
void login();
void registration();
void tophead();
void logmenu();
void dashboard(char *arr);
void view_profile(char *arr);
void edit_profile(char *arr);
void delete_profile(char *arr);
void exit_profile(char *arr);
void delete_file(char *arr);




// MAIN FUNCTION----------------------

int main()
{
	start();
	login();
	return 0;
}





// START FUNCTION DEFINATION -------------------------

void start()
{
	int i, j;

    sleep(2);

	for(i=0;i<14;i++)
	{
		printf("\n");
	}
    for(i=0;i<10;i++)
    {


        // ****** PRINTING D ----------------------



        for(j=0;j<15;j++)
        {
            printf(" ");
        }
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        for(j=0;j<7 && i<2;j++)
        {
            printf("*");
        }
        for(j=0;j<i && i<2;j++)
        {
            printf("*");
        }
        for(j=0;j<5 && i>1 && i<4;j++)
        {
            printf(" ");
        }

        for(j=0;j<i-1 && i>1 && i<4;j++)
        {
            printf(" ");
        }
        for(j=0;j<3 && i>1 && i<4;j++)
        {
            printf("*");
        }
        for(j=0;j<7 && i>3 && i<6;j++)
        {
            printf(" ");
        }
        for(j=0;j<3 && i>3 && i<6;j++)
        {
            printf("*");
        }
        for(j=0;j<5 && i>5 && i<8;j++)
        {
            printf(" ");
        }
        for(j=8;j>i && i>5 && i<8;j--)
        {
            printf(" ");
        }
        for(j=0;j<3 && i>5 && i<8;j++)
        {
            printf("*");
        }
        for(j=0;j<7 && i>7 && i<10;j++)
        {
            printf("*");
        }
        for(j=9;j>i && i>7 && i<10;j--)
        {
            printf("*");
        }
        for(j=3;j>i && i<4;j--)
        {
            printf(" ");
        }

        for(j=6;j<i && i>6 && i<10;j++)
        {
            printf(" ");
        }



         // ****** PRINTING A ----------------------



         for(j=0;j<5;j++)
         {
             printf(" ");
         }
         for(j=10;j>i;j--)
         {
             printf(" ");
         }
         for(j=0;j<3;j++)
         {
             printf("*");
         }
         for(j=0;j<i*2 && i<3;j++)
         {
             printf("*");
         }
         for(j=2;j<i*2-1 && i>2 && i<5;j++)
         {
             printf(" ");
         }
          for(j=2;j<i*2-1 && i>4 && i<7;j++)
         {
             printf("*");
         }
         for(j=2;j<i*2-1 && i>6 && i<10;j++)
         {
             printf(" ");
         }
         for(j=0;j<3 && i>2;j++)
         {
             printf("*");
         }
         for(j=10;j>i;j--)
         {
             printf(" ");
         }





         // ****** PRINTING T ----------------------





         for(j=0;j<18 && i<2;j++)
         {
             printf("*");
         }
         for(j=0;j<7 && i>1;j++)
         {
             printf(" ");
         }
         for(j=0;j<4 && i>1;j++)
         {
             printf("*");
         }
         for(j=0;j<7 && i>1;j++)
         {
             printf(" ");
         }





         // ****** PRINTING M ----------------------




         for(j=0;j<5;j++)
         {
             printf(" ");
         }
         for(j=0;j<3;j++)
         {
             printf("*");
         }
         for(j=0;j<i+2 && i<3;j++)
         {
             printf("*");
         }
         for(j=2;j<i+1 && i>2 && i<5;j++)
         {
             printf(" ");
         }
         for(j=2;j<5 && i>2 && i<5;j++)
         {
             printf("*");
         }
         for(j=5;j>i+1 && i<5;j--)
         {
             printf(" ");
         }
         for(j=5;j>i+1 && i<5;j--)
         {
             printf(" ");
         }
         for(j=0;j<i+2 && i<3;j++)
         {
             printf("*");
         }

         for(j=2;j<5 && i>2 && i<5;j++)
         {
             printf("*");
         }
         for(j=2;j<i+1 && i>2 && i<5;j++)
         {
             printf(" ");
         }
         for(j=0;j<12 && i>4;j++)
         {
             printf(" ");
         }
        for(j=0;j<3;j++)
         {
             printf("*");
         }






         // ****** PRINTING A ----------------------



         for(j=0;j<5;j++)
         {
             printf(" ");
         }
         for(j=10;j>i;j--)
         {
             printf(" ");
         }
         for(j=0;j<3;j++)
         {
             printf("*");
         }
         for(j=0;j<i*2 && i<3;j++)
         {
             printf("*");
         }
         for(j=2;j<i*2-1 && i>2 && i<5;j++)
         {
             printf(" ");
         }
          for(j=2;j<i*2-1 && i>4 && i<7;j++)
         {
             printf("*");
         }
         for(j=2;j<i*2-1 && i>6 && i<10;j++)
         {
             printf(" ");
         }
         for(j=0;j<3 && i>2;j++)
         {
             printf("*");
         }
         for(j=10;j>i;j--)
         {
             printf(" ");
         }




         // ****** PRINTING K ----------------------




        for(j=0;j<5;j++)
         {
             printf(" ");
         }
         for(j=0;j<3;j++)
         {
             printf("*");
         }
         for(j=4;j>i-2 && i<4;j--)
         {
             printf(" ");
         }
         for(j=0;j<2 && i>3 && i<6;j++)
         {
             printf("*");
         }
         for(j=5;j<i+2 && i>5;j++)
         {
             printf(" ");
         }
         for(j=0;j<3;j++)
         {
             printf("*");
         }


        sleep(1);
        printf("\n");
    }
//	printf("\n\n\t\t LOADING.....");
	sleep(5);
}




// TOPHEAD FUNCTION DEFINATION -----------------------

void tophead()
{
    int i;
	for(i=0;i<4;i++)
	{
		printf("\n");
	}

	printf("\n----------------  DATMAK SOLUTIONS OFFICIAL ----------------\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________");
	for(i=0;i<5;i++)
	{
		printf("\n");
	}

}




// LOGIN FUNCTION -------------------------

void login()
{
	int i;


	retry :

    system("cls");
	tophead();

	printf("\t\t\t Press 1 to to Login \n\t\t\t Press 0 to ragister \n\n\t\t\t\t\t Press here : ");
	scanf("%d",&i);
	system("cls");

	if(i == 1)
	{
	    getchar();
		logmenu();
	}
	else if(i == 0)
	{
		tophead();
		registration();
	}
	else
	{
		tophead();
		printf("\t\t\t\t Invalid entry... \n\t\t\t\t press any key to retry : ");
		getchar();
		getchar();
		system("cls");
		goto retry ;

	}
}




//  LOGMENU FUNCTION DEFINATION ---------------------------

void logmenu()
{
    char ch, un[30], pass[30], passfind[30];
    int k = 0;
    FILE *flog;
    system("cls");
    tophead();
    printf("\t\t\t LOGIN TO CONTINUE : ");
	printf("\n\n\n \t\t\t\t USERNAME : ");
    gets(un);

    strcat(un,".txt");



    printf("\n \t\t\t\t PASSWORD : ");
    gets(pass);

    flog = fopen(un,"r");
    if(flog == NULL)
    {
        printf("\n \t\t\t\t Username not found. Press a key to Try Again...");
        getchar();
        login();
        exit(1);
    }

    while((ch = fgetc(flog)) != '\n')
    {
        passfind[k] = ch;
        k++;
    }
    passfind[k] = '\0';

    if(strcmp(pass,passfind) != 0)
    {
        printf("\n \t\t\t\t Invalid Password. Press a key to Try Again ... ");
        getchar();
        system("cls");
        logmenu();
    }

    system("cls");
    dashboard(un);

}






//  DASHBOARD FUNCTION DEFINATION -----------------------

void dashboard(char *arr)
{
    system("cls");
    tophead();

    char ch;
    int pressmenu;
    FILE *fmenu;
    fmenu = fopen(arr,"r");
    while((ch = fgetc(fmenu)) != '\n')
    {

    }
    printf("\n\n \t\t\t\t\t WELCOME ");

    fseek(fmenu,7,SEEK_CUR);
    while((ch = fgetc(fmenu)) != '\n')
    {
        printf("%c",ch);
    }
    printf("...");

    printf("\n\n\n \t\t\t\t\t\t 1) VIEW PROFILE ");

    printf("\n\n \t\t\t\t\t\t 2) EDIT PROFILE ");

    printf("\n\n \t\t\t\t\t\t 3) SIGN OUT ");

    printf("\n\n \t\t\t\t\t\t 4) EXIT ");

    printf("\n\n\n \t\t\t\t\t\t Press 1 to 4 : ");
    scanf("%d",&pressmenu);

    switch(pressmenu)
    {
        case 1 :
            view_profile(arr);
            break;

        case 2 :
            getchar();
            edit_profile(arr);
            break;

        case 3 :
            getchar();
            delete_profile(arr);
            break;

        case 4 :
            exit_profile(arr);

        default :
            printf("\n\n\n \t\t\t\t\t\t Invalid Pressed. Press a key to Try Again... ");
            getchar();getchar();
            system("cls");
            dashboard(arr);

    }

    fclose(fmenu);

}






// VIEW_PROFILE FUNCTION DEFINATION --------------------

void view_profile(char *arr)
{
    system("cls");
    tophead();

    char ch;
    int i;
    FILE *fmenu;
    fmenu = fopen(arr,"r");
    while((ch = fgetc(fmenu)) != '\n')
    {

    }
    printf("\n\n\n \t\t\t\t\t YOUR PROFILE : ");

    printf("\n\n\n \t\t\t\t\t\t\t");

    for(i=0;i<6;i++)
    {
        while((ch = fgetc(fmenu)) != '\n')
        {
            printf("%c",ch);
        }

        printf("\n\n \t\t\t\t\t\t\t");

    }

    printf("\n\n \t\t\t\t\t\t\t\t Press a key to continue...");

    getchar();
    getchar();

    retry :
        system("cls");
        tophead();

        printf("\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t Press 1 for Dashboard. \n \t\t\t\t\t\t\t\t Press 0 for Exit. ");
        printf("\n\n\n \t\t\t\t\t\t\t\t\t Press here : ");
        scanf("%d",&i);


        if(i == 1)
        {
            dashboard(arr);
        }
        else if(i == 0)
        {
            exit_profile(arr);
        }
        else
        {
            system("cls");
            tophead();
            printf("\t\t\t\t Invalid entry... \n\t\t\t\t press any key to retry : ");
            getchar();
            getchar();
            system("cls");
            goto retry ;

        }
}






// EDIT_PROFILE FUNCTION DEFINATION -----------------------

void edit_profile(char *arr)
{

    system("cls");
    tophead();

    char ch;
    int del;


    printf("\n\n \t\t\t\t Are You Sure to Edit Your Profile [y/n] : ");
    scanf("%c",&ch);

        if(ch == 'y' || ch == 'Y')
        {
            printf("\n\n \t\t\t\t\t Processing...");
            sleep(1);
            printf("Wait...");
            sleep(1);
            system("cls");
            delete_file(arr);
            FILE *fp;
            fp = fopen(arr,"r");

            if(fp == NULL)
            {
                registration();
                exit(1);
            }


            printf("\n\n\n\n\n\n\n \t\t\t\t\t\t\t Can't Edit Your Profile.\n \t\t\t\t\t\t\t  Please send a mail to datatech.solutions.official@gmail.com.\n \t\t\t\t\t\t\t  Thank you..");
            printf("\n\n \t\t\t\t\t\t\t Press a key to continue...");
            getchar();
            getchar();
            dashboard(arr);
        }
        else if(ch == 'n' || ch == 'N')
        {
            system("cls");
            dashboard(arr);
            exit(1);
        }
        else
        {
            printf("\n\n \t\t\t\t\t Wrong Press. Press a key to try again...");
            getchar();
            getchar();

            edit_profile(arr);
            exit(1);

        }


}







// DELETE_PROFILE FUNCTION DEFINATION ---------------------------------------

void delete_profile(char *arr)
{

    system("cls");
    tophead();

    char ch;
    int del;

    printf("\n\n \t\t\t\t Are You Sure to Sign Out [y/n] : ");
    scanf("%c",&ch);

        if(ch == 'y' || ch == 'Y')
        {
            printf("\n\n \t\t\t\t\t Processing...");
            sleep(1);
            printf("Wait...");
            sleep(1);
            system("cls");
            delete_file(arr);
            FILE *fp;
            fp = fopen(arr,"r");
            if(fp == NULL)
            {
                printf("\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t SIGN OUT COMPLETED. ");
                sleep(1);
                printf("\n\n \t\t\t\t\t\t THANKS FOR USING DATMAK..");
                sleep(2);
                exit(1);
            }

            printf("\n\n\n\n\n\n\n \t\t\t\t\t\t\t Can't Sign Out.\n \t\t\t\t\t\t\t  Please send a mail to datatech.solutions.official@gmail.com.\n \t\t\t\t\t\t\t  Thank you..");
            printf("\n\n \t\t\t\t\t\t\t Press a key to continue...");
            getchar();
            getchar();
            dashboard(arr);

        }
        else if(ch == 'n' || ch == 'N')
        {
            system("cls");
            dashboard(arr);
            exit(1);
        }
        else
        {
            printf("\n\n \t\t\t\t\t Wrong Press. Press a key to try again...");
            getchar();getchar();
            delete_profile(arr);
            exit(1);

        }

       // FILE *fmenu;


}






// EXIT_PROFILE FUNCTION DEFINATION ------------------------------------

void exit_profile(char *arr)
{
    system("cls");
    tophead();

    printf("\n\n\n\n\n\n \t\t\t\t\t\t\t THANK ");
    sleep(1);
    printf("YOU. ");
    sleep(1);
    printf("GOOD ");
    sleep(1);
    printf("BYE.. ");
    sleep(2);
    exit(1);


}








// DECLAERING REGIS STRUTURE AND REGISTRATION FUNCTION DEFINATION -----------------------------

struct regis
{
    char fname[15], lname[15], gen, email[50], emailcon[50], dob[12], contact[10], username[30], password[30], passcon[30];
    int dd, mm, yyyy;

}cust;

void registration()
{

    system("cls");
    tophead();

    int i = 0, j, checkuser;
    char gmail[10] = "moc.liamg@", phone[10];
    char revemail[50];
    printf("\t\t\t ENTER DETAILS : ");



    // NAME ---------------------------------------------------

	name :

        j = 0;
	    getchar();

        printf("\n\n\n \t\t\t\t FRIST NAME : ");
        scanf("%s",&cust.fname);
        while(cust.fname[j]!='\0')
        {
            if(isalpha(cust.fname[j]) == 0)
            {
                printf("\n\n \t\t\t\t Invalid Name. Try again..");
                goto name;
            }
            cust.fname[j] = toupper(cust.fname[j]);
            j++;
        }

        getchar();
        printf("\n\n \t\t\t\t LAST NAME : ");
        scanf("%s",&cust.lname);
        j = 0;
        while(cust.lname[j]!='\0')
        {
            if(isalpha(cust.lname[j]) == 0)
            {
                printf("\n\n \t\t\t\t Invalid Name. Try again..");
                goto name;
            }
            cust.lname[j] = toupper(cust.lname[j]);
            j++;
        }





    // GENDER -------------------------------------------------------

	gender :

        getchar();
        printf("\n\n \t\t\t\t GENDER (M/F) : ");
        scanf("%c",&cust.gen);

        if(cust.gen == 'm' || cust.gen == 'M')
        {

        }
        else if(cust.gen == 'F' || cust.gen == 'f')
        {

        }
        else
        {
            printf("\n \t\t\t\t\t Enter a valid Gender..");
            goto gender;
        }

    getchar();





    // EMAIL ------------------------------------------------

    email :

        printf("\n\n \t\t\t\t ENTER E-MAIL : ");
        gets(cust.email);
        strcpy(revemail,strrev(cust.email));

        if(strncmp(gmail,revemail,10) != 0)
        {
            printf("\n\n \t\t\t\t Invalid e-mail. Try again...");
            goto email ;
        }

        printf("\n\n \t\t\t\t CONFIRM EMAIL : ");
        gets(cust.emailcon);


        if(strcmp(strrev(cust.email),cust.emailcon) != 0)
        {
            printf("\n\n \t\t\t\t\t Your e-mail not confirmed. Try again..");
            goto email ;
        }
        else
        {
            printf("\n\n \t\t\t\t\t Your email confirmed succesfully..\n \t\t\t\t\t press a key to continue..");
            getchar();
        }


    system("cls");
    tophead();





    // DATE OF BIRTH ------------------------------------------

    dob :



        printf("\n\n \t\t\t\t ENTER DATE OF BIRTH (DDMMYYYY) : ");
        scanf("%d",&cust.dd);
        printf("\t\t\t\t\t\t\t\t  ");
        scanf("%d",&cust.mm);
        printf("\t\t\t\t\t\t\t\t  ");
        scanf("%d",&cust.yyyy);
        if(cust.dd < 1 || cust.dd > 31)
        {
            system("cls");
            tophead();
            printf("\n \t\t\t\t Day cannot be less than 1 or greater than 31. Try again...");
            goto dob;
        }
        else if(cust.mm < 1 || cust.mm > 12)
        {
            system("cls");
            tophead();
            printf("\n \t\t\t\t Month cannot be less than 1 or greater than 12. Try again...");
            goto dob;
        }
        else if(cust.yyyy < 1961 || cust.yyyy > 2003)
        {
            system("cls");
            tophead();
            printf("\n \t\t\t\t Year cannot be less than 1961 or greater than 2003. Try again...");
            goto dob;
        }


    getchar();





    // CONTACT --------------------------------------

    contact :

        printf("\n\n \t\t\t\t ENTER CONTACT NUMBER : ");
        gets(cust.contact);
        for(j=0;cust.contact[j]!='\0';j++)
        {
            if(isalpha(cust.contact[j]) != 0 || isalnum(cust.contact[j]) == 0)
            {
                printf("\n\n \t\t\t\t Invalid contact. Try again..");
                goto contact;
            }
        }
        if(strlen(cust.contact) != 10)
        {
            printf("\n\n \t\t\t\t Invalid contact. Try again..");
            goto contact;
        }


    printf("\n\n \t\t\t\t Your details saved successfully...");
    printf("\n \t\t\t\t Press a key to continue...");
    getchar();





    // USERNAME -------------------------------------------------

    username :

        system("cls");
        tophead();

        printf("\n\n\n \t\t\t CREAT YOUR USERNAME AND PASSWORD : ");
        printf("\n\n\n \t\t\t\t ENTER USERNAME : ");
        gets(cust.username);


        strcat(cust.username,".txt");

    FILE *freg;
	freg = fopen(cust.username,"r");
	if(freg != NULL)
    {
        printf("\n\n \t\t\t\t sorry this username have already exist..");

        retry :

            printf("\n\n \t\t\t\t\t Press 1 to recreate Username .");
            printf("\n \t\t\t\t\t Press 0 to redirect to login .");
            printf("\n\n\n \t\t\t\t\t\t press here : ");
            scanf("%d",&checkuser);
            if (checkuser == 1)
            {
                getchar();
                goto username;
            }
            else if (checkuser == 0)
            {
                system("cls");
                login();
                exit(1);
            }
            else
            {
                printf("\n\n \t\t\t\t\t\t\t Invalid data entry. Retry it.. ");
                goto retry;
            }

    }





    // PASSWORD ------------------------------------------------------

    password :

        printf("\n\n \t\t\t\t ENTER PASSWORD : ");
        gets(cust.password);

        if(strlen(cust.password) < 8)
        {
            printf("\n\n \t\t\t\t\t A Password must contains atleast 8 characters or digits. Try again ..");
            goto password;
        }

        printf("\n\n \t\t\t\t CONMFIRM PASSWORD : ");
        gets(cust.passcon);

        if(strcmp(cust.password,cust.passcon) != 0)
        {
            printf("\n\n \t\t\t\t\t Your Password not confirmed. Try again..");
            goto password ;
        }
        else
        {
            printf("\n\n \t\t\t\t\t Your Password confirmed succesfully..\n \t\t\t\t\t press a key to continue..");
            getchar();
        }






    // FILE HANDLELING -------------------------------------------------------------

    freg = fopen(cust.username,"w");
	if(freg == NULL)
    {
        printf("\n\n \t\t\t\t Sorry .. File not exist..");
        exit(1);
    }

    fprintf(freg,"%s\n",cust.password);

    fprintf(freg,"NAME : %s %s \n",cust.fname,cust.lname);

    if(cust.gen == 'm' || cust.gen == 'M')
        {
            fprintf(freg,"GENDER : MALE \n");
        }
        else if(cust.gen == 'F' || cust.gen == 'f')
        {
            fprintf(freg,"GENDER : FEMALE \n");
        }

    fprintf(freg,"EMAIL : %s \n",cust.emailcon);

    fprintf(freg,"DATE OF BRITH : %d/%d/%d \n",cust.dd,cust.mm,cust.yyyy);

    fprintf(freg,"AGE : %d \n",2021-cust.yyyy);

    strncpy(phone,cust.contact,10);

    phone[10] = '\0';

    fprintf(freg,"CONTACT : %s \n",phone);

    fclose(freg);

    printf("\n\n \t\t\t\t Registration completed successfully. Press a key to login..");

    getchar();

    system("cls");

    logmenu();





}






// DELETE_FILE FUNCTION DEFINATION -----------------------------------------------

void delete_file(char *arr)
{
    remove(arr);
}

