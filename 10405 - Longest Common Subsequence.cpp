#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int getLCSLength(string s1,string s2)
{
    s1="0"+s1;
    s2="0"+s2;
    int size1=s1.size();
    int size2=s2.size();
    int c[size1][size2];
    
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(i==0 || j==0)
            {
                c[i][j]=0;
            }
            else if(s1[i]==s2[j])
            {
                c[i][j]=1+c[i-1][j-1];
            }
            else
            {
                c[i][j]=max(c[i][j-1],c[i-1][j]);
            }
        }
    }
    return c[size1-1][size2-1];
}

int main() 
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        
        int getLenght=getLCSLength(s1,s2);
        cout<<getLenght<<endl;
    }
   
    return 0;
}
