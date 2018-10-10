#include<iostream>

using namespace std;

long long f(long long n)
{
    if(n<=100)
        n=f(f(n+11));
    else if(n>=101)
        n=n-10;
    return n;
}

int main()
{
    long long n,p;
    while(1)
    {
        cin>>n;
        p=n;
        if(n==0)
            break;
        n=f(n);
        cout<<"f91("<<p<<") = "<<n<<endl;
    }
}
