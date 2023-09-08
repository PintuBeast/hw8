#include<iostream>
using namespace std;

void printTriangle(int n);
void printOppositeTriangles(int n);

void printTriangle(int n)
{
    if(n < 1)
    {
        return;
    }
    else{
        printTriangle(n - 1);
        for(int i = 1 ; i <= n; i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}


void printOppositeTriangles(int n)
{
    if(n < 1)
    {
        return;
    }
    else{
        
        for(int i = 1 ; i <= n ; i++)
        {
            cout<<"*";
        }
        cout<<"\n";
        printOppositeTriangles(n - 1);

        for(int i = 1 ; i <= n ; i++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
        
              
    }
}




void printRuler(int n);

void printRuler(int n)
{
   if(n == 1)
   {
    cout<<"-";
    cout<<"\n";

   }
   else
   {
    printRuler(n - 1);
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<"- ";
    }
    cout<<"\n";
    printRuler(n - 1);
    
   }
   
}

int main()
{
    //printTriangle(4);
    //printOppositeTriangles(4);

    printRuler(4);



    return 0;
}