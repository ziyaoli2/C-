//
//  main.cpp
//  search_in_sorted_matrix_1
//
//  Created by Ziyao Li on 5/9/19.
//  Copyright © 2019 Ziyao Li. All rights reserved.
//

#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    vector<int> search(vector<vector<int>> matrix, int target) {
        vector<int> result;
        int row = (int) matrix.size();
        int col = (int) matrix[0].size();
        int left = 0, right = row * col - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = matrix[mid / col][mid % col];
            if (val == target) {
                result.push_back(mid / col);
                result.push_back(mid % col);
                return result;
            } else if (val < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};



int main(int argc, const char * argv[]) {
    vector<vector<int>> v {{2,4,8}, {9,20,30}, {40,80,180}, {200, 500, 1000} };
    vector<int> result = Solution().search(v, 80);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
