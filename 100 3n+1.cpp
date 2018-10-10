#include<stdio.h>
int main()
{
    long long  i,j,c,a,temp;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        a=0;
        printf("%lld %lld",i,j);
        if(i>j)
         {
            temp=i;
            i=j;
            j=temp;
         }

        while(i<=j)
        {
            c=uva100(i,j);

            if(a<c)
                a=c;
            i++;
        }
        printf(" %d\n",a);

    }
    return 0;
}

int uva100(long long i,long long  j)
{
    long long  c=0;
    while(1)
    {
        c++;
        if(i==1)
            break;
        else if(i&1)
            i=(3*i)+1;
        else
            i=i/2;
    }
    return c;
}
