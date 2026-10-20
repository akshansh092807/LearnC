#include<stdio.h> 
#include<string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];

};
int main(){
struct student s1;
s1.roll = 11;
s1.cgpa = 9.2;
// s1.name = "Akshansh";
strcpy(s1.name, "Akshansh");
printf("Student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n", s1.cgpa);

struct student s2;
s2.roll = 19;
s2.cgpa = 9.2;
// s2.name = "Mohit";
strcpy(s2.name, "Mohit");
printf("Student name = %s\n", s2.name);
printf("student roll no = %d\n", s2.roll);
printf("student cgpa = %f\n", s2.cgpa);

struct student s3;
s3.roll = 17;
s3.cgpa = 9.2;
// s3.name = "Amit";
strcpy(s3.name, "Amit");
printf("Student name = %s\n", s3.name);
printf("student roll no = %d\n", s3.roll);
printf("student cgpa = %f\n", s3.cgpa);
return 0;
}