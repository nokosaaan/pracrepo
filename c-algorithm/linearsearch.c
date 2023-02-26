#include<stdio.h>

//ary[0]~ary[n-1]の中からkeyを探して添え字を返す
//見つからない時は-1を返す

int linear_search(int ary[],int n,int key){
    int i;
    for(i=0;i<n;i++)
        if(ary[i]==key) return i;
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