#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX_SIZE 100

struct Activity{
    int id, start, finish;

} activities[MAX_SIZE] ;

bool cmp(struct Activity a1, struct Activity a2){

    return a1.finish < a2.finish;
}


using namespace std;

int activitySelection(int m, int n, int last){

    if(m==n)
        return 0;
    if(activities[m].start >= last){

            cout<<"Activity "<<m+1<<" is selected\n";

        last = activities[m].finish;
        return 1 + activitySelection(m+1, n, last);


    }
    else
        return activitySelection(m+1, n, last);

}


int main()
{

    freopen("input.txt", "r", stdin);
    int n;

    scanf("%d", &n);

    for(int i = 0; i<n; i++){

        scanf("%d%d%d", &activities[i].id, &activities[i].start, &activities[i].finish);
    }

    sort(activities, activities+n,cmp);


    cout<<activitySelection(0,9,-1)<<endl;


    for(int i=0; i<n; i++){

    printf("%d %d %d\n", activities[i].id, activities[i].start, activities[i].finish);


    }



    return 0;
}