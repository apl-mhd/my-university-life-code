#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number[100], i, n, pos, insert;

   printf("Array Size\n");

   scanf("%d",&n); //array size

   for(i=0; i<n; i++) //insert into array
   scanf("%d", &number[i]);



   printf("Enter element:\n");

  scanf("%d", &insert);


   for(i=0; i<n; i++){

    if( number[i]  > insert)

        break;

   }

     pos=i;

     printf("%d\n", pos);

     for(i=n;  i>pos; i-- ) //right shift

        number[i] = number[i-1];

        number[pos] = insert;


   printf("After insert: \n");

    for(i=0; i<=n; i++ )


     printf(" %d ", number[i]);

    return 0;
}