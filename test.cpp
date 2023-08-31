#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int temp=factorial(n-1);
    return temp*n;

}
int main()
{
    cout<<"Answer is "<<factorial(5);
    return 0;
}