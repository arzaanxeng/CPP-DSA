// ARRAYS
#include<iostream>
using namespace std;
int main(void){
    cout<<"\n===== ARRAY PROBLEMS =====\n";
    int arr[] = {1,2,3,4,5,-6};
    cout<<"The actual array is : \n";
    for( int i = 0 ; i <= 5 ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"The reversed array is : \n";
    for(int j=5 ; j>= 0 ; j--){
        cout<<arr[j]<<" ";
    }

    cout<<endl;
    cout<<"The sum of the elements inside the array is : \n";
    long long sum = 0;
    for( int i = 0 ; i<= 5  ; i++){
        sum = sum + arr[i];
    }
    cout<<sum;

    cout<<endl;
    cout<<"The maximum value element inside the array is : \n";
    int max = arr[0];
    for(int i = 0 ; i < 6 ; i++){
        if( max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max<<endl;

    cout<<"The minimum value element inside the array is : \n";
    int min = arr[0];
    for(int i = 0 ; i < 6 ; i++){
        if( min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min<<endl;
 
    int x;
    cout<<"Enter the number you would like to search in the array : ";
    cin>>x;
    bool flag = false;
    for(int i =0 ; i <6 ; i++){
       if ( arr[i] == x){
        flag = true;
        break;
       }
    }
    if(flag == true ) cout<<"The number "<<x<<" is in the array."<<endl;
    else cout<<"The number "<<x<<" is not in the array."<<endl;

    int count = 0;
    for(int i =0 ; i < 6 ; i++){
        for(int j = 1 ; j<6 ; j++){
            if(arr[i] == arr[j]){
              count ++;
            }
        }
        cout<<count<<"  "<<i;
    }


 return 0;
}