#include<stdio.h>
#define N 11

void heap_sort(int d[],int end){
    int oya,ko,wk,tmp;
    for(int i=end/2;i>=1;i--){
        oya=i;
        ko=oya*2;
        tmp=d[oya];
        while(ko<=end){
            if(ko<end && d[ko]<d[ko+1])
                ++ko;
            if(tmp>=d[ko]) break;
            d[oya]=d[ko];
            oya=ko;
            ko=oya*2;
        }
        d[oya]=tmp;
    }

    while(end>1){
        wk=d[1]; d[1]=d[end]; d[end]=wk;
        --end;
        oya=1;
        ko=oya*2;
        tmp=d[oya];
        while(ko<=end){
            if(ko<end && d[ko]<d[ko+1])
                ++ko;
            if(tmp>=d[ko]) break;
            d[oya]=d[ko];
            oya=ko;
            ko=oya*2;
        }
        d[oya]=tmp;
    }
}

int main(void){
    int d[N]={0,90,70,60,30,20,80,50,10,40,99};
    for(int i=1;i<N;i++)
        printf(" %d ",d[i]);
    putchar('\n');

    heap_sort(d,N-1);

    for(int i=1;i<N;i++)
        printf(" %d ",d[i]);
    putchar('\n');
    return 0;
}