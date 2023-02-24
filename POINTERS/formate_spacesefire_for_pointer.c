#include<stdio.h>
int main(){
      printf("Lets understand the pointer\n");
      int a=100;
      printf("the value of a is = %d\n",a);
    
    int *pr=&a;
    // formate spacesefire %x = hexadecimal adress
    printf("the adress of pointer = %x\n",pr);
   // formate spacesefire %p = pounter adress
    printf("the adress of a = %p\n",&a);
    // formate spacesefire %p = for adress
    printf("the  adress of a in pointerr pr is = %p\n",pr);
    // print adress of pr all p,x,& give a same resulit
    printf("the  adress of pointer to a is / adress of pr  = %p\n",&pr);
      return 0;
}