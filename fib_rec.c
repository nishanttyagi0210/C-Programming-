// Online C compiler to run C program online
#include <stdio.h>
int fib(int);
void main() {
    int k ;
    // Write C code here
    printf("Hello world");

    printf("Enter a num ");
    scanf("%d" , &k);
        printf("0 \t 1\t");
    fib(k);

    
}
int fib (int n){
    if(n>2){
    int static a=0,b=1,c;
    c=a+b;
    a=b;
    b=c;
   
    printf("%d\t",c);
    //if(n>=1){return fib(n);}
    fib(n-1);
    }
    else 
    return;
    
}