#include<stdio.h>

int main(){

int aa, b, sum;
char ch , a;
FILE *fInput;
FILE *fOutput;

fInput = fopen("input.txt", "r");fputc(ch, fOutput);
fOutput = fopen("output.txt","w");

//a = 'a' -32;
//printf("%d\n", a);



while((ch = fgetc(fInput)) != EOF ){

        if(ch != ' '){


        ch= ch - 32;
        //printf(" %c",  ch );
    fputc(ch, fOutput);
        }
        else
            fputc(' ', fOutput);;




}



fclose(fInput);
fclose(fOutput);




return 0;

}