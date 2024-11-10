#include<stdio.h>
void main(){
    
    int i=0,j=25;
    for(; i < j--; j=j-3,i++)
    {
        printf("*******");
    }
    printf("%d\n",i*j);
    puts("A simple for loop");

    for(int j=0; j<7; j++){
        printf("J=%d\t",j);
       
    }
    for(printf("Increment\t");printf("condition checking\t");printf("updation\t")){
        printf("hello");
        getchar();
    }
}