#include <stdio.h>
#include <stdlib.h>

int main()
{



    char word[100];
    char wordCopy[100];

    int position, i=0, b=0, length;
    char letter;

    printf("word:\n");
    gets(word);

    printf("letter:\n");

    letter = getchar();

    printf("position\n");
    scanf("%d", &position);

    while(word[i])
        i++;

    length = i;


    //printf("%s %c %d %d\n", word, letter, position, length);

    for( i = 0; i <= length; i++){

        if(position-1 == i){

            wordCopy[i] = letter;
            b++;
            wordCopy[b+i] = word[i];

            }

        else
            wordCopy[b+i] = word[i];

    }

    printf("%s\n", wordCopy);



    return 0;
}