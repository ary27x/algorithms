#include <iostream>
#include <math.h>
using namespace std;

// shell is just the optimized version of insertion sort

// this works by sub indexing the given array to smaller array using gaps

/* Calculation of Gap:

let the length of an array be n :

g1 = floor (n / 2^1);
g2 = floor (n / 2^2);
g3 = floor (n / 2^3);
.
.
.
gx = floor (n / 2^x); -> such that the value of gx is 1

in between ,for each gap gx, the insertion sort algorithm is called x times, the starting index of the call being 0,
which gets incremented after every call


*/
void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}


void insertionSort (int a[] , int length , int gap)
{

cout << endl << "Running for Gap  : " << gap << endl;


int k;
for (k = 0 ; k < gap ; k++ )
{


int i , j;
int key;
for (i = k + gap; i < length ; i+=gap)
{
key = a[i];
j = i - gap;
while (j >=k && a[j] > key)
{
a[j+gap] = a[j];
j-=gap;
}
a[j+gap] = key;
}
printArray (a , length);
}

}


void shellSort (int a[] , int length)
{

int gap = floor(length/2);
while (gap > 1)
{
insertionSort (a , length , gap);
gap = floor(gap / 2);
}
insertionSort (a , length , 1); //  we call the final insertion sort for gap 1, that is , the entire array
}
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
int sampleArray[] = {64, 20, 50, 33, 72, 10, 23, 7, 4};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
shellSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}