#include<stdio.h>
#define N 11

void heap_sort(int d[],int end){
    int oya,ko,wk;
    //初期ヒープを作る。対象データはd[1]~d[end]
    //親の方が子より大きい状況をつくる
    for(int i=end/2;i>=1;i--){
        oya=i;
        ko=oya*2;
        while(ko<=end){
            if(ko<end && d[ko]<d[ko+1])
                ++ko;                   //子同士の値比較
            if(d[oya]>=d[ko]) break;    //既に親が大きい値なら交換しなくていいのでwhileループを抜ける
            wk=d[oya]; d[oya]=d[ko]; d[ko]=wk;
            oya=ko;
            ko=oya*2;
        }
    }

    //データを外していく。整列が進むにつれてendが短くなるのに注意
    while(end>1){
        wk=d[1]; d[1]=d[end]; d[end]=wk; //根と末尾を交換
        --end;                          //末尾を切り離す

        oya=1;
        ko=oya*2;
        while(ko<=end){
            if(ko<end && d[ko] <d[ko+1])
                ++ko;                   //子同士の値比較
            if(d[oya]>=d[ko]) break;    //既に親が大きい値なら交換しなくていいのでwhileループを抜ける
            wk=d[oya]; d[oya]=d[ko]; d[ko]=wk;
            oya=ko;
            ko=oya*2;
        }
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