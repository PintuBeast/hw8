#include<iostream>
using namespace std;

int minimum= INT_MAX;
int minInArray1(int arr[],int arrSize);

int minInArray1(int arr[],int arrSize)
{  
    if(minimum==INT_MAX)
    {

        minimum=arr[arrSize-1];
    }
   
    if(arrSize==1)
    {   
        if(minimum > arr[arrSize-1])
        {
            minimum=arr[arrSize-1];

        }
        else
        {
            int tempMinimum=minimum;
            minimum=INT_MAX;
            return tempMinimum;
        }
    }
    else
    {
        if(minimum > arr[arrSize-2])
        { 
            minimum=arr[arrSize-2];
            return (minInArray1(arr,arrSize-1));
        }
        else
        {
            return  (minInArray1(arr,arrSize-1));
        }
       
        
    }
}

int minInArray2(int arr[],int low, int high);
int minInArray2(int arr[],int low, int high)
{
    if(minimum==INT_MAX)
    {

        minimum=arr[high];
    }
    
    if(high==low)
    {   
        if(minimum > arr[high])
        {
            minimum=arr[high];
            int tempMinimum=minimum;
            minimum=INT_MAX;
            return tempMinimum;
        }
        else
        {
            int tempMinimum=minimum;
            minimum=INT_MAX;
            return tempMinimum;
        }
    }
    else
    {
        if(minimum > arr[high-1])
        { 
            minimum=arr[high-1];
            return (minInArray2(arr,low,high-1));
        }
        else
        {
            return  (minInArray2(arr,low,high-1));
        }
       
        
    }

}

int main()
{
    int arr[]={9,-2,14,12,3,6,2,1,-9,15};
    int arrSize=10;
    int res1,res2,res3,res4;
    res1=minInArray1(arr,10);
    res2=minInArray2(arr,0,9);
    cout<<res1<<" "<<res2<<endl;
     
    res3=minInArray2(arr,2,5);
    res4=minInArray1(arr+2,4);
    cout<<res3<<" "<<res4<<endl;

    return 0;
}