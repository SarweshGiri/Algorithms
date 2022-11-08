#include<iostream>
using namespace std;
int main()
{
    int arr[20],size,i,j,temp,min,loc;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>size;
    cout<<"Enter the values in the array : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(size-1);i++)
    {
        min= arr[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    cout<<"Elements after getting sorted : "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}