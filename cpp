class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        std::vector<int> leaders;
    if (n == 0) {
        return leaders; // Return an empty vector if the input array is empty
    }

    int max_right = a[n - 1]; // Initialize the maximum as the rightmost element

    // The rightmost element is always a leader
    leaders.push_back(max_right);

    // Iterate from second-to-last element to the first element
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] >= max_right) {
            // If the current element is greater than or equal to the maximum on its right side
            leaders.push_back(a[i]);
            max_right = a[i]; // Update the maximum
        }
    }

    // Reverse the leaders vector to get them in the original order
    std::reverse(leaders.begin(), leaders.end());

    return leaders;



        
    }
};
