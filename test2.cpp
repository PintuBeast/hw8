#include<iostream>
#include<cmath>
using namespace std;

void drawRuler(int n);

void drawRuler(int n)
{
   if(n==1)
   {
    cout<<"-";
    cout<<"\n";

   }
   else
   {
    drawRuler(n-1);
    for(int i=1;i<=n;i++)
    {
        cout<<"- ";
    }
    cout<<"\n";
    drawRuler(n-1);
    
   }
   
}
int main()
{
    drawRuler(4);
    return 0;
}