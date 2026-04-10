#include<stdio.h>
int fact (int n);

int main(){
printf("Factorial is : %d", fact(4));
return 0;
}
int fact (int n){
    printf("Calculate fact of n : %d\n", n);
int factNm1 = fact(n-1);
int factN = factNm1 * n;
return factN;
} //base case in recursion