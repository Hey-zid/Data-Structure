#include <iostream>
using namespace std;

void bubbleSort (int numbers[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] < numbers[j + 1])   // DESCENDING
            {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}






void printarray(int numbers[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[100];
    int n, i, ID, choice;

    cout << "Enter the Size of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "The Numbers are: ";
    for (i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter the last digit of your ID please: ";
    cin >> ID;

    choice = ID % 3;

    if (choice == 0)
    {
        cout << "I LOVE YOU\n";
    }
    else if (choice == 1)
    {
        bubbleSort(numbers, n);
        printarray(numbers, n);
    }
    else
    {
        cout << "I HATE YOU\n";
    }

    return 0;
}
