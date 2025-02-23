// Write a program to input n numbers on command line argument and calculate maximum of them.

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[] ){
    printf("Number of arguments : %d\n",argc-1);
    int max = INT_MIN;
    for(int i=1;i<argc;i++){
        if (max<atoi(argv[i])){
            max = atoi(argv[i]);
        }
    }

    printf("Maximum Number is %d",max);
    return 0;
}
