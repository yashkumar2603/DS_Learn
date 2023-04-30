class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_counter=0;
        for(int i=0; i<sentences.size(); i++)
        {
            if(count_words(sentences.at(i)) > max_counter)
            {
                max_counter=count_words(sentences.at(i));
            }
        }
        return max_counter;
    }
    int count_words(string str)
    {
        int counter=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
            {
                counter++;
            }
        }
        return counter+1;
    }
};