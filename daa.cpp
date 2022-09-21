#include <bits/stdc++.h>
#include <iostream>
#define mod 10000007
using namespace std;
#define ull unsigned long long int
#define ll long long

int BinarySearch(int array[], int ele, int low, int high)  // Binary Search Algorithm
{

    int ans = -1;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (array[mid] == ele || array[mid] < ele)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int tc;
    cout << "Enter the number of testcases: ";    // Number of testcases
    cin >> tc;
    cout << endl;
    while (tc--)
    {
        int input;
        cout << "Enter the size of the Array: "; // Size of the array
        cin >> input;

        int arr[input];
        arr[0] = 0;

        for (int i = 1; i < input; i++)
        {
            arr[i] = -1;
            arr[i] = rand() % 3;  // To generate random array of only [0,1,2]

        }
        
        sort(arr,arr+input);
        cout << "The Sorted Array is: " << endl;
        for (int i = 0; i < input; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        int zero = BinarySearch(arr, 0, 0, input - 1);         // To count the index till which 0 is in the Array
        int one = BinarySearch(arr, 1, zero + 1, input - 1);  // To count the index till which 1 is in the Array
        int two = BinarySearch(arr, 2, one + 1, input - 1);  // To count the index till which 2 is in the Array


        int count0 = (zero != -1) ? zero + 1 : 0 ;       // To count the number of 0's in the Array
        int count1 = (one != -1) ? one - zero : 0 ;     // To count the number of 1's in the Array
        int count2 =  input - ( count0 + count1 );    // To count the number of 2's in the Array

        cout << "Number of zero's are: " << count0 << endl;
        cout << "Number of one's are: " << count1 << endl;
        cout << "Number of two's are: " << count2 << endl;
        cout << endl;


        cout << "Result: ";
        // Checking through the if-else and printing the result.

        if (count0 > count1 && count0 > count2)
        {
            cout << "X" << endl;
        }
        else if (count1 > count0 && count1 > count2)
        {
            cout << "Y" << endl;
        }
        else if (count2 > count0 && count2 > count1)
        {
            cout << "Z" << endl;
        }
        else if (count0 == count1 && count0 > count2)
        {
            cout << "Number of 0's and number of 1's are same." << endl;
        }
        else if (count1 == count2 && count1 > count0)
        {
            cout << "Number of 1's and number of 2's are same." << endl;
        }
        else if (count0 == count2 && count2 > count1)
        {
            cout << "Number of 0's and number of 2's are same." << endl;
        }
        else
        {
            cout << "The count for 0, 1 and 2 are same." << endl;
        }

        cout << endl;
    }
    

    return 0;
}
