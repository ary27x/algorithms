#include <iostream>
using namespace std;

void selectionSort(int a[] , int length)
{


// this algorithm will SELECT the smallest element from the unsorted array in every iteration and then put that 
// element in the first place 

int min , i , j;
for (i  = 0; i < length - 1 ;i++)
{
min = i ; // assume that the ith element is the minimum element in every iteration 

for (j = i + 1 ; j < length; j++) // the iteration of j starts just after i , hence j = i + 1 
{
if (a[j] < a[min]) //  we check for the least element 
{
min = j; //  this would be our new minimum index
}
}

// once the inner iteration loop is done , we check for change in the value of min
// if there is a change, the values are swapped
if (min != i)
{
swap (a[min] , a[i]); // we use the generic swap function
}

}
}


// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~

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
selectionSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}