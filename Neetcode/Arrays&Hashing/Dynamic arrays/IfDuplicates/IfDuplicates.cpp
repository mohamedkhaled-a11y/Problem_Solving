// IfDuplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;



class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int>Dup;
        for (int num : nums)
        {
            if (Dup.count(num))
                return true;
            Dup.insert(num);
        }

        return false;

    }

    bool isAnagram(string s, string t) {

        
        if (s.size() != t.size()) return false;
        
        unordered_map<char, int>COUNTS;
        unordered_map<char, int>COUNTt;

        for (int i = 0; i < s.size(); i++)
        {
            COUNTS[s[i]]++;
            COUNTt[t[i]]++;
        }


        return COUNTS == COUNTt;

    }


    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;  // val -> index
        
        int s = nums.size();

        for (int i = 0; i < s; i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < s; i++)
        {
            int diff = target - nums[i];

            if (indices.count(diff) && indices[diff] != i)
                return { i,indices[diff] };

        }
        
        return {};
    }

};



int main()
{

    Solution sol;
    vector<int>vec = { 1,2,3,4 };
    //cout<<sol.hasDuplicate(vec);
    /*
    cout << sol.isAnagram("racecar", "carrace");
    cout << "\n";
    cout << sol.isAnagram("jar", "jam");
 */


    vector<int>s;
    vector<int>nums = { 3,4,5,6 };
    s=sol.twoSum(nums,7);

    for (auto N : s)
        cout << N<<" ";
}
