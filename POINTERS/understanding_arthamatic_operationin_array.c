// int arr[10];
#include<stdio.h>
int main(){
      int a[5]={1,2,3,4,5};
      int *ptr;
      ptr=a; //{1,2,3,4,5};
      printf("the index of 3 : %d\n",a[3]);
    //   print address
    printf("the adderess of index 0  : %d\n",&a[0]);
    printf("the adderess of index 0  : %d\n",a+0);
    
    printf("the adderess of index 1  : %d\n",&a[1]);
    printf("the adderess of index 1  : %d\n",a+1);  
    // a=0+6422288
    // a=6422288
    printf("the adderess of index 2  : %d\n",&a[2]);
    printf("the adderess of index 2  : %d\n",a+2);
    printf("the adderess of index 3  : %d\n",&a[3]);
    printf("the adderess of index 4  : %d\n",&a[4]);

    printf("\n");
    printf("the value of index 0  : %d\n",*(&a[0]));
    int *d;
    d=ptr+6; // 6422276 - 8 = 6422268
    printf("the add of ptr  : %d\n",d);
    
    printf("the add of ptr  : %d\n",*d);

    // acessing data using pointer
    printf("the value  of index 0  : %d\n",*(&ptr[0]));
    printf("the value  of index 0  : %d\n",ptr[0]);
    printf("the value  of index 0  : %d\n",*(ptr));
    printf("\n");
    printf("the value  of index  1 : %d\n",*(&ptr[1]));
    printf("the value  of index  1  : %d\n",ptr[1]);
    printf("the value  of index  1 : %d\n",*(ptr+1));
return 0;
}                                                                                
