#include <iostream>
#include <stdbool.h>
#include <windows.h>
using namespace std;


void printArray3 (int a[] , int size)
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
Sleep(10);
char pause;
//scanf("%c" , &pause);
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
printArray2 (a , length , i , i+1);
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
printArray2 (a , length , i , i-1);
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
int sampleArray[] = { 3, 28, 6, 17, 33, 32, 22, 13, 30, 24, 16, 35, 20, 4, 12, 23, 25, 31, 27, 21, 14, 10, 15, 8, 11, 7, 26, 5, 29, 9, 18, 34, 1, 19, 2};

int size = sizeof (sampleArray) / sizeof  (int);

cout << "this is the array before sorting " << endl;
printArray(sampleArray , size);

// function call 
cocktailShakerSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray3(sampleArray , size);

return 0;
}