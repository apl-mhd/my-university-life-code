#include<stdio.h>

struct players
{
    char name[50];
    char country[50];
    int run[3];
    int wickets[3];
    int points[3];
};

void players_detials(struct players players_index[50])

{
    int i,j,points,n,r,p,w,wp,k,rsum=0,wsum=0,match;

    //int rarr[3],warr[3],total[100];

     printf("Total matches played: ");

     scanf("%d",&match);

    for(k=0; k<3; k++)
    {
        for(i=0; j<22; j++)
        {
            printf("d.Enter name of players: \n",i+1);
            scanf("%s", players_index[k].name);
            printf("Enter country of players %d: \n",i+1);
            scanf("%s", players_index[k].country);

            printf("\nMatch: %d Runs: ",k+1);

            scanf("%d",&r);

            n=r/25;

            p=1;

            // for(i=0; i<=n; i++)

            if(j=25*i)
            {
                points=5*p;
                p++;
            }
            else
                points=0;

            //}

            printf("Points made for runs: %d\n",points);

            players_index[k].run[i]=points;

            rsum+=players_index[k].run[i];

            // for(i=0; i<=3; i++)

            printf("\nMatch: %d Wickets: ",i+1);

            if(players_index[i].wickets[j] > 0)
            {
                players_index[i].points[j] += players_index[i].wickets[j]*12;
            }

            printf("\nPoints made for wickets: %d\n",wp);

            players_index[k].wickets[i]=wp;

            wsum+=players_index[k].wickets[i];

            players_index[k].points[k]=rsum+wsum;
        }



    }
    printf("\nSum of all the points of runs in 3 matches are: %d\n",rsum);
    printf("\nSum of all the points of wickets in 3 matches are: %d\n",wsum);
    printf("\nTotal points in 3 matches: %d\n",players_index[k].points[k]);

}


int main(int argc, char** argv)
{
    int i,j;
    struct players players_index[50];

    players_detials(players_index);/**********************/
   // players_details(players_index);

    //Man_of_the_Match_Series(players_index);

   int mom=0,mos=0, index;

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {

            if(players_index[i].points[j] > mom)
            {

                mom = players_index[j].points[i];

                index =j;

            }

            printf("---%d.Match-----\nMan of the Match: %s \n", i+1, players_index[index].name);
            printf(" Total Points:%d \n\n", players_index[index].points[i]);
        }
    }

    for(i=0; i<22; i++)
    {
        int total_point=0;
        for(j=0; j<3; j++)
        {
            total_point=total_point+players_index[j].points[i];

        }
        if(total_point>mos)
        {
            mos=total_point;

        }

    }
    printf("%s is MAN of the Series his total point is %d\n",players_index[i].name,mos);



    return 0;
}