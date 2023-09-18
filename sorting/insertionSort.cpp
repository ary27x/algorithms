#include <iostream>
using namespace std;
void printArray (int a[] , int size)
{
int i;
cout << endl;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}



// the array is split into two parts , sorted and the unsorted part 
// the sorted array first starts with only the first , that is the left most element
// we iterate once from the first to the last element , but for every iteration ,that is ,for every element we put it
// in the correct place in the sorted array 

// this works the best for array that are already partially sorted



void insertionSort (int a[] , int length)
{

int i , j , key;

for (i = 1 ; i < length  ; i++) //  we assume that the 0th element is already in the sorted array 
// hence the outer loop starts from 1
{
key = a[i]; // this is the value which is to be inserted  
j = i - 1; // this is the left adjacent index of the key , this is the place the comparison with key would start from

while (j >= 0 && a[j] > key)
{
a[j+1] = a[j]; //  we shift the larger value to the right
j--;
}
a[j+1] = key; // if value of j is less than zero or the the jth element is smaller that the key value , then the key
// value should be on the adjacent right of it

}


}




// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~

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
insertionSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}