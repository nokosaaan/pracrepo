#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(3);
    for(int i=0; i<3; i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    cout << vec.at(2)-vec.at(0) << endl;
}

/*感想：簡単、簡単すぎて逆に警戒しちゃった。
        sort(vec.begin(),vec.end())の使い方を
        覚えるための問題。特になんもないです。*/