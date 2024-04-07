class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int num:arr){
            freq[num]++;
        }
        unordered_set<int> s;
        for(auto it=freq.begin();it!=freq.end();it++){
            s.insert(it->second);
        }
        if(s.size()==freq.size())return true;
        else return false;
    }
};