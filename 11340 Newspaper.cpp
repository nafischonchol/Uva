#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <char,int> mp;
    map<char,int>::iterator it;
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int p,n,l;
        double cents=0;
        char ch;
        string arti;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ch>>p;
            mp.insert({ ch, p });
        }
        cin>>l;
        getchar();
        while(l--)
        {
            getline(cin,arti);
            for(int i=0;i<arti.size();i++)
            {
                ch=arti[i];
                it=mp.find(ch);
                if(it!=mp.end())
                    cents=cents+it->second;
            }
        }
        printf("%.2lf$\n",cents*0.01);
    }
    return 0;
}
