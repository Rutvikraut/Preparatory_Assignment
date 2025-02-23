// Write a program to calculate Fibonacci Series up to n numbers.

#include <stdio.h>

int calFibo(int n){
    if(n<=1){
        return n;
    }
    return calFibo(n-1)+calFibo(n-2);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",calFibo(i));
    }
    return 0;
}