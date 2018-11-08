#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+5];
        bool c=true;
        vector <bool> v;
        v.assign(n,false);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            int d=abs ( a[i+1]-a[i] );
            if(d==0 || d>n-1 || v[d]==true)
            {
                c=false;
                break;
            }
            v[d]=true;
        }
        if(c==true)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;

    }
    return 0;
}
