 #include<stdio.h>
 void main(){
 char name[12]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
 int count=0;
 for(int j=0;name[j]!='\0';j++){
    if(name[j]=='a'|| name[j]=='e'|| name[j]=='i'|| name[j]=='o'|| name[j]=='u')
    {printf("%c\t\t",name[j]);
    count++;
    }
  }
 printf("total # of vowels=%d",count);
 }