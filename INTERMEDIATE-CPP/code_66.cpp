/*

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
 Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the customer that has the maximum wealth.

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts){
    int m = accounts.size();
    int count = 0 , ans = -1;
    for( int i = 0 ; i < m ; i++){
        for( int j = 0 ; j < accounts[i].size() ; j++){
            count += accounts[i][j];
        }
        ans = max(ans , count);
        count = 0;
    }
    return ans;
}

int main(void){
    vector<vector<int>> accounts = {{18,22,34},{32,29,0}};
    int ans = maximumWealth(accounts) ;
    cout<<"The richest customer wealth is : $"<<ans;
}