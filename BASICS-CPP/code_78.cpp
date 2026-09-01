// Min and Max in thhe array

#include <iostream>
using namespace std;

int targetIndex(const int nums[] , int n , int x){
    if( n == 0 ) return -1;
    int smallAns = targetIndex(nums,n-1,x);
    if( smallAns != -1 ) return smallAns;
    else if( nums[n-1] == x ) return n-1;
    else return -1;
}

int main(void){
    int n,x;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of element number "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<"\nEnter the value of target : ";
    cin>>x;

    int ans = targetIndex(arr,n,x);
    cout<<"The target was found first at the index number : "<<ans;
    return 0;
}
/*
                    targetIndex(nums, 5, 30)
                              |
                              | n != 0
                              ↓
                    targetIndex(nums, 4, 30)
                              |
                              | n != 0
                              ↓
                    targetIndex(nums, 3, 30)
                              |
                              | n != 0
                              ↓
                    targetIndex(nums, 2, 30)
                              |
                              | n != 0
                              ↓
                    targetIndex(nums, 1, 30)
                              |
                              | n != 0
                              ↓
                    targetIndex(nums, 0, 30)
                              |
                              | n == 0
                              ↓
                            return -1


                # Recursion is going back from here !!!

                    targetIndex(nums, 0, 30)
                            |
                            └── return -1
                                    ↓
                    targetIndex(nums, 1, 30)

                        smallAns = -1

                        nums[n-1] = nums[0] = 10

                        10 == 30 ? No

                        return -1
                                    ↓
                    targetIndex(nums, 2, 30)

                        smallAns = -1

                        nums[n-1] = nums[1] = 20

                        20 == 30 ? No

                        return -1
                                    ↓
                    targetIndex(nums, 3, 30)

                        smallAns = -1

                        nums[n-1] = nums[2] = 30

                        30 == 30 ? Yes

                        return n-1
                            = 3-1
                            = 2
                                    ↓
                    targetIndex(nums, 4, 30)

                        smallAns = 2

                        smallAns != -1 ? Yes

                        return 2
                                    ↓
                    targetIndex(nums, 5, 30)

                        smallAns = 2

                        smallAns != -1 ? YEs

                        return 2




                    ┌─────────────────────────┐
                    │ targetIndex(n = 5)      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ targetIndex(n = 4)      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ targetIndex(n = 3)      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ targetIndex(n = 2)      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ targetIndex(n = 1)      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ targetIndex(n = 0)      │
                    │                         │
                    │ n == 0 → return -1      │
                    └────────────┬────────────┘
                                 │
                    ─────────────┴─────────────
                           RETURN PHASE
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ n = 1                   │
                    │ smallAns = -1           │
                    │ 10 == 30 ❌             │
                    │ return -1               │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ n = 2                   │
                    │ smallAns = -1           │
                    │ 20 == 30 ❌             │
                    │ return -1               │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ n = 3                   │
                    │ smallAns = -1           │
                    │ 30 == 30 ✅             │
                    │ return 2  ← FOUND!      │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ n = 4                   │
                    │ smallAns = 2            │
                    │ return 2                │
                    └────────────┬────────────┘
                                 │
                                 ↓
                    ┌─────────────────────────┐
                    │ n = 5                   │
                    │ smallAns = 2            │
                    │ return 2                │
                    └────────────┬────────────┘
                                 │
                                 ↓
                         🎯 FINAL ANSWER = 2
*/