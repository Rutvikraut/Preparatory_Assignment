// Write a program to calculate a Factorial of a number. 

#include <stdio.h>

int calcFactorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*calcFactorial(n-1);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int result = calcFactorial(n);
    printf("Factorial of %d is : %d",n,result);
    return 0;
}