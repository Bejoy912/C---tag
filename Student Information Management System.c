#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define Student struct Stud

void add(FILE * fp);
void view(FILE * fp);
void modify(FILE * fp);
void search(FILE *fp);
FILE * del(FILE * fp);


struct Stud
{
    char name[100];
    char address[50];
    int id;
    char phone[100];
    char email[100];
    char fathername[100];



};




int main()
{
    char username[15];
    char password[12];
    int i;


    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
        scanf("%s",&username);

        printf("\n\t\t\t\t\tPlease Enter The Password: ");
        scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
        scanf("%s",&username);

        printf("\n\t\t\t\t\tPlease Enter The Password: ");
        scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        return 0;
    }

    }

    }

        FILE * fp;
        Student s;
        int option;
        char another;

        if((fp=fopen("studentInfo.txt","rb+"))==NULL)
        {
            if((fp=fopen("studentInfo.txt","wb+"))==NULL)
            {
                printf("can't open file");
                return 0;
            }
        }


        while(1)
        {

            printf("\n\t");
            printChar('-',110);
            printf("\n\n\t\t\t1. ADD A NEW STUDENT: ");
            printf("\n\n\t\t\t2. VIEW ALL STUDENTS DETAILS: ");
            printf("\n\n\t\t\t3. MODIFY STUDENT INFORMATION: ");
            printf("\n\n\t\t\t4. SEARCH STUDENT INFORMATION: ");
            printf("\n\n\t\t\t5. DELETE STUDENT INFORMATION: ");
            printf("\n\n\t\t\t6. EXIT: ");

            printf("\n\n\t\t  ENTER THE CHOICE (1-6): ");
            scanf("%d",&option);

            switch(option)
            {
            case 1:
                add(fp);
                break;

            case 2:
                view(fp);
                break;

            case 3:
                modify(fp);
                break;

            case 4:
                search(fp);
                break;

            case 5:
                fp=del(fp);
                break;

            case 6:
                return 1;
                break;

            default:
                printf("\n\t\tYou Pressed wrong key");
                printf("\n\t\tProgram terminated");
                getch();
                exit(0);

            }
        }
            return 1;

    }



    void printChar(char ch,int n)
    {
        while(n--)
        {
            putchar(ch);
        }
    }


    void add(FILE * fp)
    {
        char username[15];
        char password[12];



    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
        scanf("%s",&username);

        printf("\n\t\t\t\t\tPlease Enter The Password: ");
        scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
        scanf("%s",&username);

        printf("\n\t\t\t\t\tPlease Enter The Password: ");
        scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        return 0;
    }

    }
    }



        char another='y';
        Student s;
        int i;
        float cgpa;

        fseek(fp,0,SEEK_END);
        while(another=='y'||another=='Y')
        {

            printf("\n\n\t\tStudent Name: \t");
            fflush(stdin);
            fgets(s.name,100,stdin);
            s.name[strlen(s.name)-1]='\0';

            printf("\n\n\t\t Address: \t");
            fflush(stdin);
            fgets(s.address,50,stdin);
            s.address[strlen(s.address)-1]='\0';

            printf("\n\n\t\tStudent ID: \t");
            scanf("%d",&s.id);

            printf("\n\n\t\tStudent's phone number: \t");
            fflush(stdin);
            fgets(s.phone,100,stdin);
            s.phone[strlen(s.phone)-1]='\0';

            printf("\n\n\t\tStudent's email: \t");
            fflush(stdin);
            fgets(s.email,100,stdin);
            s.email[strlen(s.email)-1]='\0';

            printf("\n\n\t\tStudent's father's name: \t");
            fflush(stdin);
            fgets(s.fathername,100,stdin);
            s.fathername[strlen(s.fathername)-1]='\0';




            fwrite(&s,sizeof(s),1,fp);

            printf("\n\n\t\tWant to Enter Another Student Info (y/n)\t");
            fflush(stdin);
            another=getchar();
            if(another!='y')
            {
                Student s;
        int i,siz=sizeof(s);

        rewind(fp);

        while((fread(&s,siz,1,fp))==1)
        {
            printf("\n\t\tname : %s",s.name);
            printf("\n\n\t\tAddress : %s",s.address);
            printf("\n\n\t\tId : %d",s.id);
             printf("\n\t\tphone : %s",s.phone);
              printf("\n\t\temail : %s",s.email);
               printf("\n\t\tfather's name : %s",s.fathername);

        }
        printf("\n\n\n\t");
        printChar('*',110);
        printf("\n\n\t");
        system("pause");
            }
        }
    }

    FILE * del(FILE * fp)
    {
         char username[15];
         char password[12];
         int i;


    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
    printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

         return 0;
    }

    }
    }


        Student s;
        int flag=0,tempRoll,siz=sizeof(s);
        FILE *ft;

        if((ft=fopen("temp.txt","wb+"))==NULL)
        {
            printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
            system("pause");
            return fp;
        }

        printf("\n\n\tEnter ID number of Student to Delete the Record");
        printf("\n\n\t\t\tID No. : ");
        scanf("%d",&tempRoll);

        rewind(fp);


        while((fread(&s,siz,1,fp))==1)
        {
            if(s.id==tempRoll)
            {
                flag=1;
                printf("\n\tRecord Deleted for");
                printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",s.name,s.address,s.id,s.phone,s.email,s.fathername);
                continue;
            }

            fwrite(&s,siz,1,ft);
        }


        fclose(fp);
        fclose(ft);

        remove("studentInfo.txt");
        rename("temp.txt","studentInfo.txt");

        if((fp=fopen("studentInfo.txt","rb+"))==NULL)
        {
            printf("ERROR");
            return  NULL;
        }

        if(flag==0)
            printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND \n\t");

        printChar('-',110);
        printf("\n\t");
        system("pause");
        return fp;
    }




    void modify(FILE * fp)
    {
         char username[15];
    char password[12];



    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

            printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

         return 0;
    }

    }
    }


 Student s;
        int i,flag=0,tempRoll,siz=sizeof(s);
        float cgpa;
        char another='y';
          while(another=='y'||another=='Y')
        {

        printf("\n\n\tEnter Id Number of Student to MODIFY the Record : ");
        scanf("%d",&tempRoll);

        rewind(fp);

        while((fread(&s,siz,1,fp))==1)
        {
            if(s.id==tempRoll)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            fseek(fp,-siz,SEEK_CUR);
            printf("\n\n\t\tRECORD FOUND");
            printf("\n\n\t\tEnter New Data for the Record");

            printf("\n\n\t\tStudent Name: \t");
            fflush(stdin);
            fgets(s.name,100,stdin);
            s.name[strlen(s.name)-1]='\0';

            printf("\n\n\t\tAddress: \t");
            fflush(stdin);
            fgets(s.address,50,stdin);
            s.address[strlen(s.address)-1]='\0';

            printf("\n\n\t\tStudent id: \t");
            scanf("%d",&s.id);

              printf("\n\n\t\tStudent's phone number: \t");
            fflush(stdin);
            fgets(s.phone,100,stdin);
            s.phone[strlen(s.phone)-1]='\0';

            printf("\n\n\t\tStudent's email: \t");
            fflush(stdin);
            fgets(s.email,100,stdin);
            s.email[strlen(s.email)-1]='\0';

            printf("\n\n\t\tStudent's father's name: \t");
            fflush(stdin);
            fgets(s.fathername,100,stdin);
            s.fathername[strlen(s.fathername)-1]='\0';






            fwrite(&s,sizeof(s),1,fp);
        }

        else
            printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");
             printf("\n\n\t\tWant to Enter Another Search (Y/N)");
            fflush(stdin);
            another=getchar();


    }

    }



    void view(FILE * fp)
    {
         char username[15];
    char password[12];



    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

            printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

         return 0;
    }

    }
    }
        Student s;
        int i,siz=sizeof(s);

        rewind(fp);

        while((fread(&s,siz,1,fp))==1)
        {
            printf("\n\t\tNAME : %s",s.name);
            printf("\n\n\t\tAddress : %s",s.address);
            printf("\n\n\t\tId : %d",s.id);
            printf("\n\t\tphone : %s",s.phone);
              printf("\n\t\temail : %s",s.email);
               printf("\n\t\tfather's name : %s",s.fathername);


        }
        printf("\n\n\n\t");
        printChar('*',110);
        printf("\n\n\t");
        system("pause");
    }

    void search(FILE *fp)
    {
         char username[15];
    char password[12];



   printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

            printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter The Username: ");
    scanf("%s",&username);

    printf("\n\t\t\t\t\tPlease Enter The Password: ");
    scanf("%s",&password);

    if((strcmp(username,"robiul")==0)&&(strcmp(password,"111")==0))
    {
        printf("\n\t\tWelcome to Student's Information Management System (SIMS) of 'Scholar English Medium School'");
    }
    else
    {
        printf("\n\t\t\t\t*****!!!!! Wrong Username or Password !!!!!*****");

         return 0;
    }

    }
    }

        int tempRoll,flag,siz,i;
        Student s;
        char another='y';

        siz=sizeof(s);

        while(another=='y'||another=='Y')
        {
            printf("\n\n\tEnter Id Number of Student to search the record : ");
            scanf("%d",&tempRoll);

            rewind(fp);

            while((fread(&s,siz,1,fp))==1)
            {
                if(s.id==tempRoll)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
            {
                printf("\n\t\tNAME : %s",s.name);
                printf("\n\n\t\tADDRESS: %s",s.address);
                printf("\n\n\t\tId : %d",s.id);
                printf("\n\t\tphone : %s",s.phone);
              printf("\n\t\temail : %s",s.email);
               printf("\n\t\tfather's name : %s",s.fathername);



            }

          else
            printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

        printf("\n\n\t");
        system("pause");
        return(fp);


}
    }





