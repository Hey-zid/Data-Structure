//Linear Search && Binary Search

#include<bits/stdc++.h>

using namespace std;

int LinearSearch(int A[],int n , int key)
{
    for (int i=0;i<n;i++)
    {
        if (A[i]==key)
        {
            cout<<"Found at Index "<<i<<endl;
            return i;
        }

    }
    cout<<"Not Found"<<endl;
    return -1;
}


int BinarySearch(int A[],int low, int high,int key )
{
    int mid;

    while(low<=high)
    {
        mid = (low+high)/2;
        if (A[mid]==key)
        {
            cout<<"Found at Index "<<mid ;
            return mid;
        }
        else if (key<A[mid])
        {
            high=mid-1;
        }
        else if (key>A[mid])
        {
            low=mid+1;
        }
    }
    cout<<"Not Found";
    return -1;
}



int main()
{
    int A[1000],n,key,choice;
    cout << "Elements of array is = " ;
    cin >> n;
    cout << "Input the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>> A[i];
    }
    cout <<"Here is the Array ";
    for (int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }


    cout<<endl<<"Enter The Key Value = ";
    cin>>key;
    cout<<"For Linear Search Press 1 For Binary Search Press 2  = ";
    cin>>choice;
    if (choice == 1)
    {
        LinearSearch(A,n,key);
    }
    else if (choice == 2)
    {
        BinarySearch(A,0,n-1,key);
    }


}











