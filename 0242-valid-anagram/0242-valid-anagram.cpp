class Solution {
public:
    vector<int> frequencyArray(string arr){
        vector<int> freq(26,0);
        for(int i=0;i<arr.size();i++)
            freq[arr[i]-'a']++;
        return freq;
    }
    bool isAnagram(string s, string t) {
        vector<int> ss=frequencyArray(s);
        vector<int> tt=frequencyArray(t);

        return ss==tt;
    }
};