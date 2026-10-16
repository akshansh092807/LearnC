#include<stdio.h> 
void printString(char arr[]);
int main(){
    char fullname[100];
    scanf("%s", fullname);
    printf("your fullname is %s", fullname);

    return 0;
}
void printString(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);

    }
    printf("\n");
} //Drawback