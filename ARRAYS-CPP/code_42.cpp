
#include<iostream>
using namespace std;

void search_elm(int arr[], int n)
{
    if (n == 1) {
        cout << arr[0] << endl;
        return;
    }
    if (arr[0] != arr[1]) cout << arr[0] << endl;
    for (int i = 1; i < n - 1; i++) if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) cout << arr[i] << endl;
    if (arr[n - 1] != arr[n - 2])  cout << arr[n - 1] << endl;
}

int main(void){
    int arr1[] = {1,1,2,2,3,3,4,5,5,6,7,7,8,8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    search_elm( arr1 , n1 );
    search_elm( arr2  , n2);
}