**4**
*1* 
#include <stdio.h>

int main()

{
    int n1 = 10,n2 = 20;
    
    n1 = n1 + n2;
    
    n2 = n1 - n2;
    
    n1 = n1 - n2;
    
    printf("%d %d",n1,n2);
    
    return 0;
}    
*2*
#include<stdio.h>

int main()

{ 

    int n1 = 35,n2 = 56;
    
    n1 = n1 ^ n2;
    
    n2 = n1 ^ n2;
    
    n1 = n1 ^ n2;
     
    
    printf("n1 = %d,n2 = %d",n1,n2);
    
    return 0;

}

