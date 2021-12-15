#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fileNumber, *fileOperator, *fileWrite;

    fileNumber = fopen("number.txt", "r");
    fileOperator = fopen("operator.txt", "r");

    int n, m,i, count=0;
    char ch ;
    char operat[10];
    int number[10];
    while((ch = fgetc(fileOperator)) !=EOF){

        operat[count] = ch;
        // printf("%c",ch);
        count++;

    }

    count =0;
     while(fscanf(fileNumber,"%d", &m) !=EOF){

        number[count]= m;
       // printf(" %d ", m);
        count++;

    }

 /*   for(i =0 ; i<9;i+=2)
        printf(" %d %d", number[i], number[i+1]);
*/

fclose(fileOperator);
fclose(fileNumber);

fileWrite = fopen("output.txt", "w");

    for(i =0; i<9; i++){

        if(operat[i] == '+')
            fprintf(fileWrite, "%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i]+number[i+1]);

            //printf("%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i]+number[i+1]);

        if(operat[i] == '-')
           fprintf(fileWrite, "%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i]- number[i+1]);

        if(operat[i] == '*')
            fprintf(fileWrite, "%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i] * number[i+1]);

        if(operat[i] == '/')
            fprintf(fileWrite, "%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i] /number[i+1]);

          if(operat[i] == '%')
            fprintf(fileWrite, "%d %c %d  = %d\n", number[i], operat[i], number[i+1],  number[i]%number[i+1]);
    }


    return 0;
}