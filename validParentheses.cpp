Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
  
Solution : 

bool isValid(string s) {
        stack<char> str;
        for(int i=0; i<s.length(); i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                str.push(ch);
            }
            else
            {
                if(!str.empty())
                {
                    char top=str.top();
                    if(ch==')' && top=='(' || 
                        ch=='}' && top=='{' ||
                        ch==']' && top=='[')
                        {
                            str.pop();
                        }
                        else
                        {
                            return false;
                        }
                }
                else
                {
                    return false;
                }
            }
        }
        if(str.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
