// GroupAngrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {


    unordered_map<string, vector<string>> res;
    for (const auto& s : strs) {
        string sortedS = s;
        sort(sortedS.begin(), sortedS.end());
        res[sortedS].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& pair : res) {
        result.push_back(pair.second);
    }
    return result;


}



int main()
{
    vector<string>gp = { "act", "pots", "tops", "cat", "stop", "hat" };

    vector<vector<string>>ret = groupAnagrams(gp);

    for (int i = 0; i < ret.size(); i++)
    {
        for (string str : ret[i])
            cout << str << " ";
    }

    

   
   // std::cout << "Hello World!\n";
}
