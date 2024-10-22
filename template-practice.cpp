#include <iostream>
#include <cassert>


template <typename T>
T max_two(T one, T two)
{
    return (one < two) ? two : one;
}
template <typename T>
T max_three(T one, T two, T three){
    if (one > two){
        if (one > three){
            return one;
        }
        else{
            return three;
        }
    }
    else if (two > three){
        return two;
    }
    else{
        return three;
    }
}

template <typename T>
void swapify(T &one, T &two){
    T tmp{one};
    one = two;
    two = tmp;
}

int main()
{
    assert(max_two(1, 5) == 5);
    assert(max_two(9, 5) == 9);
    assert(max_three(1, 5, 9) == 9);
    assert(max_three(1, 10, 3) == 10);
    int x{5};
    int y{9};

    swapify(x, y);

    std::cout << "X: " << x << "\nY: " << y << std::endl;
    std::cout << "All tests have passed! :) \n";
}