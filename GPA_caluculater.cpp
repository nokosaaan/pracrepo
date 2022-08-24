#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "科目数を入力してください:";
    cin >> n;
    cout << endl;
    vector<double> unit(n);
    for(int i=0;i<n;i++){
        //単位数は個別成績表の単位の欄をそのまま記入してください
        cout << i+1 << "個目の単位数を入力してください:";
        cin >> unit[i];
    }
    cout << endl;
    vector<double> GP(n);
    for(int j=0;j<n;j++){
        //GPの部分を記入してください、整数値でも小数でも正常に作動します。
        cout << j+1 << "個目のGPを入力してください:";
        cin >> GP[j];
    }
    double GPA=0;
    double units=0;
    for(int k=0;k<n;k++){
        GPA+=unit[k]*GP[k];
        units+=unit[k];
    }
    cout << endl;
    cout << "あなたのGPAは" << fixed << setprecision(4) << GPA/units << endl;
    
}