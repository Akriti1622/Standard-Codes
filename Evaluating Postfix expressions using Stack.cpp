//Evaluating Postfix expressions using Stack


#include<bits/stdc++.h>
using namespace std;

int infixToPostfix(string s)
{
    stack<int> st;
    int l = s.length();
    for(int i = 0; i < l; i++)
    {
        // If the scanned character is an operand,
        if(s[i]==' ')
            continue;
        else if(s[i] >= '0' && s[i] <= '9')
        {
            int num=0;
            while(s[i] >= '0' && s[i] <= '9')
            {
                num=num*10+(s[i]-'0');
                i++;
            }
            st.push(num);
        }
        // If an operator is scanned
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch (s[i])
            {
                case '+': st.push(op2+op1); break;
                case '-': st.push(op2-op1); break;
                case '*': st.push(op2*op1); break;
                case '/': st.push(op2/op1); break;
                case '^': st.push(pow(op2, op1)); break;
            }
        }
    }
    return st.top();
}
int main()
{
    string exp;
    getline(cin, exp);
    cout<<infixToPostfix(exp);
    return 0;
}
