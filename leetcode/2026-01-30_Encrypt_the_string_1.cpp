/*
Problem: Encrypt the string - 1
Link: https://www.geeksforgeeks.org/problems/encrypt-the-string-10337/1
Date: 2026-01-30
*/



class Solution {
  public:
    string encryptString(string s) {
         string res = "";
        int n = s.size();

       for( int i=0;i<n;i++){
        char curr  =s[i];

        int count=1;

        while(i+1<n && s[i]==s[i+1]){
            count++;
            i++;    
        }

        res+=curr;
        res+=to_string(count);


       }
       reverse(res.begin(), res.end());


        return      res;
        
    }
};
