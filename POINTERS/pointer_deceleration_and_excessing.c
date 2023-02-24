#include<stdio.h>
int main(){
    int i = 7;
    int *codex;
    codex=&i;
    // %u unsigmed integer
    printf("address of  i = %u\n",&i);
    printf("address of  i = %u\n",codex);
    printf("address of codex = %u\n",&codex);
    printf("value of i = %d\n",i);
    printf("value of i = %d\n",*codex);
    printf("value of i = %d\n",*(&i));
    printf("value of codex = %d\n",*(&codex));
return 0;  
}