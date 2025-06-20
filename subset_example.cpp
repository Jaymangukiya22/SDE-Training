#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate all subsets of a given set
void generateSubsets(vector<int>& nums, vector<int>& current, int index) {
    // Base case: if we reached the end of the array
    if (index == nums.size()) {
        cout << "{ ";
        for (int num : current) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Recursive case: two choices

    // 1. Exclude the current element
    generateSubsets(nums, current, index + 1);

    // 2. Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1);
    
    // Backtrack: remove the last element
    current.pop_back();
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> current;

    cout << "All subsets of the set {1, 2, 3} are:\n";
    generateSubsets(nums, current, 0);

    return 0;
}
