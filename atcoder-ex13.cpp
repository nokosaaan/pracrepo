#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sum=0;
    vector<int> vec(N);
    
        for(int j=0; j < vec.size(); j++){
            cin >> vec.at(j);
            sum += vec.at(j);
        }
        int t = sum/N;
        for(int i=0; i < vec.size(); i++){
            if(vec.at(i) <= t){
            cout << t-vec.at(i) << endl;
        }
        else if (vec.at(i) > t){
            cout << vec.at(i)-t << endl;
        }
        }
        
    
    
}

/*感想：普通、配列のサイズはvec(ここにint型の文字or数字)で定義
        できることを知っていないと厳しいかも。二重for文かfor二回
        使うかで悩みました。最終的にsum先に出した方がいいよねって
        話なのでfor分ける結論には誰でもたどり着くと思うよ。平均との
        差は絶対値で表せ(意訳)とのことなので、配列の各要素と平均
        の大小はifで処理するというのがすっと出てくるとあとは簡単。*/