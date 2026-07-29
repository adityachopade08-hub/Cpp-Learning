// Write:
// int frequency(int arr[], int size, int key);
// Return how many times key appears.

#include<iostream>

int frequency(int arr[], int size, int key)
{
    int count{};

    for(int i=0; i<size ; i++)
    {
        if(arr[i] == key)
        {
            count++ ;
        }
    }
    return count;
}

int main()
{
    int n{};
    std::cout << "Enter number of elements : " ;
    std::cin >> n ;

    std::cout << "Enter elements : \n";
    int arr[n],key{};

    for(int i = 0; i < n ; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "\nWhich element's count do you want : " ;
    std::cin >> key ;

    std::cout << "\nThe number "<<key<<" appears "<<frequency(arr,n,key)<<" times" ;
    return 0;
}

//Time complexity = O(n)
//Space complexity = O(1)