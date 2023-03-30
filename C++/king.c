#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct king
{
    int row,col;
    int count;
};
void show(struct king *k,int *turn)
{
    printf("\n");
    if(k->count==0)
    printf("Start :\n");
    else
    printf("Turn %d :\n",k->count);
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if((j==k->row)&&(i==k->col))
            {
                printf(" k");
                continue;
            }
            printf(" .");
        }
        printf("\n");
    }
    k->count++;
}

int main()
{
    struct king k;
    k.row=4;
    k.col=4;
    int turn=0;
    k.count=0;
    srand((unsigned)time(0));
    show(&k,&turn);
    while(1)
    {
        if((k.col>8)||(k.col<1)||(k.row>8)||(k.row<1))
        {
            break;
        }
        k.col+=rand()%3-1;
        k.row+=rand()%3-1;
    show(&k,&turn);
    }
    return 0;
}