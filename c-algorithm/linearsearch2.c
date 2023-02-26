#include<stdio.h>
//番兵法で実現
int linear_search(int ary[],int n,int key){
    int i=0;
    ary[n]=key;
    while(ary[i] !=key)
        ++i;
    if(i<n) return i;
    else return -1;
    
}

int main(void){
    int ret;
    int item[7]={34,12,55,46,68,22};
    char *name[6]={"TV","Camera","Radio","Car","PC","Book"};
    ret=linear_search(item,6,55);
    printf("data=55 ret=%d\n",ret);
    if(ret==-1) printf("登録されていない\n");
    else        printf("name=%s\n",name[ret]);

    return 0;
}