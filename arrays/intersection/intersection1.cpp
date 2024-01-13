#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{

std::vector <int> arr1 = {1,2,3,4,5,6,7,8};
std::vector <int> arr2 = {4,5,6,7,8,9,10};

std::unordered_map <int , int> valset = {};

for (int &val : arr1)
{
if (valset.find(val) == valset.end())
valset[val] = 1;
else
valset[val]++;
}

for (int &val : arr2)
{
if (valset.find(val) == valset.end())
valset[val] = 1;
else
valset[val]++;
}

std::vector <int> intersection ;

for (auto temp : valset)
{
if (temp.second == 2)
intersection.push_back(temp.first);
}

for (auto &x : intersection)
{
std::cout << x <<  " ";
}

return 0;
}