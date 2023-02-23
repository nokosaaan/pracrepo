#include<bits/stdc++.h>
using namespace std;



int main(){
    int N;
    cin >> N;
    vector<pair<long long,long long>> A(N);
    for(long long i=0;i<N;i++){
        cin >> A[i].first >> A[i].second;
    }
    //putchar('\n');
    for(long long j=0;j<N;j++){
        long long num=0;
        long long min=A[j].second;
        for(long long k=j;k<N;k++){
            if(A[k].second<min){
                min=A[k].second;
                num=k;
            }
        }
        if(num!=0){
            /*
            long long tmp1=A[j].first,tmp2=A[j].second;
            A[j].first=A[num].first;
            A[j].second=A[num].second;
            A[num].first=tmp1;
            A[num].second=tmp2;
            */
            pair<long long,long long> tmp=A[j];
            A[j]=A[num];
            A[num]=tmp;
        }
    }
    for(long long i=0;i<N;i++){
        cout << A[i].first << " " << A[i].second << endl;
    }
}

/*
感想:31行目から33行目は上でコメントアウトしている部分を
    より簡潔に示したものである。pairの一個目の要素と二個目の要素が
    それぞれ.firstと.secondでアクセスできることから.secondのみで
    値比較できることを利用した。添え字の扱いやすさから配列で定義
    しているが、pairで書いた方が美しくなるかもしれない。僕はその書き方
    を知らないでのこのようなコードになった。
*/