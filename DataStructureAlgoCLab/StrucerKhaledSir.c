#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct canditate{
    char name[100];
    char email[100];
    char password[20];
    char higestdegree[5];
    int yearOfPassing;
    float cgpa;
    float testmarks;
    float totalmarks;

};




int main()
{

    struct canditate index[10];

    float totalMarks[10];
    float max=999.0;
    int i, add,n=3,j;
    int flag=-1;
    char tempEmail[100] ;
    char tempPass [100];

    printf("Please student information\n");

    for(i=0; i<n;i++){

        printf("Name: ");
        //gets(index[i].name);
        scanf("%s",&index[i].name);

        printf("Email: ");
       // gets(index[i].email);
       scanf("%s",&index[i].email);

        printf("Password: ");
        //gets(index[i].password);
        scanf("%s",&index[i].password);


        printf("Higestdegree: ");
        //gets(index[i].higestdegree);
         scanf("%s",&index[i].higestdegree);


        printf("YearOfPassing:");
        scanf("%d", &index[i].yearOfPassing);

        printf("Cgpa: ");
         scanf("%f", &index[i].cgpa);
        //gets(index[0].yearOfPassing);

        printf("Testmarks: ");

        scanf("%f", &index[i].testmarks);
       // gets(index[0].testmarks);

       index[i].totalmarks = index[i].testmarks + index[i].cgpa*10;


    }



    printf("input for verify");

    printf("Email: ");

    scanf("%s", &tempEmail);

     printf("Pass: ");

    scanf("%s", &tempPass);//**




    for(i=0; i<n; i++){



     if(strcmp(index[i].email, tempEmail) == 0 && strcmp(index[i].password, tempPass) == 0 ){

            printf("success");
            flag=0;
            add = i;
            break;
        }


    }


        //printf("%d\n",add);

    if(add==1000){

        printf("\nName: %s\n",index[add].name);

        printf("Email: %s\n", index[add].email);

        printf("Password: %s\n", index[add].password);



        printf("Higestdegree: %f\n", index[add].higestdegree );


        printf("YearOfPassing: %d\n",index[add].yearOfPassing);

        printf("Cgpa:%f\n", index[add].cgpa);
        //gets(index[0].yearOfPassing);

        printf("Testmarks: %f\n", index[add].testmarks);

         printf("Testmarks: %f\n", index[add].totalmarks);


       // gets(index[0].testmarks);



    }

    else{


        printf("data not found");
    }

    printf("sorting:\n");


    for(i=0; i<n; i++){

        max = 999.0;
        for(j=0; j<n; j++){

            if(index[j].totalmarks <max){

                    max = index[j].totalmarks;
                    add=j;

                //temp = ""
            }

            index[add].totalmarks = 9999.00;

             printf("\nName: %s\n",index[add].name);

        printf("Email: %s\n", index[add].email);

        printf("Password: %s\n", index[add].password);



        printf("Higestdegree: %f\n", index[add].higestdegree );


        printf("YearOfPassing: %d\n",index[add].yearOfPassing);

        printf("Cgpa:%f\n", index[add].cgpa);
        //gets(index[0].yearOfPassing);

        printf("Testmarks: %f\n", index[add].testmarks);

         printf("Testmarks: %f\n", index[add].totalmarks);


        }

    }



    return 0;
}