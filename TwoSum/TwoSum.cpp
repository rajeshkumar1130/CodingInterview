#include <iostream>
#include<unordered_map>
using namespace std;

/// <summary>
/// Program to find indexes of numbers whose sum matches a target
/// </summary>
int main()
{
    int arr[] = { 1,2,3,4,5,6 };
    int sum = 5;
    unordered_map<int, int> map;

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (map.find(sum - arr[i]) != map.end())
        {
            cout << map[sum - arr[i]] << " " << i<<"\n";
        }
        else
        {
            map[arr[i]] = i;
        }
    }
}
