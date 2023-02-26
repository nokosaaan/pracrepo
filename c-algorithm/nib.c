#include<stdio.h>

//ary[0]~ary[n-1]の中からkeyを探して添え字を返す
//見つからない時は-1を返す
int bin_search(int ary[],int n,int key){
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(key==ary[mid]) return mid; //見つかれば添え字位置を返す
        if(key<ary[mid])    //この条件なら、左半分を探索
            right=mid-1;
        else left=mid+1;    //それ以外は右半分を探索
    }
    return -1;  //whileが終わるまでに見つからなければ失敗、-1を返す
}

int main(void){
    int data[11]={10,15,20,25,30,35,40,45,50,55,60};
    int ky;
    for(ky=5;ky<=65;ky+=5)
        printf("data=%d ret=%d\n",ky,bin_search(data,11,ky));
    return 0;
}