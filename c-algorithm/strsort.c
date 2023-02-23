#include<stdio.h>
#include<string.h>
#define N 8

void a_quick_sort(char *ss[],int top,int end){
    char *key,*wk;
    int i,j;
    key=ss[(top+end)/2];
    i=top-1;
    j=end+1;
    while(1){
        //文字列の大小は基本アルファベット順
        while(strcmp(ss[++i],key)<0) //iのインクリメントした添え字での文字列がkeyの文字列より小さいとき繰り返す
            ;
        while(strcmp(ss[--j],key)>0) //jのデクリメントした添え字での文字列がkeyの文字列より大きいとき繰り返す
            ;
        if(i>=j) break;
        wk=ss[i]; ss[i]=ss[j]; ss[j]=wk; //ポインタの交換
    }
    if(top<i-1) a_quick_sort(ss,top,i-1); //左半分をクイックソート
    if(j+1<end) a_quick_sort(ss,j+1,end); //右半分をクイックソート
}
int main(void){
    int i;
    char st[N][10]={"eee","bbb","ggg","fff","hhh","ccc","aaa","ddd"};
    char *p[N];

    for(i=0;i<N;i++)
        p[i]=st[i];
    
    a_quick_sort(p,0,N-1);
    for(i=0;i<N;i++)
        printf(" %s ",p[i]);
    putchar('\n');
    return 0;
}