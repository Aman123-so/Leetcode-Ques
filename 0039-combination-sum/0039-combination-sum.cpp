class Solution {
public:
    void fun(vector<int>&a, int n , int idx, vector<int>&diary, int sum, vector<vector<int>>&res, int target){
    if(idx==n){
        if(sum==target)
        res.push_back(diary);
        return ;

    }

    //choice1   nhi lena hai 
     fun(a,n,idx+1, diary, sum ,res,target);
     
     //choice 2  jn lena hai

     if(a[idx]+sum <=target){
        diary.push_back(a[idx]);
        sum += a[idx];
        fun(a,n, idx, diary, sum ,res,target);
        diary.pop_back();
        sum -=a[idx];
     }
     return;
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        int n= candidates.size();
        vector<int >diary;
        vector<vector<int>>res;

        fun(candidates, n,0, diary, sum , res, target);
        return res;
    }
};