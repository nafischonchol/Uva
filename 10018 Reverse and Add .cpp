#include<iostream>

using namespace std;

long long reverse(long long p)
{
    long long rm=0,r;
    while(p>0)
    {

        r=p%10;
        rm=rm*10+r;
        p=p/10;
    }

    return rm;
}

int main()
{
    long long n,p,c=0;
    cin>>n;
    while(n--)
    {
        c=0;
        cin>>p;
        long long r=reverse(p);

        while(1)
        {
            c++;

            p=r+p;

            r=reverse(p);

            if(r==p)
                break;


        }

        cout<<c<<" "<<p<<endl;
    }
    return 0;
}
