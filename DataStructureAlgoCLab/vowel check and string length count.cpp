#include <stdio.h>
#include <stdlib.h>

/*vowel check and string length count*/


int main()
{
  char name[100];
  int i, vowel = 0;

  gets(name);

  printf("%s\n", name);

  for( i = 0; name[i]; i++){

    if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
        vowel++;
        }

  }

  printf("Length = %d vowel=%d\n", i,vowel);





    return 0;
}