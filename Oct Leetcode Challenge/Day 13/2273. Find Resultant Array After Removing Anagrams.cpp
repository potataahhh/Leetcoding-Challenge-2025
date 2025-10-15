class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {

        int n = words.size();
        vector<string> res;
        stack<string> st;
        st.push(words[0]);

        //function to check if words are anagrams

        auto isAnagram = [](string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
};


        for(int i = 1; i < n; i++)
            if(!isAnagram(st.top(), words[i])) st.push(words[i]);
        

        //push the stack elements to res array

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        //reverse because stack elements will be reversed

        reverse(res.begin(), res.end());

        return res;
    }
};
