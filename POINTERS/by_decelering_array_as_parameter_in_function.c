#include<stdio.h>
int add(int pr[3]);
int main(){
    int pr[3] = {1,2,3};
    printf("the value 0 : %d\n",pr[0]);
    int r=add(pr);
    printf("the addition : %d\n",r);
    printf("the value 0 : %d\n",pr[0]);
return 0;
}
int add(int pr[3]){
    int sum = 0;
    for(int i = 0; i<3;i++){
        sum = sum+pr[i];
    }
    // if change the vale of array then reflected in main function
    pr[0]=362;
    return sum;

}