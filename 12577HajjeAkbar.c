/*
    problem link:
    https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[6],l,i=0;
    while(scanf("%s",a)!=EOF)
    {
        i++;
        l=strlen(a);
        if(l==1)
            return 0;
        else if(l==4)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
    return 0;
}

