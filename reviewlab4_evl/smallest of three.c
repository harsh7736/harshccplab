

#include<stdio.h>
 int main(){
     float a,b,c;
     printf("enter the value of three numbers:");
     scanf("%f%f%f",&a,&b,&c);
     if(a<b&&a<c){
         printf("\nthe smallest number is :%.2f",a);
     }
      else if(a>b&&c>b){
         printf("\nthe smallest number is :%.2f",b);
     }
     else {printf("the smallest number is :%.2f",c);
         
     }
     return 0;
 }