#include <iostream>
#include <stdbool.h>

using namespace std;




void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}

void cocktailShakerSort (int a[] , int length)
{

bool swapFlag = true;
int i;
while (swapFlag)
{
swapFlag = false;

for (i = 0 ; i< length - 1 ; i++)
{

if (a[i] > a[i+1])
{
swap(a[i] , a[i+1]);
swapFlag = true;

}

}
if (!(swapFlag))
{
break;
}
swapFlag = false;

for (i = length - 1 ; i >= 1 ; i--)
{

if (a[i] < a[i-1])
{

swap(a[i] , a[i-1]);
swapFlag = true;



}

}

}


}


// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~

/*
when the swap function is below the actual sorting algorithm , it works fine, but when the swap function is above the sorting algorithm
there seems to be an issue ,maybe because of how data is passed in both the cases idk 
*/
void swap (int x, int y)
{

int temp = x;
x = y;
y =temp;

}

int main()
{
int sampleArray[] = {2,6,4,1,7,9,5,3,8};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
cocktailShakerSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}