#include<iostream>
using namespace std;
int sum=0,temp;

int reverseNumber(int n)
{
    
    if(n==0)
    {
        return sum;
    }
    else
    {   temp=n%10;
        sum = temp + 10*sum;
        return reverseNumber(n/10);
    }
}

int main()
{
    int num=3456;
    cout<<"Reversed Number is "<<reverseNumber(num);
    return 0;
}