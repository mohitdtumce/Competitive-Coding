#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }
        int i = 0, j = 0, k = 0;
        while (i < nums.size()) {
            while(i < nums.size() && j < nums.size() && nums[i] == nums[j]) {
                j++;
            }
            nums[k++] = nums[i];
            i = j;
        }
        return k;
    }
};