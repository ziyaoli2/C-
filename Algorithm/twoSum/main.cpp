//
//  main.cpp
//  twoSum
//
//  Created by Ziyao Li on 5/12/19.
//  Copyright © 2019 Ziyao Li. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(target - nums[i]) == map.end()) {
                map[nums[i]] = i;
            } else {
                result.push_back(map[target - nums[i]]);
                result.push_back(i);
            }
        }
        return result;
    }
};



int main(int argc, const char * argv[]) {
    vector<int> v {1, 3, 5, 8, 2, 7, 0};
    vector<int> result = Solution().twoSum(v, 15);
    for (int i : result) {
        cout << i << " ";
    }
    cout << std::endl;
    return 0;
}
