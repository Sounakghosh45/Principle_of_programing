#include <stdio.h>

int main() {
    struct distance {
        int foot;
        int ins;
    }c1,c2,c3;
    struct complex ;
    printf("Enter 1st distance foot:\n");
    scanf("%d",&c1.foot);
    printf("Enter 1st distance inches:\n");
    scanf("%d",&c1.ins);
    printf("Enter 2nd distance foot:\n");
    scanf("%d",&c2.foot);
    printf("Enter 2nd distance inches:\n");
    scanf("%d",&c2.ins);

    c3.foot=c1.foot+c2.foot;
    c3.ins=c1.ins+c2.ins;


    if(c3.ins>=12){
        c3.ins=12-c3.ins;
        c3.foot++;
    }

    printf("total foot:%d total inches:%d ",c3.foot,c3.ins);

}

