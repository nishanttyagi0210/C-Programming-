#include<stdio.h>
void main()
{   int num;
    printf("Hello World\n");
    printf("Enter the number\n");


    scanf("%d" , & num);

    int a=0,b=1,c,i;
    printf("%d" , a);
    printf("\t%d" , b);
    for(i=2;i<num;i++){

        c=a+b;
        a=b;
        b=c;
        printf("\t%d" , c);



    }
    
}