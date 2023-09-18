#include <iostream>
using namespace std;
// with every iteration of the loop , the largest value in the array bubbles to the top , that is to right hand side

void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}
void bubbleSort(int a[] , int length)
{

int i , j;

for (i = 0 ; i < length ; i++) // this loop is only used to run the required number of iterations, which in our case
// is the length of the array 
{

for (j = 0 ; j < length - 1 ; j++)
{
if (a[j] > a[j+1])
swap(a[j] , a[j+1]);
}
//printArray(a , length); // on printing we notice that the array was halfway solved during the total loop runtime , 
// hence there is room for some massive optimization :we can add a default true flag which would be set to false
// by the inner flag, only when we have made some swap in the program , else we would quit from the algorithm as 
// no swapping means that the array is sorted
// also in the inner loop , the terminating loop condition could be : j = length - i;

}

}


// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~
/* 
cls && g++ bubbleSort.cpp && a.exe

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
cout << endl;
// function call 
bubbleSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}