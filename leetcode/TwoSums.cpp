//
// Created by kubak on 21.9.24.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::ios::sync_with_stdio(false);
        unordered_map<int , int > hashTable;
        int index = 0;
        int complement = 0;
        for ( auto const &item : nums) hashTable[item] = index++;

        for ( int j = 0 ; j < nums.size(); j++)
        {
            complement = target - nums[j];
            if (auto search = hashTable.find( complement); search != hashTable.end() &&  search->second != j ) return  { j, search->second};
        }
        return {};
    }

};

void print (  vector<int> res )
{
    for ( auto const &item: res)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main ( void )
{

    auto sol = Solution();
    vector<int> data = {2,7,11,15};
    auto res = sol.twoSum(data , 9);

    print( res );

    data = {3,2,4};
    res = sol.twoSum(data , 6);

    print( res );


    return EXIT_SUCCESS;
}