#include<stdio.h>
#define ASIZ 9
#define BSIZ 6

//a[0]~a[asize-1]とb[0]~b[bsize-1]を併合してc[]に入れる
void merge(int a[],int asize,int b[],int bsize,int c[]){
    int na=0,nb=0,nc=0;
    while(na<asize && nb<bsize){
        if(a[na]<=b[nb]) c[nc++]=a[na++];
        else             c[nc++]=b[nb++];
    }
    while(na<asize) {c[nc++]=a[na++];}
    while(nb<bsize) {c[na++]=b[nb++];}
}

int main(void){
    int aa[ASIZ]={10,20,25,35,40,55,70,75,80};
    int bb[BSIZ]={15,30,45,50,60,65};
    int cc[ASIZ+BSIZ];
    int i;

    merge(aa,ASIZ,bb,BSIZ,cc);
    for(i=0;i<ASIZ+BSIZ;i++)
        printf("%d ",cc[i]);
    putchar('\n');
    return 0;
}