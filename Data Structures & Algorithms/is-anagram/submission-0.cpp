class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        int freq1[26] = {};

        for(int i=0; i<s.length(); i++){
            freq1[s[i]-'a']++;
        }

        for(int i=0; i<t.length(); i++){
            freq1[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(freq1[i] != 0){
                return false;
            }
        }

        return true;
    }
};
