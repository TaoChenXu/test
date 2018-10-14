**3**
#include<stdio.h>
int main()
{
    int *Array
    int a[10];
    Array=(int *)malloc(n*sizeof(int));
    int j,i,temp;
    printf("请输入数组：");
    for(i=0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(j=0 ; j<5 ; j++){
    temp = a[j];
    a[j] = a[10-j-1];
    a[10-j-1] = temp;
    a[j] = a[j] ^ a[10 - j -1];
    a[10 - j - 1] = a[10 - j - 1] ^ a[j];
    a[j] = a[j] ^ a[10 - j -1];
    }
    for(i=0 ; i<10 ;i++)
    printf("%d ",a[i]);
}


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

