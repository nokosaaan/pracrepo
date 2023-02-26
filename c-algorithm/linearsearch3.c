#include<stdio.h>
//配列末尾に置換格納する番兵を使う
int linear_search(int ary[],int n,int key){
    int i=0,save;
    save=ary[n-1]; //配列末尾要素を保存
    ary[n-1]=key;  //そこに番兵を立てる
    while(ary[i] !=key) //i<nのチェック不要
        ++i;
    ary[n-1]=save;      //末尾要素がkeyと一致しているとは限らないので元に戻す
    if(i<n-1) return i;
    if(key==save) return n-1;
    return -1;
    
}

int main(void){
    int ret;
    int item[6]={34,12,55,46,68,22};
    char *name[6]={"TV","Camera","Radio","Car","PC","Book"};
    ret=linear_search(item,6,55);
    printf("data=55 ret=%d\n",ret);
    if(ret==-1) printf("登録されていない\n");
    else        printf("name=%s\n",name[ret]);

    return 0;
}