#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

// ~~~~~~~~~~~~~~~~~~ BOILER PLATE CODE ~~~~~~~~~~~~~~



void printArray (int a[] , int size)
{

system("cls");


int i,j;
int code = 219;
for (i = 0 ; i < size ; i++)
{

for (j = 1 ; j<=a[i] ; j++)
{
printf("%c" , code );
}

cout << endl;
}
cout << endl;

}





void printArray2 (int a[] , int size , int x , int y)
{

system("cls");


int i,j;
int code = 219;
for (i = 0 ; i < size ; i++)
{
if ((x != y ) && ((i == x) || (i == y)))
{
for (j = 1 ; j<=a[i] ; j++)
{
printf("\033[1;31m%c\033[1;37m" , code );
}
}
else
{
for (j = 1 ; j<=a[i] ; j++)
{
printf("%c" , code );
}
}
cout << endl;
}
cout << endl;
Sleep(100);
char pause;
//scanf("%c" , &pause);
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
printArray2 (a , length , i , j);
a[j+gap] = a[j];
j-=gap;
}
a[j+gap] = key;
}

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
int sampleArray[] = { 3, 28, 6, 17, 33, 32, 22, 13, 30, 24, 16, 35, 20, 4, 12, 23, 25, 31, 27, 21, 14, 10, 15, 8, 11, 7, 26, 5, 29, 9, 18, 34, 1, 19, 2};
int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
shellSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}