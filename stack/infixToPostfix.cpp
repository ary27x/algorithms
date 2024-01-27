#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

int main()
{
std::cout << "Enter the infix expression : " << std::endl;
std::string data;
std::stack <char> operator_stack;
std::unordered_map <char , int> operatorPrecedence = {
    {'+',0},
    {'-',0},
    {'*',1},
    {'/',1},
    {'%',1}, 
};


std::cin >> data;
std::string result = "";
char operator_buffer;
for (int val : data)
{
    if (val >= 48 && val <= 57) result+=val;
    // 42 | 43 | 45 | 47
    if (val == 37 || val == 42 || val == 43 || val == 45 || val == 47)
    {
        operator_buffer = (char) val;
        while (true){
         if (operator_stack.size() == 0) {operator_stack.push(operator_buffer); break;}
     else if (operatorPrecedence[operator_stack.top()] >= operatorPrecedence[operator_buffer])
     {result+=operator_stack.top(); 
      operator_stack.pop();
     }
     else {operator_stack.push(operator_buffer); break;}
        }
    
    }
}


while (operator_stack.size() != 0)
{
 result+=operator_stack.top();
 operator_stack.pop();
}

std::cout << "this is the result : " << result;


return 0;
}