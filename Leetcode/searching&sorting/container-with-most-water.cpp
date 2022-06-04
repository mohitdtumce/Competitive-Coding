#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0, left = 0, right = height.size() - 1;
        int h, w;
        while (left < right) {
            h = min(height[left], height[right]);
            w = right - left;
            result = max(result, h * w);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return result;
    }
};