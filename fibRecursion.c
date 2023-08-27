#include<stdio.h>
void fib(int);
void main()
{   int n;
    printf("Hello World\n");
    printf("Enter the number\n");


    scanf("%d" , & n);
        printf("\t%d\t%d" ,0,1);

    fib(n);
    
}
//Function of fib
 fib(int num){
    
    if(num>2){
   static  int a=0,b=1,c,i;

        c=a+b;
        a=b;
        b=c;
    printf("\t%d" , c);

      fib(num-1);
    }
    else
    return;
    
}