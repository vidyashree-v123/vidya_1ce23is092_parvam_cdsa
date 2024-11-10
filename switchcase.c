#include<stdio.h>
void main(){
    int n=50;
    switch(n%2){
        case 0:
        printf("%d is an Even number\n",n);
        break;
        case 1:
        printf("%d is an odd number\n",n);
    }
}