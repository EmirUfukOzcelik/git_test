#include <stdio.h>

int add(int a, int b){

    return a + b;
}

int main (void ){

    int result = add(3,6);

    printf("Your add function is running and also your answer is %d\n", result );



    return 0;
}