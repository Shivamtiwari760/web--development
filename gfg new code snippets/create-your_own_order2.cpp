//sort in c++ stl//
// code in create your own order//
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x, y;
};
bool MyCmp(point p1, point p2)
{
    return p1.y >= p2.y;// different program from previous one, here in that we get the value of y form incresing to decreasing order//
}
int main()
{
    point arr[] = {{1, 9}, {7, 17}, {7, 2}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, MyCmp);// worst and average case of sort is O(n long)//
    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
    return 0;
}