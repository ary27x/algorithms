// just a simple modification to the classic count sort , which support the algorithm for negative values too 
void countSort(int * arr , int n)
{
    int minv = getMin (arr , n);
    int offset = 0;
    if (minv < 0)
        offset = offsetArray(arr , n , minv);
    int maxv = getMax(arr , n);
    int * counter = new int[maxv + 1];
    for (int i = 0 ; i < n ; i++)
        counter[arr[i]]++;
    int writeCounter = 0;
    for (int i = 0 ; i < maxv + 1 ; i++)
    {
        if (*(counter + i) != 0)
            while (counter[i]--)
                arr[writeCounter++] = i - offset;
            
    }
}

// these are all the helper functions

int getMax(int * arr , int n) // this is used to get the max value of the array 
{
    int maxv = *arr;
    for (int i = 0 ; i < n ; i++)
    {
        if (*(arr + i) > maxv)
            maxv = *(arr + i);
    }
    return maxv;
}

int getMin(int * arr , int n) // this is used to get the min value of the array 
{
    int minv = *arr;
    for (int i = 0 ; i < n ; i++)
        if (*(arr + i) < minv)
            minv = *(arr + i);
    return minv;
}

int offsetArray (int * arr , int n , int minv) // this is the offset function which is called if there is any negative number present in the array 
{
    minv *= -1; // changing the polarity of minv , since it was negative
    for (int i = 0 ; i < n ; i++)
        *(arr + i) = *(arr + i) + minv; // offsetting all the array values
    return minv; // returning the minv for further processing
}


