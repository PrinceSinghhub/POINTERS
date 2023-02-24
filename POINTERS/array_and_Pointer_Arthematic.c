#include<stdio.h>
int main(){
    int a = 10;
    int *pr;
    pr=&a;
    printf("%d\n",pr);
    //apply arthamtic operation ++
    // + 1 means 1 int 4 bytes add
    pr++;
    printf("%d\n",pr);
    pr--;
    printf("%d\n",pr);
    // pr+1;
    printf("%d\n",pr+1);
    // pr-1;
    printf("%d\n",pr-1);
    // total depend on co,puter arcticture
    // decelere char
    char a1='a';
    char *cr;
    cr=&a1;
    printf("char : %d\n",cr);
    //apply arthamtic operation ++
    // + 1 means 1 int 4 bytes add
    pr++;
    printf("%d\n",cr);
    pr--;
    printf("%d\n",cr);
    // pr+1;
    printf("%d\n",cr+1);
    // pr-1;
    printf("%d\n",cr-1);

return 0;
}