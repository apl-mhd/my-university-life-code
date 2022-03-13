#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, count =0;
char word1[] = "amar sonar bangla ami tumai valobashi";

// int stringSize = sizeof(word1);
for(n = 0; word1[n] != '\0' ; n++){

if(word1[n] == ' '){

count++;
}
}

printf("%d", count+1);

return 0;
}