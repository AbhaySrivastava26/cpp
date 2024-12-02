#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int more = target - num;
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[num] = i;
        }
        return {-1, -1}; // Return if no solution found
    }
};

int main() {
    Solution sol; // Create an instance of the Solution class
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (result[0] != -1) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two sum solution found!" << endl;
    }

    return 0;
}


//optimal
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int left=0;
        int right=nums.size()-1;
     sort(nums.begin(),nums.end());
   
        while(left<right){

            int sum=nums[left]+nums[right];
            if(sum==target){
                return {left,right};
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
      return {-1,-1};
    }
};
*/