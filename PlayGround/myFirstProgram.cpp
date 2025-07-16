#include <iostream>
#include <vector>
using namespace std;
int findSmallestMissing(vector <int> &nums){
    int n=nums.size();
    int low=0, high=n-1, mid, ans=n; // default to n if no missing number
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==mid) low=mid+1;
        else if(nums[mid]!=mid){
         ans=mid;
         high=mid-1;
        }
    }
    return ans;
}

int main(){
vector <int> nums;
nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
nums.push_back(8);
nums.push_back(9);
nums.push_back(12);
cout<<findSmallestMissing(nums);


    return 0;
}