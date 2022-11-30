// C++ Example


// Okay, let's assume that we have this, below, triangle:
/*

          /|
         / |
~8m (C) /  |
       /   |
      /    | ~5m (B)
     /     |
    /      |
   /_______|
   ~6.25m (A)

*/

// For the sake of this example, let's double check each of the sides

#include "../../src/Pythagoras.hpp" // You would use a different path, depending on
                                    // where you saved the file
#include <iostream>

int main(int argc, char const *argv[])
{
    Pythagoras::TheoremFunctions tf;

    double c = tf.CalculateC(6.25, 5);    // Should be ~8m
    double a = tf.CalculateA(8, 5);       // Should be ~6.25m
    double b = tf.CalculateB(8, 6.25);    // Should be ~5m

    std::cout << c << std::endl; // Outputs: 8.00391  ≈    8
    std::cout << a << std::endl; // Outputs:   6.245  ≈ 6.25
    std::cout << b << std::endl; // Outputs: 4.99375  ≈    5
    return 0;
}