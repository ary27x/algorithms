#include <iostream>
#include <windows.h>
using namespace std;
// with every iteration of the loop , the largest value in the array bubbles to the top , that is to right hand side

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
Sleep(100);
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
Sleep(10);
char pause;
//scanf("%c" , &pause);
}
void bubbleSort(int a[] , int length)
{

int i , j;

for (i = 0 ; i < length ; i++) // this loop is only used to run the required number of iterations, which in our case
// is the length of the array 
{

for (j = 0 ; j < length - 1 ; j++)
{
//printArray2(a , length , j , j+1);
if (a[j] > a[j+1])
{
printArray2(a , length , j , j+1);

swap(a[j] , a[j+1]);
}
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
int sampleArray[] = { 3, 28, 6, 17, 33, 32, 22, 13, 30, 24, 16, 35, 20, 4, 12, 23, 25, 31, 27, 21, 14, 10, 15, 8, 11, 7, 26, 5, 29, 9, 18, 34, 1, 19, 2};

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