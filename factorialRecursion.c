// Online C compiler to run C program online
#include <stdio.h>

int fact(int num);



int main() { 
    int num;
    // Write C code here
    printf("Hello world");
    
    scanf("%d",&num);
    
    printf("%d", num * fact(num-1));
    
 return;
    
}
int fact(int num)
{
  
   
   if (num>=1){
          return( num * fact(num-1));
     
   }
   else 
   {
     return 1;    
   }

 
}