#include<stdio.h>
int main(){
    int p[] = {10,20,30,40,50};
    printf("Value at position 3 of the array is %d\n", p[3]);
    //printing adress
    printf("The address of first element of the array is %d \n", &p[0]);
    printf("The address of first element of the array is %d \n", p+0);
    printf("\n");
    printf("The address of second element of the array is %d \n", &p[1]);
    printf("The address of second element of the array is %d \n", p + 1);
    printf("\n");
    printf("The address of third element of the array is %d \n", &p[2]);
    printf("The address of third element of the array is %d \n", p + 2);
    printf("\n");
    //p++; show erroe becouse we not change direct in constant term if we change then maoke pointer
    // int *pr;
    // pr = p;
    // pr++; we can do it
    // printf("%d\n",pr);
    printf("The value at address of first element of the array is %d \n", *(&p[0]));
    printf("The value at address of first element of the array is %d \n", p[0]);
    printf("The value at address of first element of the array is %d \n", *(p));
    printf("\n");
    printf("The value at address of second element of the array is %d \n", *(&p[1]));
    printf("The value at address of second element of the array is %d \n", p[1]);
    printf("The value at address of second element of the array is %d \n", *(p + 1));
    printf("\n");
    printf("The value at address of second element of the array is %d \n", *(&p[2]));
    printf("The value at address of second element of the array is %d \n", p[2]);
    printf("The value at address of second element of the array is %d \n", *(p + 2));

return 0;
}