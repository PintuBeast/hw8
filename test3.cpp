#include<iostream>
#include<cmath>
using namespace std;

void drawRuler(int n);



void drawRuler(int n)
{
   if(n==1)
   {
    cout<<"-";
   }
   else
   if(n%2==0)
   {
     cout<<"-";
     drawRuler(n/2);
     
   }
   cout<<"\n";
}
int main()
{
    drawRuler(4);
    return 0;
}