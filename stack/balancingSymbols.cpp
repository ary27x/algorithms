#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string data;
    std::cout << "Enter the data : " << std::endl;
    std::cin >> data;
    std::vector<int> checkTable;
    int temp,req;
    for (char c : data)
    {
        temp = c;
        if (temp == 91 || temp == 40 || temp == 123)
            checkTable.push_back(temp);
        else if (temp == 93 || temp == 41 || temp == 125)
            {
                if (checkTable.size() == 0)
                {
                    std::cerr << "Error : The entered data is not balanced";
                    exit(1);
                }
                req = (temp == 41) ? temp - 1 : temp - 2;
                if (req != checkTable.back())
                {
                    std::cerr << "Error : The entered data is not balanced";
                    exit(1);
                }   
                checkTable.pop_back();
            }

    }
        
    if (checkTable.size() != 0)
        std::cerr << "Error : the entered data is not balanced ";
    else
        std::cout << "Success : the entered data is balanced";
    
    return 0;
}