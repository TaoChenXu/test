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
