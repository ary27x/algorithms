#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string data;
    cout << "Enter the data : " << endl;
    getline(cin , data);

    stack <char> dataStack;

    for (char current : data)
    {
        if (dataStack.empty() || dataStack.top() != current)
            dataStack.push(current);
        else
            dataStack.pop();
    }

    string rev = "";
    while (!dataStack.empty())
    {
        rev += dataStack.top();    
        dataStack.pop();
    }

    string ans = "";
    for(int i = rev.size() - 1; i >= 0 ; i--)
        ans += rev[i]; 
    
    cout << "this is the answer : " << ans << endl;

    return 0;
}