// PREFIX SUM ARRAY
#include<iostream>
using namespace std;

void prefix_sum( int arr[] , int n , int l , int r){
    int sum = 0 , p[n];

    for(int i = 0 ; i < n ; i++ ){
        sum += arr[i];
        p[i] = sum ;
    }
    if(l == 0){
        cout<<p[r];
    }
    else cout<<"Sum is :"<<(p[r] - p[l-1]);

}



int main(void){
    int arr[] = {1,7,-2,3,8,11,-7,32,25,19}; // n = 10
    int query , l , r , n = 10;
    cout<<"\n\nEnter the required query number :";
    cin>>query;

    for( int i = 0 ; i < query ; i++){
        cout<<"\n\nEnter the value of the first index :";
        cin>>l;
        cout<<"\n\nEnter the value of the second index :";
        cin>>r;
        prefix_sum( arr ,n , l , r);
    }
}

/* one more approach with less complexity 


int main() {

    int arr[] = {1,7,-2,3,8,11,-7,32,25,19};
    int n = 10;

    int prefix[n];

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int query;
    cout << "Enter number of queries: ";
    cin >> query;

    while(query--) {

        int l, r;

        cout << "\nEnter left index: ";
        cin >> l;

        cout << "Enter right index: ";
        cin >> r;

        int ans;

        if(l == 0)
            ans = prefix[r];
        else
            ans = prefix[r] - prefix[l-1];

        cout << "Sum = " << ans << endl;
    }

    return 0;
}

*/