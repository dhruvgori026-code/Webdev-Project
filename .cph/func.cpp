#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
      int sum=0,n;
      
      std::cin>>n;
      for(;n>0;n--)
      {
            sum = sum + (pow(-1,n))*n;
      }
      
      std::cout<<sum;
}