#include <QCoreApplication>
#include <cstdio>

int main(int argc, char *argv[])
{
    int i, n;

    char name[20], ch;

    for(i = 0; name[i-1] != '\n'; i++ ){

            scanf("%c", &ch);
            name[i] = ch;

    }

    name[i-1] = '\0';


    printf("%s \n", name);



    return 0;
}