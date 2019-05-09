//
//  main.cpp
//  Algorithm
//
//  Created by Ziyao Li on 5/9/19.
//  Copyright © 2019 Ziyao Li. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;

class Solution {
    public:
    int binarySearch(vector<int> array, int target) {
        // write your solution here
        int left = 0, right = (int) array.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = array[mid];
            if (val == target) {
                return mid;
            } else if (val < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};


int main(int argc, const char * argv[]) {
    vector<int> array {1,3,5,7,9,18,100};
    int target = 5;
    Solution sol;
    std::cout << sol.binarySearch(array, target) << std::endl;
    
    return 0;
}



