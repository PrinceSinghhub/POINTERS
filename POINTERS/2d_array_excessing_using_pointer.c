#include<stdio.h>
int main(){
    int arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    int (*ptr)[5] = arr;
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("the elemeent [%d][%d] : %d\n",i,j,*(*(ptr+i)+j));
        }
    }
    
return 0;
}