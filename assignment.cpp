//Bayazid Hossain parvez
//ID 202420000324
//CSE242.1


#include<iostream>
using namespace std;

// insertion sort (boro theke choto)
void insertionsort(inta[], int n)
{
    for(inti=1;i<n;i++)
    {
        int key = a[i];
        int j = i-1;

        //left shift korbo
        while(j>=0 && a[j] < key)
        {
            a[j+1] = a[j];
            j--;   // j--
        }
        a[j+1] = key; // put the key
    }
}

// bubble sort (big to small)
void bubblesort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j] < arr[j+1])   // desc
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

// selection sort (descending)
void selectionsort(int arr[], int n){

    for(int i=0;i<n-1;i++)
    {
        int k=i, j=i;
        while(j<n)
        {
            if(arr[j] > arr[k]) // find max
                k = j;
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}

// binary search Using middle formula
int binarySearch(int A[], int n, int key)
{
    int l = 0, r = n-1;

    while(l <= r)
    {
        int mid = (l+r)/2;

        if(A[mid] == key) return mid;

        if(A[mid] < key) r = mid - 1;
        else l = mid + 1;
    }

    return -1; // na khuje paile -1 print korbo jeta bastobe exist e kore na
}

// Main function jekhane amra functions gula k call korte parbo.
int main()
{
    int A[100], n, lastDigit;

    cout<<"How many elements? ";
    cin>>n;

    cout<<"Input the elements: ";
    for(int i=0;i<n;i++) cin>>A[i];

    cout<<"Enter last digit of your Student ID: ";
    cin >> lastDigit;

    int choice = lastDigit % 3; // My id is 4 , so 4 er mod 1 that means amr idr jnno bubble sort kaz korbe

    cout<<"\nBefore Sorting: ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    // sorting part
    if(choice==0)
    {
        cout<<"\nUsing Selection Sort...\n";
        selectionsort(A, n);
    }
    else if(choice==1)
    {
        cout<<"\nUsing Bubble Sort...\n";
        bubblesort(A, n);
    }
    else
    {
        cout<<"\nUsing Insertion Sort...\n";
        insertionsort(A, n);
    }

    cout<<"\nSorted Array (Descending): ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<"\n\n";

    // searching loop
    int key, idx;

    while(true)
    {
        cout<<"Enter a key value to search: ";
        cin>>key;

        idx = binarySearch(A, n, key);

        if(idx!=-1)
        {
            cout<<"You have found the key value at Index "<<idx<<endl;
            break;
        }
        else
        {
            cout<<"Sorry, Try Again\n";
        }
    }

    return 0;
}
