#include<iostream>
using namespace std;

int sumOfSquares(int arr[],int arrSize);

int sumOfSquares(int arr[],int arrSize)
{  
   
    if(arrSize==0)
    {
        return 0;
    }
    else
    {
        return (arr[arrSize-1]*arr[arrSize-1]+sumOfSquares(arr, arrSize-1));
       
        
    }
}

bool isSorted(int arr[],int arrSize);
bool isSorted(int arr[],int arrSize)
{  
   
    if(arrSize==2)
    {
        if(arr[arrSize-1] >= arr[arrSize-2])
        {
        return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(arr[arrSize-1] >= arr[arrSize-2])
        {
        return (isSorted(arr,arrSize-1));
        }
        else
        {
            return false;
        }
       
        
    }
}

int main()
{
    int arr[]={2,-1,3,10};
   //int arr[]={4,5,9,10};
    int arrSize=4;
    cout<<"Sum of Squares :"<<sumOfSquares(arr,arrSize);
    cout<<"\n issorted: "<<isSorted(arr,arrSize);
    return 0;
}
