#include<stdio.h>
void main(){
   int i=5; int j=15;
    do{
        while(j>=5){
            j--;
        }
        i++;
    }while(i<=j);
    printf("%d",i*j);
}