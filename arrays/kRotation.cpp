#include <iostream>
#include <vector>

void display(std::vector <int> tbd)
{
for (auto &x : tbd)
std::cout << x << " ";
std::cout << std::endl;
}

int main()
{

std::vector <int> arr1 = {1,2,3,4,5,6,7};


display(arr1);

int k;
std::cout << "Enter the value of k : " << std::endl;
std::cin >> k;

k = k % arr1.size();

int i;

std::vector <int> buffer;

for (i = 0 ; i < k ; i++)
buffer.push_back(arr1[i]);


int counter = 0;
while (i < arr1.size())
{
arr1[counter] = arr1[i];
counter++;
i++;
}

i = arr1.size() - buffer.size();

counter = 0;
while (i < arr1.size())
{
arr1[i] = buffer[counter];
counter++;
i++;
}

display(arr1);

return 0;
}