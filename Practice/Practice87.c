#include<stdio.h> 
void square(int n);
int main(){
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    return 0;
}
void square(int n){ // call by value
    n = n * n;
    printf("Square = %d\n", n);
}