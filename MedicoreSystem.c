#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 7D");

    // Initialize char for printing
    // loading bar
    char a = 100, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t"
            "CodingARC Internatinal HOSPITAL...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    //for(int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    //for (int i = 0; i < 26; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(500);
    }
//}

// Driver Code



menu(void){

   loadingBar();
   system("cls");
    char medi_list;
    int choice;
    //patient_reg();
   // administrator();



    printf("\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*       -----------------------------           *\n");
    printf("\t\t*          HOSPITAL MANEGMENT SYSTEM            *\n");
    printf("\t\t*       -----------------------------           *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n");
    printf("\t\t\                                                \n");
    printf("\t\t**********   OUTPATIENT DEPARTMENT     **********\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*              (1)Patient Registration          *\n");
    printf("\t\t*              (2)Doctor                        *\n");
    printf("\t\t*              (3)Pharmacy                      *\n");
    printf("\t\t*              (4)Administration                *\n");
    printf("\t\t*              (5)Exit                          *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n");
    printf("\t\t*************************************************\n");


    printf("\t\tSELECT YOUR REQUIRMENT : ");   //ENTER CHOICE FOR MENU
    fflush(stdin);
    choice=getche();
    //scanf("%d",&choice);


    switch(choice){

        case '1':
               patient_reg();
                break;
        case '2':
                doc();
                break;
        case '3':
                parmarcy();
                break;
        case '4':
               administrator();
                break;
        case '5':
                administrator();
                break;
        case '0':
                exit(1);


}





      /*if(choice==1){
        patient_reg();  //Calling the patient registration
          }
      else if(choice==2)
        {
          system("cls");

           doc();

    }
    else if(choice==3) {
        parmarcy();

    }else if(choice==4){
       administrator();
    }

    else{
            system("cls");
            printf("\n\n\t\t *****THANK YOU*****");
            printf("\n\n\t\t *****Powered By CodingArc****");
            exit(0);




}*/







}

int main(){
menu();



}

