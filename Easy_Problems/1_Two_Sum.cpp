/*
Info:
  Runtime: 
    36 ms,
    Beats: 29.72%
  Memory:
    13.89 MB,
    Beats: 99.77%

*/

#include <vector>
#include <algorithm>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (unsigned short i = 0; i < nums.size(); i++){

            auto objective = std::find(nums.begin()+i+1, nums.end(), target-nums[i]);

            if(objective != nums.end()){
                for (unsigned short h = i+1; h < nums.size(); h++){
                    if (nums[h] == objective[0]){
                        return {i, h};
                    }
                }

            }
        }
        return {0, 1};
    }
};
