// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i, j;
        for(i = 0; i < nums.size(); i++) {
            for(j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 1};
    
    if(obj.containsDuplicate(nums)) {
        cout << "True (Duplicate mil gaya!)" << endl;
    } else {
        cout << "False (Koi duplicate nahi hai)" << endl;
    }
    
    return 0;
}