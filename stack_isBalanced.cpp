#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp)
{
    stack<char> st;

    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            st.push(exp[i]);
        }

        // else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
        //     if(st.empty())
        //         return false;
        //     else if(st.top() != '(' || st.top() != '{' || st.top() != '[')
        //         return false;
        //     else 
        //         st.pop();
        // }

        else if(exp[i] == ')')
        {
            if(st.empty())
                return false;
            else if(st.top() != '(')
                return false;
            else 
                st.pop();
        }
        else if(exp[i] == '}')
        {
            if(st.empty())
                return false;
            else if(st.top() != '{')
                return false;
            else 
                st.pop();
        }
        else if(exp[i] == ']')
        {
            if(st.empty())
                return false;
            else if(st.top() != '[')
                return false;
            else 
                st.pop();
        }
    }
    if(st.empty())
        return true;
    else
        return false;

}
int main()
{
    string exp = "{(a+b)*(c-d)}[[]]{}{[()]}";


    cout << isBalanced(exp)<<"\n";
    return 0;
}
