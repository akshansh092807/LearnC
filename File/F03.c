#include<stdio.h>
int main(){
        FILE *fptr;
        fptr = fopen("Test.txt", "r");
      
        char ch;
        fscanf(fptr, "%c", &ch);
        printf("character = %c\n", ch);
           fscanf(fptr, "%c", &ch);
        printf("character = %c\n", ch);
           fscanf(fptr, "%c", &ch);
        printf("character = %c\n", ch);
           fscanf(fptr, "%c", &ch);
        printf("character = %c\n", ch);
           fscanf(fptr, "%c", &ch);
        printf("character = %c\n", ch); // same for integer type data

        fclose(fptr);

    return 0;
}