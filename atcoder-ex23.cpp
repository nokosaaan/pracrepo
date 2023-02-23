#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    map<int,int> p;
    for(int j=0;j<N;j++){
        if(p.count(a[j])) p[a[j]]++;
        else p[a[j]]=1;
    }
    
    int num=0,max=0;
    for(int j=0;j<N;j++){
        if(p[a[j]]>max){
            max=p[a[j]];
            num=j;
        }
    }
    cout << a[num] << " " << max << endl;
    
    

}
/*
感想:二重for文を使うとO(N^2)の計算量となり、REになった。
    そのためpairは扱いにくかった。mapで.count()が使える
    ことを覚えておくと有利に働く。
*/