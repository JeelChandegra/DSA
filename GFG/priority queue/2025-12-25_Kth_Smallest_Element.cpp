/*
Problem: K’th Smallest Element
Link: https://www.geeksforgeeks.org/dsa/kth-smallest-largest-element-in-unsorted-array/
Date: 2025-12-25
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    
    // Create a max heap 
    priority_queue<int> pq;

    // Iterate through the array elements
    for (int i = 0; i < arr.size(); i++)
    {
        // Push the current element onto the max heap
        pq.push(arr[i]);

        // If the size of the max heap exceeds k,
        //remove the largest element
        if (pq.size() > k)
            pq.pop();
    }

    return pq.top();
}

int main()
{
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;

    cout << kthSmallest(arr, k);
}

