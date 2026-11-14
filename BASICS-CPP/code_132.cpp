#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        unordered_set<int> s;

        int i = 0;
        int j;
        int count = fruits.size();

        while (i < fruits.size()) {
            j = 0;
            while (j < baskets.size()) {
                // Basket is unused and has enough capacity
                if (s.find(j) == s.end() && fruits[i] <= baskets[j]) {
                    count--;
                    s.insert(j);
                    break;
                }
                j++;
            }
            i++;
        }

        return count;
    }
};