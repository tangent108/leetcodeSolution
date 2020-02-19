/*


There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

*/

#include<iostream>
#include<vector>

using namespace std;

 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median =0.0;
        int n1 = nums1.size(),n2 = nums2.size();
        int i=0,j=0,k=0;
       vector<int> v;
        k = n1 + n2;
        
        while(i < n1 && j < n2){
            if( nums1[i] <= nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i!=n1){
            v.push_back(nums1[i]);
            i++;
        }
        while(j!=n2){
            v.push_back(nums2[j]);
            j++;
        }
        if(k%2==0){
            int index = k/2;
            median = (v[index]+ v[index-1])/2.0;
            return median;
        }
        else{
            return v[k/2];
        }
        
    }


int main(){
    vector<int> v1={1,2};
    vector<int > v2 ={3,4};
    cout << findMedianSortedArrays(v1,v2)<<endl;
}

