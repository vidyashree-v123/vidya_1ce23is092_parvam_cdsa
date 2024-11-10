#include<stdio.h>
struct student{
    int rollNo; char name[50]; int semesterNumber;
    float fees; char course[50];
};
struct student s;
void main(){
    printf("%d\t\t",s.rollNo);
    printf("%f",s.fees);
    s.rollNo=1001; s.fees=52000.00f;
    printf("\n%d\t\t",s.rollNo);
    printf("%f",s.fees);

}