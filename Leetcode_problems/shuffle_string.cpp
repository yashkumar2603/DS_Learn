class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        //sort the vector indices.
        /*for(int i=0; i<indices.size(); i++)
        {
            for(int j=0; j<indices.size(); j++)
            {
                if(indices.at(j)<indices.at(i))
            }
        }*/
        string res = s;
        int index;
        for(int i=0; i<indices.size(); i++)
        {
            index = indices.at(i);
            res[index]=s[i];
        }
        return res;
    }
};