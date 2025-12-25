/*
Problem: Just One Mismatch
Link: https://www.geeksforgeeks.org/problems/just-one-mismatch1714/1
Date: 2025-12-25
*/

class Solution {
  public:
    string isStringExist(vector<string> arr, int N, string S) {
        
        for (int i = 0; i < N; i++) {
            // Length must be same
            if (arr[i].size() != S.size())
                continue;

            int diff = 0;
            for (int j = 0; j < S.size(); j++) {
                if (arr[i][j] != S[j])
                    diff++;

               
                if (diff > 1)
                    break;
            }

        
            if (diff == 1)
                return "True";
        }
        
        return "False";
    }
};

