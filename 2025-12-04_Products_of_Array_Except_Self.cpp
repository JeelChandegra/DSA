/*
Problem: Products of Array Except Self
Link: https://neetcode.io/problems/products-of-array-discluding-self/question
Date: 2025-12-04
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        vector<int>x(v);
   vector<int>s(v.size(),1 );

   x[0]=1;
   for( int i=1;i<v.size();i++){
    x[i]=x[i-1]*v[i-1];
        
   }


for(int i=v.size()-2;i>=0;i--){
    s[i]=s[i+1]*v[i+1];
}

  vector<int>res(v.size());
  for(int i=0;i<v.size();i++){

    res[i]=x[i]*s[i];
  }
  return res;

    }
};

