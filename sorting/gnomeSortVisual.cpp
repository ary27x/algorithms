#include <iostream>
#include <windows.h>
using namespace std;
// gnome sort implements the concept of insertion sort without using double loops
// this is like insertion sort but terrible



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
printArray2(a , length , i , i - 1);

i++;
}
else
{
printArray2(a , length , i , i - 1);

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






int main()
{
int sampleArray[] = { 3, 28, 6, 17, 33, 32, 22, 13, 30, 24, 16, 35, 20, 4, 12, 23, 25, 31, 27, 21, 14, 10, 15, 8, 11, 7, 26, 5, 29, 9, 18, 34, 1, 19, 2};

int size = sizeof (sampleArray) / sizeof  (int);

printArray(sampleArray , size);

// function call 
gnomeSort(sampleArray,size);

printArray(sampleArray , size);

return 0;
}