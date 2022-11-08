#include<iostream>
using namespace std;

int binarysearch(int arr[], int left,int right, int x)
{
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid] == x)
        {
            return mid;    
        }
        else if(arr[mid]<x)
        {
            left = mid +1;
        }    
        else
        {
            right = mid -1;
        }
    }
    return -1;
}
int main()
{
    int num;
    //int myarr[]={1,2,3,4,5,6,7,8,9};
    int myarray[10];
    int output;
    cout<<"Enter 10 values in the array in ascending order : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>myarray[i];
    }
    cout<<"Enter the value for which you want to search : "<<endl;
    cin>>num;
    output= binarysearch(myarray, 0, 9, num);
    if(output == -1)
    {
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"Element found at : "<<output<<endl;
    }
    return 0;
}