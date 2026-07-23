// Move all Zeroes to the end
#include <iostream>
#include <vector>

using namespace std;

void pushZerosToEnd(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);
    int j = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] != 0) temp[j++] = arr[i];
    }

    while (j < n) temp[j++] = 0;
    arr = temp;
}

int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    cout<<"The original array is :\n";
    for (int i : arr) cout << i << " ";
    pushZerosToEnd(arr);
    cout<<"\nThe new modified array is : \n";
    for (int i : arr) cout << i << " ";
    return 0;
}