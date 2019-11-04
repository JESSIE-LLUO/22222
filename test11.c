#include<stdio.h>

int main (void)

{
    int x,y;

    printf("Enter x:\n");

    scanf("%d",&x);

    if(x<=0){
        y = -x;
    }

    if(x>0){
        y = x;
    }

    printf("y = %d\n",y);

    return 0;
}