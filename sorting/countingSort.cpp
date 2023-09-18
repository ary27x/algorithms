#include <iostream>
using namespace std;
// incomplete
void printArray (int a[] , int size)
{
int i;
for (i = 0 ; i < size ; i++)
{
cout << a[i] << " ";
}
cout << endl;
}
int count[9]  = {}; // we define for 1 - 9 that is 10 different characters
void countingSort (int a[] , int length)
{
printArray(count , 9);
int i;
for (i = 0 ; i < length ; i++)
{
count[a[i]-1]++;
}
printArray(count , 9);
for (i = 1 ; i <= 8 ; i++) // iterating through the count array to make the cummualtive array 
{
count[i] += count[i-1];
}
printArray(count , 9);


// now we make the array 
int sortedArray[length];

for (i = length - 1 ; i>=0 ; i++)
{

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
int sampleArray[] = {2,6,2,1,7,5,5,3,6};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
countingSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}