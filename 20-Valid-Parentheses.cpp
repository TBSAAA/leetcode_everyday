class Solution {
public:
    bool isValid(string s) {
        if(s.size() %2 != 0)
            return false;
        stack<char> wait_list;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                wait_list.push(s[i]);
            }else if(s[i] == ')' && !wait_list.empty() && wait_list.top() == '('){
                wait_list.pop();
            }else if(s[i] == ']' && !wait_list.empty() && wait_list.top() == '['){
                wait_list.pop();
            }else if(s[i] == '}' && !wait_list.empty() && wait_list.top() == '{'){
                wait_list.pop();
            } else
                return false;
        }
        return wait_list.empty();
    }
};
