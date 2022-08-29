//code in cpp
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
      int index = 1;
        for(int start = 0, i = start + 1; i <= sentence.size(); i ++)
            if(i == sentence.size() || sentence[i] == ' '){
                string word = sentence.substr(start, i - start);
                if(searchWord.size() <= word.size() && word.substr(0, searchWord.size()) == searchWord)
                    return index;
                index ++;

                start = i + 1;
                i = start;
            }
        return -1;   
        
    }
};
