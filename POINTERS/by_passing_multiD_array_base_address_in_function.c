#include<stdio.h>
int func(int (*ptr)[5]);
int main(){
    int pr[2][5]={{1,2,3,4,5},
                 {10,20,30,40,50}};
    
    func(pr);
  
return 0;
}

int func(int (*ptr)[5]){

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("the elemeent [%d][%d] : %d\n",i,j,*(*(ptr+i)+j));
        }
    }
    
    return 0;
}