//function fo bubble sort//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, arr[100], j;
    cout << "Enter total number of elements :";
    cin >> n;
    cout << "Enter " << n << " numbers :";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorting array using bubble sort technique...\n";
    int bubble_sort(arr[100], n)
    {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
    cout << "Elements sorted successfully..!!\n";
    cout << "Sorted list in ascending order :\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
