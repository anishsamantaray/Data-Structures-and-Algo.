//
// Created by anish on 24-07-2022.
//
// Leetcode medium - Combination sum 1

//Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
//
//The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.
//
//It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
//asked in Facebook and Uber Interviews
#include<iostream>
#include <vector>

void func(int ind, int target, std::vector<int> &ds,std::vector<std::vector<int>> &ans,std::vector<int> &arr)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        func(ind,target-arr[ind],ds,ans,arr);
        ds.pop_back();

    }
    func(ind+1,target,ds,ans,arr);
}

std::vector<std::vector<int>> combinationsum(std::vector<int> arr,int target){
    std::vector<std::vector<int>> ans;
    std::vector<int> ds;
    func(0,target,ds,ans,arr);
    return ans;

}

int main()
{

    std::vector < int > v {2,3,6,7};
    int target = 7;

    std::vector < std::vector < int >> ans = combinationsum(v, target);
    std::cout << "Combinations are: " << std::endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            std::cout << ans[i][j] << " ";
        std::cout << std::endl;
    }
}
