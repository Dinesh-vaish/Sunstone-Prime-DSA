#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 1. Combine arrays
        // We use a temporary vector to avoid modifying the original inputs
        vector<int> combined = nums1;
        for(int x : nums2) {
            combined.push_back(x);
        }
        
        // 2. Sort the combined array
        sort(combined.begin(), combined.end());
        
        int n = combined.size();
        if (n % 2 != 0) {
            // Odd total elements: Return the middle element
            return combined[n / 2];
        } else {
            // Even total elements: Return average of the two middle elements
            // Dividing by 2.0 ensures we get a decimal (double) result
            return (combined[n / 2 - 1] + combined[n / 2]) / 2.0;
        }
    }
};

// The main function to execute the code
int main() {
    Solution sol;
    
    // Example test case
    vector<int> n1 = {1, 3};
    vector<int> n2 = {2};
    
    double result = sol.findMedianSortedArrays(n1, n2);
    
    cout << "The median is: " << result << endl;

    return 0;
}