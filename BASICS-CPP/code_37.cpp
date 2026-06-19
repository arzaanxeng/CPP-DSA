// Finding first and last index of target element in an array 
#include<iostream>
#include<algorithm> 
using namespace std;

void first_index(int arr[] , int n , int x){
    int l = 0 , r = n-1 , ans;
    bool flag = false;
    while(l<=r){
        int m = l + (r-l)/2;
        if(arr[m] == x){
            flag = true;
            ans = m;
            r = m-1;
        }
        else if(arr[m] < x){
             l = m+1;
        }
        else if (arr[m] > x){
            r = m-1;
        }
     
    }
    if(flag == true)cout<<ans<<endl;
    else cout<<"The element does not exist in the array!"<<endl;
}


void last_index(int arr[] , int n , int x){
    int l = 0 , r = n-1 , ans;
    bool flag = false;
    while(l<=r){
        int m = l + (r-l)/2;
        if(arr[m] == x){
            flag = true;
            ans = m;
            l = m+1;
        }
        else if(arr[m] < x){
             l = m+1;
        }
        else if (arr[m] > x){
            r = m-1;
        }
        else{
        cout<<"The element does not exist in the array!";
        break;
        }
    }
    if(flag == true)cout<<ans<<endl;
    else cout<<"The element does not exist in the array!"<<endl;
}



int main(void){
    int x ;
    cout<<"Enter the value of target element : ";
    cin>>x;
    
    int arr[] = {-5,1,3,5,7,7,8,8,8,8,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    first_index(arr , n , x);
    last_index(arr , n , x);

}
