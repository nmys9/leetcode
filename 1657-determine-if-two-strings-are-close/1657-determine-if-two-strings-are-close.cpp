class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<word1.size();i++){
            char c1=word1[i];
            char c2=word2[i];
            mp1[c1]++;
            mp2[c2]++;
        }

        vector<int> v1;
        vector<int> v2;
        for(auto elem:mp1){
            if(mp2.find(elem.first)==mp2.end())return false;
            v1.push_back(elem.second);
        }

        for(auto elem:mp2){
            if(mp1.find(elem.first)==mp1.end())return false;
            v2.push_back(elem.second);
        }
        return v1==v2;

    }
};