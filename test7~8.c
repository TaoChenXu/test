**7**
**8**
#include <stdio.h>
int main(void)
{
    int n;
    int a=1,b,c;

    printf("Please enter the number of squares:");
    scanf("%d",&n);

    while(a<=n)
 {
        if(a==1||a==n){
            b=1;
            while(b<=n){
                printf("*");
                b++;
            }
        }
        if(a<n&&a>1){
            b=1;
            while(b<=n){
                if(b==1||b==n){
                    printf("*");
                }
                if(b<n&&b>1){
                    printf(" ");
                }
                b++;
            }
        }
        printf("\n");
        a++;
    }

    return 0;
}


