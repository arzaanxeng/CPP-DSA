// Count Sort Application for Sorting Temperature List 
// List contains temp ranging from [-50,50] 
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int nums[] = {-32, 14, -48, 7, 22, -19, 0, 45, -50, 31, -12, 19, -38, 5, 27, -41, 11, -4, 39, -25, 48, -16, 2, -33, 20};
    int n = sizeof(nums)/sizeof(nums[0]);
    int freq[101] = {0};  
    for(int i = 0; i < n; i++) freq[nums[i]+50]++; // Mapping -50 --> 0 , -49 --> 1 and 50 --> 100
    for(int i = 100 ; i >= 0 ; i--) for(int j = 1 ; j <= freq[i]; j++) cout <<(i-50)<<" ";
    cout << endl;
    // We acheived the sorting for a small fixed range of numbers using COUNT SORT ALGORITHM -- IMP TO KEEP IN MIND AS IT's TC : 0(n+k) , where k is range size
    return 0;
}