#include <iostream>
using namespace std;
// time compplexity O (n log n)
// using divide and conquer , we recursively divide the array from the middle , until we are left with the individual 
// elements , which we then sort and merge the sub array  to get the sorted array 


// remember that there is no actual divison of the array that is happening
// the "division" is happening by index , that is , for an example an array of index 0 to 6
// diving the array into two would be defining left = 0 , right = 6 and middle = 3
// the the left half is iterating over the index left to middle , that is 0 to 3
// while the right half is iterating over the index middle + 1 to right , that is 4 to 6

void mS_merge(int a[] , int l , int r , int m)
{		
int leftLength  = m-l+1;
int rightLength  = r-m;
int i , j , k ; // counter variables
int tempLeft[leftLength]; //  we create a temp left array 
int tempRight[rightLength]; //  we create a temp right array

// we copy the portion of the main array into the left and the right sub array respectively
for (i = 0 ; i < leftLength ; i++) // copy left array 
{
tempLeft[i] = a [l+i];
}
for (i = 0 ; i < rightLength ; i++) // copy right array 
{
tempRight[i] = a[m+1+i];
}

// now we merge the left and right array and then put them into a main array 
// k is the main array index
// the main array is the first argument in the function call , which is the array a itself
// i is the left array index and j is the right array index

for (i = 0, j = 0 , k = l ; k <= r ; k++) // the value of k is from l to r both inclusive as we only have to deal 
// with this sub array in the first place
{
if ( (i<leftLength) && ((j>=rightLength) || (tempLeft[i]<=tempRight[j]))) // condition1 && (condition2 || condition3)
// condition1 check whether the value of i is within the bound of the left array or not , on failing that test,
// it means that we have exhausted the leftArray , so now we have to copy from the right
// if we have not exhausted the left array , we copy from it when either of the two cases are true:
// 1) the right array in exhausted (condition2)
// 2) the value in the left array in smaller than or equal to the value in the right array (condition3)
// if this compound statement is true , we copy from the left ELSE we copy from the right
{
a[k] = tempLeft[i]; // copy from the left array
i++;
}
else
{
a[k] = tempRight[j]; // copy from the right array 
j++;
}
}
}

void mS_recursion(int a[] , int left , int right)
{
if (left < right) // when we have a single element as an array, this will fail as 0 < length - 1 = 0 < 0 = false
{
int middle = left + (right-left) / 2; // define the middle or the pivot
mS_recursion (a , left , middle); //  we call the recursion on the left hand side
mS_recursion (a , middle + 1 , right); //  we call the recursion on the right hand side

// due to the recursive nature of the above steps , reaching this point means we are left with the individual element
// as the array , hence now we sort and merge the sub array 


mS_merge(a,left , right , middle);
}
}

void mergeSort (int a [] , int length) // this is the wrapper function which would call the recursive divider func
{
mS_recursion (a , 0 , length - 1); // we call the recursive function with the array and the first and last index
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
mergeSort(sampleArray,size);
cout <<endl<< "this is the array after sorting " << endl;
printArray(sampleArray , size);

return 0;
}