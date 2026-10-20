#include<stdio.h>
int main(){
        FILE *fptr;
        fptr = fopen("NewTest.txt", "w"); // new file will be created
        if(fptr ==NULL) {
            printf("File doesn't exist\n");
        } else {
            fclose(fptr);
        }
        fclose(fptr);
    return 0;
}