/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a 
different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
#include<iostream>
#include<algorithm>
using namespace std;

void max_profit( int arr[] , int n ){
    int min_price = INT_MAX;
    int max_profit = 0;

    for( int i = 0 ; i < n ; i++){
        min_price = min( min_price , arr[i]);
        max_profit = max(max_profit , arr[i] - min_price);
    }
    cout<<"\nThe maximum profit was : "<<max_profit;
}

int main(void){
    // Expample
    int arr1[] = {3,4,8,2,4,2,33,21,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {3,5,2,7,11,31,28,11,23};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    max_profit(arr1 , n1);
    max_profit(arr2 , n2);
}