#include<iostream>
using namespace std;

int digit(int a,int b)
{
    int d,d1,c=0,c1=0,sum=0;
    while(a>0 || b>0)
    {
        d=a%10;
        a=a/10;

        d=c+d;
        c=0;

        d1=b%10;
        b=b/10;

        if(d+d1>9)
        {
            c1=c1+1;
            c=1;
        }

    }
    return c1;

}

int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        int c=digit(a,b);

        if(c==0)
            cout<<"No carry operation."<<endl;
        else if(c==1)
                cout<<c<<" carry operation."<<endl;
        else
            cout<<c<<" carry operations."<<endl;

    }
}


