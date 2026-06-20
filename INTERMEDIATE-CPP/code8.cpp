#include<iostream>
using namespace std;

int main(void){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    char arr[n];
    for(int i = 0 ; i < n ; i++){ 
        cout << "Enter the character element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Build Prefix Array directly by evaluating characters
    int prefix_arr[n];
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
           arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            sum += 1;
        } else {
            sum += 0;
        }
        prefix_arr[i] = sum;
    }

    // Process Queries safely
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

        if(l == 0) cout << "The number of vowels is/are: " << prefix_arr[r] << endl;
        else cout << "The number of vowels is/are: " << prefix_arr[r] - prefix_arr[l - 1] << endl;
        
    }
    return 0; 
}