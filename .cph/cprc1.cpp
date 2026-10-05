#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int b,a,n,min,max,i=0;
    std::cin>>n;
    int ad[n];

    for(;i<n;i++)
    {
        std::cin>>ad[i];
    }
    for(b=0;b<n;b++)
    {
        for(a=b+1;a<n;a++)
        {
            if(ad[b]<=ad[a])
            {
                 min = ad[b];
            }
            else if(ad[b]>ad[a])
            {
                 max = ad[b];
            }
        }
    }
    int total;
    total = max - min;
    std::cout<<total; 
}