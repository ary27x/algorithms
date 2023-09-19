#include <iostream>
using namespace std;
// gnome sort implements the concept of insertion sort without using double loops
// this is like insertion sort but terrible


void gnomeSort (int a [] , int length)
{

// it is better to use while loop in this case for looping instead for for loop , as in for loop , counter is incremented or decremented 
// irrespective of the code which is run inside the loop block
// but in our case we want to increment or decrement the value of the counter variable depending on the condition check 
// which is inside the loop
int i ;
i = 0;
while (i < length)
{

if ((i == 0 ) || (a[i] >= a[i-1]))
{
i++;
}
else
{
swap(a[i] , a[i-1]);
i--;
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

void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}
int main()
{
int sampleArray[] = {2,6,4,1,7,9,5,3,8};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
gnomeSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}