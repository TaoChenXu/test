**5**
include<stdio.h>
void findprincipalelement(int array[],int b,int length)
{
    int c=0;
    
    for(;c<length;c++){
    if(array[c]>array[b])
    goto finsh;
    else if(array[c]<array[b])
    continue;
    else 
      for(c1;c<length;C++){
      if(array[c]>array[b])
      continue;
      else 
      goto finsh;
    }  
}      
      printf("&d",array[b]);
      finsh:
      printf("");
}      
int main()
{
    int array[12345];
    int a,b,c,i;
    i=0;
    while(scanf("8d",&array[i])==1)
      i++;
      for(b=0;b<i;b++){
    findprincipalelement(array[,b,12345);
}

**6**
输入整数n，起始值i为2，显示i，i<=根号n的整数，i加1，运算n除以i的余数，若能整除则返回0，否则返回1
输入整数i，i起始值为100，判断当i<=200时，返回并i加1，若i>200,则输出i结束
