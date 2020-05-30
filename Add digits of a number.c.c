#include<stdio.h>  
 int main()    
{    
    int n,s=0,m;    
    printf("Enter a number:\n");    
    scanf("%d",&n);    
    while(n>0)    
    {    
        m=n%10;    
        s=s+m;
        n=n/10;
    }
    printf("Sum is=%d\n",s);
    return 0;
}   