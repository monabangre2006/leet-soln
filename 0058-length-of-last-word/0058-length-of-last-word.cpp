class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            words.push_back(word);
        }
        
        return  words[words.size()-1].length();
    }
};