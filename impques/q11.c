//wap using factorial
#include<stdio.h>
int fact(int n){
    int f;
    if(n==0){
        f=1;
    }
    else{
        f=n*fact(n-1);
    }    
    return f;
}
void main(){
    int n=5;
    printf("%d \n",fact(n));
}