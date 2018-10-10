#include<iostream>
#include<stdio.h>

using namespace std;

int f(int n)
{
    int a=0,c=0;
    if(n<0)
     {
         n=-1*n;
         c=1;
     }

    while(n>0)
    {
        a=(n%10)+a;
        n=n/10;
    }

    if(c==1)
        return -a;
    if(a>9)
        return f(a);
    return a;
}

int main()
{
    int n;
    while((scanf("%d",&n))==1)
    {
        if(n==0)
            break;
        if(n<10 && n>0)
            cout<<n<<endl;
        else
        {

            n=f(n);
            cout<<n<<endl;
        }
    }
    return 0;
}
