#include<stdio.h>
void main(){
    int i=100,j=2,c=i/2;//3.4 is double by default.in c language,fractional values are considered as//double by default.
    float f=3.4;//3.4 is taken as double,but automatically converted to float
    float t=5.4f;//5.4 must taken as a floating point value
    float o=100.00F;
    printf("%.2f",(o/j));
    int n=f;
    printf("\n%d\n",n);
    int n1=100; float f1=n1;
    printf("%f\n",f1);
}
