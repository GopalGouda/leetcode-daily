// ✅ Problem: Find K Closest Elements
// 🔗 Link: https://leetcode.com/problems/find-k-closest-elements/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(N+Klogk)
// 💾 Space Complexity: O(K)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector <int> result(k);
        int n= arr.size();
        if(x<arr[0]){ // If K is less then arr[low]
            for(int i=0; i<k; i++){
                result[i]=arr[i];
            }
            return result;
        }
        if(x>arr[n-1]){ // If K is greater then arr[high]
        int i=n-1, j=k-1;
        while(j>=0){
            result[j]=arr[i];
            i--;
            j--;
        }
            return result;
        }

        int low=0, high= n-1, mid;
        bool flag= false; //it will state if we found the x or not
        int loc; //this will store the location of the x
        int point=0; // will use to put elements on result

        while (low<=high){ // binary search to find the 
            mid= low+(high-low)/2;
            if(arr[mid]==x){
                flag= true;
                result[point]=arr[mid];
                point++;
                
                break;
            }
            else if(arr[mid]>x) high= mid-1;
            else low= mid+1;
        }
        int lb=high;
        int hb=low;
        if(flag==true){
            lb=mid-1;
            hb=mid+1;
        }
        int d1, d2; //will use to store the difference between x and lb and hb
        while(point<k && lb>= 0 && hb<=n-1){
            d1= abs(x-arr[lb]);
            d2= abs(x-arr[hb]);
            if(d1<=d2){
                result[point]=arr[lb];
                lb--;
                point++;
            }else{
                result[point]=arr[hb];
                hb++;
                point++;
            }
        }
        if(lb<0){
            while(point<k){
                result[point]=arr[hb];
                hb++;
                point++;
            }
        }if(hb>n-1){
            while(point<k){
                result[point]=arr[lb];
                lb--;
                point++;
            }
        }
        
        sort(result.begin(),result.end());
        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
