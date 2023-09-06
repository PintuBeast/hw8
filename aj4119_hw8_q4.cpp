#include<iostream>
using namespace std;


int jumpIt(int arr[], int arrSize);
int sum=0;

int jumpIt(int arr[], int arrSize, int index )
{
    if(index==arrSize-3)
    {
        if(arr[index+2]>arr[index+1])
        {  cout<<arr[index]<<" "<<arr[index+1]<<" \n";
            sum+=arr[index+1]+arr[index];
            return sum;
        }
        else
        {
            cout<<arr[index]<<" "<<arr[index+2]<<" \n";
            sum+=arr[index+2]+arr[index];
            return sum;
        }
    }
    else
    if(index==arrSize-2)
    {
        cout<<arr[index]<<" "<<arr[index+1]<<" \n";
        sum+=arr[index+1]+arr[index];
        return sum;
    }
    else
    {
        cout<<arr[index]<<" ";
        sum+=arr[index];
        if(arr[index+1]>arr[index+2])
        {
            int temp=jumpIt(arr, arrSize, index+2 );
        }
        else
        {
            int temp=jumpIt(arr, arrSize, index+1 );
        }
        return sum;
    }

}

int main()
{
    int arr[]={0,3,80,6,57,10},arrSize=6,index=0;
    cout<<"\nThe score is: "<<jumpIt(arr,arrSize,index);
    return 0;

}