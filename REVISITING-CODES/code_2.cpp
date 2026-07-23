// Second Largest Element

#include<iostream>
#include<vector>
using namespace std;

int find_second_max(vector <int> & v){
    int n = v.size();
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > max){
            second_max = max;
            max = v[i];
        }
        else if( v[i] > second_max && second_max != max){
            second_max = v[i];
        }
    }
    return second_max;
}

int main(void){
    int n;
    cout<<"Enter the number of elements required in the array: ";
    cin>>n;
    vector<int>v(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    if(n==1){
        cout<<"Please enter more than 1 number in the array !";
        return 0;
    }

    int second_max = find_second_max(v);
    cout<<"The second maximum value in the whole array is : "<< second_max;
    return 0;
}