#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
std::cout << "Enter the postfix expression : " << std::endl;
string data;
int buffer;
std::vector <int> value;
std::cin >> data;

for (int current : data)
{

if (current >= 48 && current <= 57) value.push_back(current-48);

else if (current == 37 || current == 42 || current == 43 || current == 45 || current == 47)
{
if (value.size() < 2)
{
std::cout << "Error : out of operands "<< std::endl;
exit(1);
}

if (current == 43)
{
    std::cout << "this is the op " ;
    std::cout << value[value.size()-2] << " + " << value[value.size()-1]  ;
    buffer = value[value.size()-2] + value[value.size()-1]  ;

    std::cout << std::endl;


}

else if (current == 45)
{
    std::cout << "this is the op " ;
    std::cout << value[value.size()-2] << " - " << value[value.size()-1]  ;
    buffer = value[value.size()-2] - value[value.size()-1]  ;
    std::cout << std::endl;
    
}

else if (current == 42)
{
  std::cout << "this is the op " ;
std::cout << value[value.size()-2] << " * " << value[value.size()-1] << std::endl;
    buffer = value[value.size()-2] * value[value.size()-1]  ;
          
}
else if (current == 37)
{

  std::cout << "this is the op " ;
  std::cout << value[value.size()-2] << " % " << value[value.size()-1] << std::endl;
    buffer = value[value.size()-2] % value[value.size()-1]  ;
    

}
else
{
      std::cout << "this is the op " ;
      std::cout << value[value.size()-2] << " / " << value[value.size()-1] << std::endl  ;
    buffer = value[value.size()-2] / value[value.size()-1]  ;
    
}

value.pop_back(); value.pop_back();
value.push_back(buffer);

}
 else 
{
std::cout << " do not supply non sense " << std::endl;
exit(1);
}

}

if (value.size() != 1)
{
std::cout << "Error in the notation that is supplied: " << std::endl;
std::cout << "this is the radical size : " << value.size() << std::endl;
exit(1);
}

std::cout << "This is the result : " << value.at(0) << std::endl;


return 0;
}