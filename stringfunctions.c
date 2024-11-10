#include<stdio.h>
#include<string.h>
void main(){
    char arr[15]={'c','i','t','y',' ','c','o','l','l','e','g','e','\0'};
    int length=strlen(arr);
    printf("Total length = %d\n",length);
    char str1[10]="vidya";
    char str2[13]="tejashwini";
    strcat(str1,str2);
    printf("%s",str1);

}

