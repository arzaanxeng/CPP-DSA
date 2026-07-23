// Sum fo even Places in an array

#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    // Prefix sum Array
    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        if( i%2 != 0) prefix_sum[i] = prefix_sum[i-1] + v[i];
        else prefix_sum[i] = prefix_sum[i-1] + 0;
    }

    // Query Input
    int q , l , r;
    cout<<"Enter the number of queries : ";
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        cout<<"\nEnter the left index : ";
        cin>>l;
        cout<<"\nEnter the right index : ";
        cin>>r;
        int sum = 0;
        if(l==0){
            sum = prefix_sum[r];
        }
        else{
            sum = prefix_sum[r] - prefix_sum[l-1];
        }
        cout<<"The sum of the sub-array from query number "<<(i+1)<<" is :"<<sum;
        cout<<endl;
    }

}