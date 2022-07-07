// Array is used to group a bunch of data instead of creating lots of
// variables. One of pros is you don't set variables manually which need
// give each of data a name.
// Array is just a pointer to the beginning of the array.

// you can use the standard array which is much safer because it has
// bound checking and can get size of the array.

#include <iostream>
#include <array>

int main()
{
    int example[5];
    example[0] = 2;
    example[4] = 4;

    for (int i = 0; i < 5; i++)
        example[i] = 2;

    int* ptr = example;
    (*ptr) = 5;
    *(ptr+3) = 3;

    for (int i = 0; i < 5; i++)
        std::cout << *(ptr + i) << std::endl;

    int* another = new int[5]; // create on the heap.
    delete[] another;

    std::array<int,5> arr2;
    arr2.at(3) = 10;
    std::cout << arr2.at(3) << std::endl;
    for (int i = 0; i < arr2.size(); i++)
        std::cout << arr2.at(i) << std::endl;


    std::cin.get();
    return 0;
}
