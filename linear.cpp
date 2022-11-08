#include<iostream>
using namespace std;
int linear_search(int array[], int size, int searchvalue)
{
    for(int i =0; i<size; i++){
        if(searchvalue==array[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={5,4,87,21,34,56,48};
    int uservalue;
    cout<<"Enter an integer: "<<endl;
    cin>>uservalue;

    int result = linear_search(arr, 7, uservalue);
    if(result>=0)
    {
        cout<<"The number "<<arr[result]<<" was found at the element with index "<<result<<endl;
    }
    else
    {
        cout<<"The number "<<uservalue<<" was not found"<<endl;
    }
    return 0; 
}