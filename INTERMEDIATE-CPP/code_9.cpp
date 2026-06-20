// PREFIX SUM ARRAY 
#include<iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr[i];
    }

    int q , l , r , sum = 0;
    cout<<"Enter the number of queries :";
    cin>>q;

    int prefix_arr[n];
    for(int i = 0 ; i <n ; i++){
        sum += (arr[i]*arr[i]);
        prefix_arr[i] = sum;
    }

    for(int i = 0 ; i < q ; i++){
        int l, r; 
        cout << "\n--- Query " << (i + 1) << " ---" << endl;
       
        cout << "Enter the value of left index: ";
        cin >> l;
        if(l < 0 || l >= n) {
            cout << "Left Index Out of Bounds! Skipping query." << endl;
            continue; 
        }

        cout << "Enter the value of right index: ";
        cin >> r;
        if(r < 0 || r >= n || r < l) {
            cout << "Right Index Invalid or Out of Bounds! Skipping query." << endl;
            continue;
        }

        if(l == 0) cout << "The sum of the square the range ["<<l<<" , "<<r<<"]: " << prefix_arr[r] << endl;
        else cout <<  "The sum of the square the range ["<<l<<" , "<<r<<"]: " << prefix_arr[r] - prefix_arr[l - 1] << endl;
        
    }
}