#include<stdio.h>

int main(){

int n, id;

char name[50];
char ch , a;
FILE *even;
FILE *odd;

even = fopen("even.txt", "w");
odd = fopen("odd.txt","w");

for(n=0; n<4; n++){
    printf("id: ");

    scanf("%d",&id);
    if(id % 2 == 0){
        fprintf(even,"%d", id);
        fprintf(even,"%s", " : ");
        printf("name: ");
        scanf("%s",&name);
        fprintf(even,"%s", name);
        fprintf(even,"%s", "\n");



    }

    else{

       fprintf(odd,"%d", id);
        fprintf(odd,"%s", " : ");
        printf("name: ");
        scanf("%s", &name);
        fprintf(odd,"%s", name);
        fprintf(odd,"%s", "\n");
    }



}


fclose(even);
fclose(odd);




return 0;

}