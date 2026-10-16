#include<stdio.h> 
 void printAddress(int *n);

int main(){

    int n = 4;
printAddress(&n);
printf("Adress of n is : %u\n", &n);
return 0;
}
 void printAddress(int *n) {
     printf("Adress of n is : %u\n", n);
 }
//call by reference