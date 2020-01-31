#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    int i=0;
    vector <int> v;
    while(cin>>a)
    {
        v.push_back(a);
        sort(v.begin(), v.end());
        
        if(i%2==0)
            cout<<v[i/2]<<endl;
        else
        {
            int ans=(v[i/2]+v[i/2+1])/2;
            cout<<ans<<endl;
        }
        i++;
    }
    return 0;
}
