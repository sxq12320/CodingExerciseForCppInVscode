#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum_baoli(vector<int>& nums, int target) {
    	int n = nums.size();
    	for (int i= 0;i<n;i++){
    		for (int j = i+1;j<n;j++){
    			if (nums[i]+ nums[j] == target){
    				return {i , j};
    			}
    		}
    	}
    	return {};
    }

    vector<int> twoSum_hash(vector<int> & nums , int target){
    	int n = nums.size();
    	unordered_map<int , int> map;
    	for (int i = 0 ; i <n ;i++){
    		map[nums[i]] = i;
    	}

    	for (int i = 0; i <n; i++){
    		int diff = target - nums[i];
    		auto it=map.find(diff);
    		if (it!=map.end()){
    			cout<<it->second <<" "<<i;
    			return{ it->second,i};
    		}

    	}
    	return {};

    }
};


int main()
{
	Solution s;
	vector<int> nums = {2,7,11,15};
	int target = 9;

	s.twoSum_hash(nums,target);

	return 0;
}