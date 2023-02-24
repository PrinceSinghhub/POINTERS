#include<stdio.h>
int main(){
      printf("Lets understand the pointer\n");
      int a=100;
    // print value of a noraml
    printf("the value of a is = %d\n",a);
    //   decleration of pointer
       int *pr;
    //    now put the address of a in pr
       pr=&a;
    // excessing value by using pointer
    printf("the value of a is using pointer = %d\n",*pr);
    
    return 0;
}