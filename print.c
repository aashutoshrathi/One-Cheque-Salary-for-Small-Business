#include <stdio.h>
int title()
{
    system("COLOR 0A");
   printf(" \t\t\t\t=====================================================\n");
   printf(" \t\t\t\t      Welcome to Bank Cheque Genrator BY A.Rathi     \n");
   printf(" \t\t\t\t=====================================================\n");
   return 0;
}

int credits()
{
    system("cls");
    system("COLOR 0A");
    printf("\n\n\t\t ==============  Prepared By ================");
    printf("\n\n\t\t\t       Aashutosh Rathi \n\n\n\n\n ");
    printf("\n\n\t\t\t  For more updates visit : http://softwap.blogspot.in/ \n\n\n\n\n ");
    exit(0);
}

void newen(char name[],char acc[])
{
    FILE *ns;
    int m;
    int salary;
    ns=fopen("printfile.txt","a");
    printf("\n\t\t\t **** Enter salary of %s **** \n",name);
    printf("\n\n\t\t Salary : ");
    scanf("%d",&salary);
    fseek(ns,0,SEEK_END);
    fprintf(ns,"01000000%s000000000%05d00By Salary                                                 00000000\n",acc,salary);
    fclose(ns);

    printf("\n\n \t\t 1.Add another Teacher");
    printf("\n\t\t 2.End List");
    printf("\n\t\t 3. Exit");
    printf("\n\n\t\t Your Choice :- ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        {
            system("cls");
            loop:
            break;
        }
    case 2:
        {
            system("cls");
            printf("\n\t\t Enter Today's Date (in format dd.mm.yyyy) : ");
            char date[15];
            scanf("%s",date);
            printf("\n\t\t Enter Cheque Number : ");
            int chq;
            scanf("%d",&chq);
            printf("\n\t\t Enter Total : ");
            int total;
            scanf("%d",&total);
            ns=fopen("printfile.txt","a");
            fseek(ns,0,SEEK_END);
            fprintf(ns,"51000000YourAccountNo.000000000%05d00By Salary   %06d/%s                             00000000",total,chq,date);
            fclose(ns);
            credits();
            break;
        }
    case 3:
        {
            system("cls");
            credits();
            break;
        }

    }

}


int main()
{
title();
printf("\n\t\t Welcome, User !! \n");
printf("\n\t\t 1. Start\n");
printf("\n\t\t 2. Exit\n");
printf("\n\n\t\t Enter input : ");
int in,sum=0;
scanf("%d",&in);
switch(in)
{
case 1:
    {
        int c1,acc;
        loop :
        system("cls");
        printf("\n\t\t Choose a teacher to enter salary :\n");
        printf("\n\t\t 1. Employee 1\n");
        printf("\n\t\t 2. Employee 2\n");
        printf("\n\t\t 3. Employee 3\n");
        printf("\n\t\t 4. Employee 4\n");
        printf("\n\t\t 5. Employee 5\n");
        printf("\n\t\t 6. Employee 6\n");
        printf("\n\t\t 7. Employee 7\n");
        printf("\n\t\t 8. Employee 8\n");
        printf("\n\t\t 9. Employee 9\n");
        printf("\n\t\t 10.Employee 10\n");
        printf("\n\t\t 11.Employee 11\n");
        printf("\n\t\t 12.Exit\n");
        printf("\n\n\t\t Enter Your Input : ");
        scanf("%d",&c1);
        switch(c1)
        {
        	case 1:
        	{
        		system("cls");
        		newen("Employee 1","AccountOfEmpl1");
        	}
        	case 2:
        	{
        		system("cls");
        		newen("Employee 2","AccountOfEmpl2");
        	}
        	case 3:
        	{
        		system("cls");
        		newen("Employee 3","AccountOfEmpl3");
        	}
            case 4:
        	{
        		system("cls");
        		newen("Employee 4","AccountOfEmpl4");
        	}
        	case 5:
        	{
        		system("cls");
        		newen("Employee 5","AccountOfEmpl5");
        	}
        	case 6:
        	{
        		system("cls");
        		newen("Employee 6","AccountOfEmpl6");
        	}
        	case 7:
        	{
        		system("cls");
        		newen("Employee 7","AccountOfEmpl7");
        	}
        	case 8:
        	{
        		system("cls");
        		newen("Employee 8","AccountOfEmpl8");
        	}
        	case 9:
        	{
        		system("cls");
        		newen("Employee 9","AccountOfEmpl9");
        	}
        	case 10:
        	{
        		system("cls");
        		newen("Employee 10","AccountOfEmpl10");
        	}
        	case 11:
            {
                system("cls");
                newen("Employee 11","AccountOfEmpl11");
            }

        case 12:
            {
            credits();
            break;
            }


        }





    }
case 2:
    {
        credits();
        break;
    }
default :
    {
        printf("\n\t\t Wrong choice entered ");
        main();
    }

}

}
