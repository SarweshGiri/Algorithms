#include<iostream>
using namespace std;

int main()
{
    int a[20], size, temp, swap;
    cout<<"Enter the size of an array : "<<endl;
    cin>>size;
    cout<<"Enter the elements in the array : "<<endl;
    //this loop is for taking the values from the user
    for(int i=0; i<size;i++)
    {
        cin>>a[i];
    }
    //this loop is an outer loop for sorting the elements in the array
    for(int i =0;i<(size-1);i++)
    {
        swap =0;
        //This is the inner loop for sorting the elements in the array
        for(int j =0;j<(size -i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap = 1;
            }
        }
        if(swap==0)
        {
            break;
        }
    }
    cout<<"Array after performing bubble sort : "<<endl;
    //This loop will print the values after sorting the elements
    for(int i=0;i<size;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}