patient_reg()
{
    int reg;


    char name[500];
    char Lname[500];
    int rno =2000;
    char age[4];
    char gender[20];
    int old_rno =1000;
    char tp[10];
    char Address[100];
    int repeat=1;
    int calroomno;
    int rno1;
     system("cls");


     char uname1[20];
     char pass1[20];

    printf("\t\tEnter your user name :");
    scanf("%s",&uname1);

    printf("\t\tEnter Your Password :");
    scanf("%s",&pass1);

        if(strcmp(uname1,"user")==0 && strcmp(pass1,"123")==0){

               system("cls");


    printf("\t Patient Registration \n ");
    printf("\t--------------------------\n");
    printf("\t\t 1.YES\n\n");
    printf("\t\t 2.NO\n\n");
    printf("Enter your choice: ");
    scanf("%d",&reg);
    if(reg==1)
    {

 	system("cls");
 	char ans;
    FILE*ek;//file pointer
    ek=fopen("Record1.dat","a");//open file in write mode
    printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
    while(repeat==1)
    {    system("cls");
         printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
            rno=rno+1;

            printf("\n\t\t\tFirst Name:");
            scanf("%s",&name);
            printf("\n\t\t\tLast Name Name:");
            scanf("%s",&Lname);
            printf("\n\t\t\t  Age: ");
            scanf("%s",&age);
            printf("\n\t\t\t Gender: ");
            scanf("%s",&gender);
            printf("\n\t\t\tAddress: ");
            scanf("%s",&Address);
            printf("\n\t\t\tFirst Telephone No: ");
            scanf("%s",&tp);

            time_t t = time(NULL);
            struct tm tm = *localtime(&t);

            fprintf(ek,"%d   \t%s \t%s \t%s \t%s \t%s \t%s  %d-%02d-%02d \n",rno,name,Lname, age, gender, Address, tp , tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
            system("cls");
            printf("\n\n\t\t\t.... Information Record Successful... \n\n");

            printf("\t\tAnother Patient Registration \n");
            printf("\t\t1.YES\n");
            printf("\t\t2.NO\n");
            printf("Enter...");
            scanf("%d",&repeat);
}
    }

    else{
            system("cls");
 	char ans;
    FILE*ek;//file pointer
    ek=fopen("Record2.dat","a");//open file in write mode
    printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
    while(repeat==1)
    {    system("cls");
         printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
            rno=rno+1;

            printf("\n\t\t\tEnter your registration number:");
            scanf("%s",&old_rno);
            printf("\n\t\t\tFirst Name:");
            scanf("%s",&name);
            printf("\n\t\t\tLast Name Name:");
            scanf("%s",&Lname);
            printf("\n\t\t\tFirst Telephone No: ");
            scanf("%s",&tp);

            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            //printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

            fprintf(ek,"%d   \t%s \t%s \t%s    %d-%02d-%02d %02d:%02d:%02d\n" ,old_rno,name,Lname,tp, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
            system("cls");
            printf("\n\n\t\t\t.... Information Record Successful... \n\n");

            printf("\t\tAnother Patient Registration \n");
            printf("\t\t1.YES\n");
            printf("\t\t2.NO\n");
            printf("Enter...");
            scanf("%d",&repeat);

    }

   fclose(ek);//ek file is closed

    }

} else{
    patient_reg();


}

        }


doc(){
    system("cls");
      FILE*f;
      FILE*k;
      f=fopen("medicine.dat","w");
      k=fopen("ädmit.dat","w");


     char regNo[20];
     char medi1[1000];
     int next=1;

     char uname1[20];
     char pass1[20];
     int admit;
     char hastoadmit[200];
      printf("\n\t\t\t Mahinda Rajapaksha International HOSPITAL\n");
      printf("\t\t    ************************************\n");

    printf("\t\tEnter your user name :");
    scanf("%s",&uname1);

    printf("\t\tEnter Your Password :");
    scanf("%s",&pass1);

        if(strcmp(uname1,"user")==0 && strcmp(pass1,"123")==0){
        system("cls");
        printf("\n\t\tLogging Successfully\n");
        printf("\n\t\t____________________");

                printf("\n\t 1. Patient has to admit?");
                printf("\n\t 2. Refer to the pharmacy\n");
                printf("\tSelect :");




                scanf("%d" , &admit);

                switch(admit){

            case 1:
                system("cls");
                printf("please enter the patien regNo: ");
                scanf("%s",&regNo);
                printf("You has to admit");

                fprintf(k,"%s ||  has to admit",regNo);
                fclose(k);
                break;


                case 2:
                system("cls");
                printf("please enter the patien regNo111111111111: ");
                scanf("%s",&regNo);
                printf("Enter a patient medicine:");
                scanf("%s",&medi1);
                fprintf(f,"%s || %s",regNo,medi1);
                break;

                system("cls");
                printf("\n\n\t\t\t.... Information Record Successful... \n\n");

                }


                printf("\n\t\tAnother Patient\n");
                printf("\t\t1.YES\n");
                printf("\t\t2.NO\n");
                printf("Enter...");
                scanf("%d",&next);

                if(next==1){




                }


        }

else{
        system("cls");

       printf("\tLogin Fail\n");
       system("cls");
       parmarcy();


    }
     fclose(f);

        }


parmarcy(){
            system("cls");
            char regNo[10];
            char medi1[1000];
            int med=1;
            FILE*e;
            e=fopen("medicine.dat","r");


            system("cls");
            printf("\n\tenter reg no:");
            scanf("%s",&regNo);
            system("cls");
            fflush(stdin);



        while(fscanf(e,"%s %s \n",&regNo,&medi1)!=EOF);
	{

                 printf("\n\t\tRegistration Number:%s\t",regNo);
                 printf("\tMedicine:%s\t\n",medi1);


	}

            printf("\n\t\tAnother Patient\n");
            printf("\t\t1.YES\n");
            printf("\t\t2.NO\n");
            printf("Enter...");
            scanf("%d",&med);




           if (med==1){
                system("cls");
                parmarcy();


           }
           else{
               system("cls");
                main();

            }







               fclose(e);

        }


    administrator(){



    char rno[100];

    char name[500];
    char Lname[500];

    char age[4];
    char gender[20];
    int old_rno =1000;
    char tp[100];
    char Address[100];

int Employee_ID;
int number_of_days_worked;
int OT_hours;
float Over_time_pay;
float Full_salary;
int mainn;

int number_of_special_operations;

float Special_pay;
int salary_type;
int anot_attempt;
FILE*ck;
ck=fopen("Record1.dat","r");


    char uname1[20];
    char pass1[20];


     system("cls");
   printf("\tEnter your user name :");
   scanf("%s",&uname1);

   printf("\tEnter Your Password :");
   scanf("%s",&pass1);

    if(strcmp(uname1,"user")==0 && strcmp(pass1,"123")==0){
        system("cls");
        printf("\n\t\tLogging Successfully\n");


    FILE*jk;//file pointer
    jk=fopen("Salary.dat","a");//open file in write mode

    system("cls");


    int rgl;

    printf("\n1.Registration List: ");
    printf("\n2.Salary: ");
    scanf("%d" ,&rgl);

    system("cls");
  fflush(stdin);
    if(rgl==1){

            loadingBar();
            system("cls");


            char line[100];
            while(fgets(line,sizeof(line),ck)){

                printf("%s",line);
            }

            printf("\n\nIf you want to back\n");
            printf("\t\t1. Yes\n");
            printf("\t\t2. No");
            scanf("%d",&mainn);
            if(mainn==1){
                system("cls");
                main();
            }
                else{
                    exit(1);
                }









    }

else{

printf("\n____________________WELCOME TO THE SALARY SECTION____________________\n");

printf("\nEnter the salary type[1 For Staff | 2 For Doctor | 3 For Admin]: ");
scanf("%d", &salary_type);


if (salary_type==1){

    printf("\nInput Staff ID: ");
    scanf("%d", &Employee_ID);

    printf("\nInput Number of days worked: ");
    scanf("%d", &number_of_days_worked);

    printf("\nInput Overtime hours: ");
    scanf("%d", &OT_hours);

        //calculation

    Over_time_pay=OT_hours*200.00;     //overtime rate = 200.00
    Full_salary=(number_of_days_worked*1000.00)+Over_time_pay; //Basic salary per day = 1000.00

    printf("\t\n____ staff salary____");
    printf("\t\nYour staff id is: %d", Employee_ID);
    printf("\t\nYour Overtime pay: LKR.%.2f" , Over_time_pay);
    printf("\t\nYour Full salary: LKR.%.2f" , Full_salary);

}

else if(salary_type==2){

    printf("\nInput Doctor ID: ");
    scanf("%d", &Employee_ID);

    printf("\nInput Number of days worked: ");
    scanf("%d", &number_of_days_worked);

    printf("\nInput Number of special Operations: ");
    scanf("%d", &number_of_special_operations);

    Special_pay= number_of_special_operations*5000;     //special Operations pay = 5000.00
    Full_salary=(number_of_days_worked*4000.00)+ Special_pay; //Basic salary per day = 4000.00


    printf("\t\n____ Doctor salary____");
    printf("\t\nYour staff id is:%d" , Employee_ID);
    printf("\t\nYour special pay:%.2f" , Special_pay);
    printf("\t\nYour Full salary:%.2f" , Full_salary);

}

else{
        //administrator salary

    printf("\nInput admin ID: ");
    scanf("%d", &Employee_ID);

    printf("\nInput Number of days worked: ");
    scanf("%d", &number_of_days_worked);

    Full_salary=(number_of_days_worked*3000.00)+Over_time_pay; //Basic salary per day = 3000.00

    printf("\t\n____ Admin salary____");
    printf("\t\nYour Admin id is:%d" ,Employee_ID);
    printf("\t\nYour Full salary:%.2f" ,Full_salary);
}
    printf("\n\n\n\tDo you want to Add another record: ");
    printf("\n\tYES[1]: ");
    printf("\tNO[2]: \n");
    printf("\tEnter your choise: ");

    fprintf(jk,"\t%d %\t.2f %\t.2f %\t.2f \n",Employee_ID,Special_pay,Over_time_pay,Full_salary);
    scanf("%d",&anot_attempt);

    system("cls");

if(anot_attempt==1){
    administrator();
}

else{
    exit(0);
}


    }
    }
else{

      administrator();


    }
return 0;

fclose(ck);
}













