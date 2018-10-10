/*
    Problem link:
    https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
*/
#include<stdio.h>
int main()
{
    long long a,b,s,temp;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        s=b-a;
        printf("%lld\n",s);
    }
    return 0;
}
