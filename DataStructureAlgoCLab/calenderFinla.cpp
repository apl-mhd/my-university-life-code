#include<stdio.h>
#include <stdlib.h>


int daysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

char *daysNameArray[]={"Sunday","Sat","Monday", "Tuesday", "Wednesday", "thusDat","Friday"};


void reminderF(char reminder[100]){

        printf("\nYou Have a reminder :%s\n\n", reminder);


}

int reminderDay(int day, int month, int year){

   int totalDay;


   month = (month + 9) % 12;
   year = year - month / 10;

   totalDay = 365*year + year/4 - year/100 + year/400 + (month*306 +5)/10 + (day-1);

   return totalDay;

}


void leapyearCheck(int year){ //cheack leap year or not

    if((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0)){


           daysInmonth[1] = 29;
    }

}


void printCelender(int year, int month, int userDay){

        int firstDayArray[12], firstDay, i, d1, d2, d3, day, daySpace, dayName;

        d1 = (year - 1) / 4.0;
        d2 = (year - 1) / 100.0;
        d3 = (year - 1) / 400.0;


        firstDay = (year + d1 - d2 + d3) % 7;
        firstDayArray[0] = firstDay;

        for(i = 1; i<12; i++){

                firstDayArray[i] =(firstDayArray[i-1] + daysInmonth[i-1]) % 7;


        }



        printf("Sun  Mon  Tue  Wed  Thus  Fri  Sat\n");



            for(daySpace = 1; daySpace <  firstDayArray[month-1] * 5; daySpace++ ){

                printf(" ");


              }



        for( day = 1; day <= daysInmonth[month-1]; day++){

            if(day == userDay)
                printf(" [%2d] ", day);

            else
                printf(" %2d ", day);


            if((day + firstDayArray[month-1]) % 7 > 0){

                printf(" ");

            }

            else{

                printf("\n");

            }

        }
        printf("\n");

        dayName = ( firstDayArray[month-1] + userDay ) % 7;

        printf("\n%d-%d-%d is %s \n\n", userDay, month, year, daysNameArray[dayName]);

}//end caledner function



int main(){


    int year, month, userDay, reminDay;

    int rDay, rMonth, rYear; //remeinder day month year

    char reminder[100];

    printf("Please Enter Date Month Year like:  1 1 2016 \n");
    scanf("%d%d%d",&userDay, &month, &year);


    printf("\nNow Enter Reminder Date, Month, Year \n");

    scanf("%d%d%d",&rDay, &rMonth, &rYear);

    getchar();


    printf("\nReminder Text\n");



    gets(reminder);



   reminDay =   reminderDay(rDay, rMonth, rYear) - reminderDay( userDay, month, year) ;


    leapyearCheck(year);
    printf("\n\n");

    printCelender(year, month,userDay);

    reminderF(reminder);

    printf("\nYou have %d days left\n\n", abs(reminDay));



    return 0;
}