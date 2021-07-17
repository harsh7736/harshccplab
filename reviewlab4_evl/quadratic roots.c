

#include<stdio.h>
#include<math.h>
int main(){
      float a,b,c,root1,root2,d,realpart,imagpart;
      printf("enter the value of a,b,c:\n"); //ax^2+bx+c
          scanf("%f%f%f",&a,&b,&c); 
        d= (b*b)- 4*a*c;
        if(d==0){       //   equal and real roots
            root1=(-b)/2*a;
            root2=(-b)/2*a;
            printf("the roots are equal and are equal to :%.2f",root1);
        }
        else if(d>0){      // roots are real but different
            root1=((-b)+sqrt(d))/2*a;
            root2=((-b)-sqrt(d))/2*a;
            
            printf("the roots are distinct and are equal to :%.2f ,%.2f",root1,root2);
        }
        else {         //roots are imaginary
            realpart=(-b)/2*a;
            imagpart=sqrt(-d)/2*a;
            printf("the roots are imaginary and are equal to:%.2f + i%.2f ,%.2f - i%.2f",realpart,imagpart,realpart,imagpart);
        }
        
      return 0;}