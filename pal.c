#include<stdio.h>
void main(){
    int f=12551,x=0,y=0,a=f;
    while(f>0){
        x=f%10;
        y=y*10+x;
        f=f/10;
    }
    if(a==y)
    {
        printf("yes");
    }else{printf("no");}
}