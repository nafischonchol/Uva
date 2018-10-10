#include<stdio.h>
int main()
{
    int n, m, i, j, k, a1, a2, a3, a4, a5, a6, a7, a8, a9, a0;
    scanf("%d", &n);
    while(n>0){
        a1=0;
        a2=0;
        a3=0;
        a4=0;
        a5=0;
        a6=0;
        a7=0;
        a8=0;
        a9=0;
        a0=0;
        scanf("%d", &m);
        for(k=1; k<=m;k++){
            i = k;
            while(i != 0)
            {
                j= i%10;
                i/=10;
                switch(j)
                {
                    case 0:
                        a0++;
                        break;
                    case 1:
                        a1++;
                        break;
                    case 2:
                        a2++;
                        break;
                    case 3:
                        a3++;
                        break;
                    case 4:
                        a4++;
                        break;
                    case 5:
                        a5++;
                        break;
                    case 6:
                        a6++;
                        break;
                    case 7:
                        a7++;
                        break;
                    case 8:
                        a8++;
                        break;
                    case 9:
                        a9++;
                        break;
                }
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", a0, a1, a2, a3, a4, a5, a6, a7,a8,a9);
        n--;
    }
    return 0;
}
