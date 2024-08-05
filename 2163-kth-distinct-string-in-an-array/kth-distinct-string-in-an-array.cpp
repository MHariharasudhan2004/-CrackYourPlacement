class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        vector<string>arr1;
        for(auto str:arr){
            freq[str]++;
        }
        for(auto i:arr){
            if(freq[i]==1){
                arr1.push_back(i);
            }
        }
        if(k>arr1.size()){
            return "";
        }else{
            return arr1[k-1];
        }
    }
};