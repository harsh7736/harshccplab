

#include<stdio.h>
 int main(){
     int m,n;
     printf("enter the value of m and n:\n");
     scanf("%d%d",&m,&n);
     for(;m<=n;m++){
         if(m%2==0){printf("%d\n",m);
     }
 }
 return 0;
 }