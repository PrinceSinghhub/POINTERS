#include<stdio.h>
int sum(int a,int b){
    return a+b;
    //if we want to change the value of a and b
    a=600;
    b=500;
    //value chnge nhi hogi becouse call by value me deta function ki bahr si copy hoki jata hai
}
int main(){
    int a=10,b=20;
    printf("the value of a and b is %d and %d\n",a,b);
    printf("the addition of a and b is = %d\n",sum(a,b));
    printf("the value of a and b is afet function call %d and %d\n",a,b);
return 0;
} 