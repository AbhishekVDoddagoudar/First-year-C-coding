#include<stdio.h>
int main()
{
    int N1,N2,D1,D2,x,y,c,sum;
    printf("\nEnter the numerator of 1st number\n");
    scanf("%d",&N1);
    printf("\nEnter the denominator of 1st number\n");
    scanf("%d",&D1);
    printf("\nEnter the numerator of 2nd number\n");
    scanf("%d",&N2);
    printf("\nEnter the denominator of 1st number\n");
    scanf("%d",&D2);
    x=(N1*D2)+(D1*N2);
    y=D1*D2;
    for(c=1;c<=x&&c<=y;c++)
    {
        if(x%c==0&&y%c==0)
        {
            sum=c;
        }
    }
    printf("\nThe added fraction is %d%d",x/sum,y/sum);
    printf("\n");
}