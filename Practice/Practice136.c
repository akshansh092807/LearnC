#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu ;
typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
  coe s1;
  s1.roll = 0011;
  s1.cgpa = 9.2;
  strcpy(s1.name, "Akshansh");
  printf("Student name is %s\n", s1.name);

return 0;
}
