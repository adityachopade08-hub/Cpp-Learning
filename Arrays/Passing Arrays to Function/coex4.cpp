// Write:
// double average(int arr[], int size);
// Return the average of all elements.

#include<iostream>

double average(int arr[], int size)
{
    int sum{};
    double avg{};

    for(int i=0; i<size; i++)
    {
        sum += arr[i] ;
    }

    avg =(double) sum/size ;

    return avg ;
}

int main()
{
    int arr[8] = {23,45,67,89,10,29,38,47} ;

    std::cout << "Average of all numbers is " << average(arr, 8) ;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)