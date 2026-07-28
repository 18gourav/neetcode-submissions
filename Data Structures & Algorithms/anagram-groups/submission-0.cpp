class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sabse pehle ek map banao
        unordered_map<string,vector<string>> mp;

        for(string word: strs){

            //ab freq array banalo
            vector<int> freq(26);

            for(char ch: word){
                freq[ch - 'a']++;
            }

            //ab isko map ma dalna ke liye store karo
            string key = "";
            for(int i=0; i<26;i++){
                key += "#";
                key += to_string(freq[i]);
            }

            mp[key].push_back(word);
        }


        vector<vector<string>> ans;
        for(auto word: mp){
            ans.push_back(word.second);
        }

        return ans;
    }
};
