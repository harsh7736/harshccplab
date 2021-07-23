

#include <stdio.h>
int main(){
    int num,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    for(int i=1;num>0;num--,i=i+2){
        sum= sum+(i*i);
    }
    printf("The required sum is = %d",sum);
return 0;
}