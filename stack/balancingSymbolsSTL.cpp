// just the standard program , just we use the stack stl  instead of using the array

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void throwError()
{
    cerr << "Error : the given string is not balanced " << endl;
    exit(1);
}

int main()
{
    string data;
    stack <int> st;
    int current , req;
    
    cout << "Enter the data : " << endl;
    getline(cin , data);

    for (int current : data)
    {
        if (current == 40 || current == 91 || current == 123)
            st.push(current);
        
        if (current == 41 || current == 93 || current == 125)
        {
            req = (current == 41) ? current - 1 : current - 2;
            if (st.empty() || st.top() != req)
                throwError();
            else
                st.pop();   
        }
    }   
    if (st.size() != 0)
        throwError();
    else
        cout << "Success : the given string is balanced " << endl;
}