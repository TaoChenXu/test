**11**
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define N 3 
struct Student 
{
char *number;
char *name;
float score;
}
Stu[N];
boble(struct Student *a) 
{
int i,j;
struct Student t;
for(j=1 ; j<N ; j++) 
for(i=0 ; i<N-j ; i++) 
if (a[i] , score>a[i+1] , score) 
{
t number = a[i] number;
a[i] number = a[i+1] number;
a[i+1] number = t number;

t name = a[i] name;
a[i] name = a[i+1] name;
a[i+1] name = t name;

t score = a[i] score;
a[i] score = a[i+1] score;
a[i+1] score = t score;
}
}
后面不知道咋写了。。。
**12**
#include <stdio.h>
void dec2bin(int n)
{
    if(n>1)dec2bin(n/2);
    printf("%d",n%2);
}
int main()
{
    int n;
    scanf("%d",&n);
    dec2bin(n);
    return 0;
}
