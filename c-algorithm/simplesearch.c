#include<stdio.h>
#include<string.h>

int find(char text[],char key[]){
    int pos,t,k,end;
    if(key[0]=='\0') return -1;
    end=(int)(strlen(text)-strlen(key));
    for(pos=0;pos<=end;pos++){
        t=pos;
        k=0;
        while(text[t]==key[k] && key[k]){
            t++;
            k++;
        }//key[k]がナル文字(終端)の場合、ループから抜ける
        if(key[k]=='\0') return pos;
    }
    return -1;
}

int main(void){
    char s1[]="abcdefghij";
    char s2[]="def";
    printf("text=%s\n",s1);
    printf("key=%s\n",s2);
    printf("pos=%d\n",find(s1,s2)); //一致した文字位置を表示、なければ-1を表示

    return 0;
}