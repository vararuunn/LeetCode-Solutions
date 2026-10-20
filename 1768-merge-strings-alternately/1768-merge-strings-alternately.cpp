class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge="";
        int i=0;
        int j=0;
        while(i<word1.length()&&j<word2.length()){
            merge=merge+word1[i];
            merge=merge+word2[j];
            i++;
            j++;
        }
        while(i<word1.length())
        {
            merge=merge+word1[i];
            i++;
        }
        while(j<word2.length())
        {
        merge=merge+word2[j];
        j++;
        }
    return merge;
    }
};