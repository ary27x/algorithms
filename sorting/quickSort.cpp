#include <iostream>
using namespace std;



int partition (int a[], int left , int right) // this function is responsible for
// finding the pivotIndex in the given array 
// arranging the array elements about that pivotIndex
// returning the pivotIndex to the recursive function for further calls
{
int pivotValue = a[right]; // GENERALLY the pivot index is the last element in the array

// now we have to arrange the elements of the array about the pivot
// values smaller than the pivot are on the left hand side
// while values greater than the pivot are on the right hand side

int i;// this is the counter which will hold the position where the elements which are smaller than the pivot value would be inserted
int  j; // this is the counter which will be used to iterate over the sub array from the left to the right - 1, as the right most value is the key , it is not iterated over

i = left; // the starting value of i is the left most index in the sub array 

for (j = left ; j < right ; j++) 
{
if (a[j] <= pivotValue) // if the value is less than the pivotValue we swap it and insert it in the ith position , which by definition should hold these values
{
swap (a[i] , a[j]);
// now that the ith index hold the smaller value , we increment the value of i to make a new space
i++; 
}
}
// now we put the pivot (a[right]) into proper position
// since we increment the value of i after every time we find smaller value than pivot 
// this means that the all the values of index that are smaller than i contains values which are smaller than pivot value
// so the pivot should be on the ith index 
swap (a[i] , a[right]); 

return i;

}


void qS_recursion (int a [] , int left , int right)
{
if (left < right)
{

int pivotIndex = partition(a , left , right);

// while we recusively call the function we notice that the pivotIndex value is avoided is both the left side call and the right side call 
// this is because the pivot is relatively in the middle of the right and of its left values
qS_recursion (a , left , pivotIndex - 1);
qS_recursion (a , pivotIndex + 1 , right);
}
}

void quickSort (int a[] , int length)
{
qS_recursion (a , 0 , length - 1);
}

// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~
void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}
void swap (int x, int y)
{
int temp = x;
x = y;
y =temp;

}

int main()
{
int sampleArray[] = {2,6,4,1,7,9,5,8,3};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting ~ " << endl;
printArray(sampleArray , size);

// function call 
quickSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}