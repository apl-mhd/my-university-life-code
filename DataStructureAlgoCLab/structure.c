#include <stdio.h>
#include <stdlib.h>

int infoSize;

struct library{

    char title[50];
    char author[50];
    int price;
    int date;
};

 struct library array[10];

void menu(){
int menuNumber;
   printf( "1.Add book information\n");
   printf("2.Display book information. \n\n");
   printf("3.Display all books of given author. \n\n");
   printf("4.Display the highest price book information \n\n");

   scanf("%d",&menuNumber);

   if(menuNumber == 1){

         bookInfo(array);
   }
   else if(menuNumber == 2){

     displayBookInfo(array);

   }

    else if(menuNumber == 3){

    author(array);

   }

}

void bookInfo(struct library array[100]){

    int i, j;

    printf("Information size:\n");
    scanf("%d",&infoSize);

    for(i=0;i<infoSize;i++){

        printf("Title:");
        scanf("%s",&array[i].title);

        printf("author:");
        scanf("%s",&array[i].author);

          printf("Price:");
        scanf("%d",&array[i].price);

          printf("date:");
        scanf("%d",&array[i].date);

          printf("------------------------------\n\n");



    }
/*
    printf("Title:%s\n",array[0].title );
     printf("Author:%s\n",array[0].author);
      printf("Price:%d\n",array[0].price);
      printf("date:%d\n",array[0].date);
*/

  menu();
}

void displayBookInfo(struct library array[100]){

    int i, j;

    printf("displayBookInfo\n");
    for(i=0; i<infoSize; i++){

        printf("book %d:\n",i+1);
        printf("Title:%s\n",array[i].title );
     printf("Author:%s\n",array[i].author);
      printf("Price:%d\n",array[i].price);
      printf("date:%d\n",array[i].date);

    printf("------------------------------\n");

    }


      menu();
}


void author(struct library array[100]){ /*autor*/

    char nam[50];

    int flag=0, add=0,size;


    printf("author name:\n");
    //gets(nam);
    scanf("%s",nam);

        int i,j=0;

        for(i=0; i<infoSize; i++){

           // size = (strlen(array[i].name)>strlen(nam))? strlen(array[i].name:strlen(nam);
           if(strlen(array[i].author)> strlen(nam)){

                size = strlen(array[i].author);
              }

              else{
                size = strlen(nam);
              }

              flag =0;
              for(j=0; j<size; j++){


                if(array[i].author[j] != nam[j] ){
                    flag =-1;}
              }

              if(flag = 0){
                add =i;
              }
        }


printf("Author info:\n");
        printf("Title:%s\n",array[add].title );
     printf("Author:%s\n",array[add].author);
      printf("Price:%d\n",array[add].price);
      printf("date:%d\n",array[add].date);

    printf("------------------------------\n");
menu();
}





int main()
{


   // struct library array[10];

    menu();

   // bookInfo(array);


    //displayBookInfo(array);


    return 0;
}