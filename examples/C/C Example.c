// C Example


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

#include "../../src/Pythagoras.h" // You would use a different path, depending on
                                    // where you saved the file
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Pythagoras py;

    double c = py.CalculateC(6.25, 5);    // Should be ~8m
    double a = py.CalculateA(8, 5);       // Should be ~6.25m
    double b = py.CalculateB(8, 6.25);    // Should be ~5m

    printf("%lf", c);            // Outputs: 8.003905  ≈    8
    printf("\n");
    printf("%lf", a);            // Outputs:  6.244998 ≈ 6.25
    printf("\n");
    printf("%lf", b);            // Outputs: 4.993746  ≈    5
    printf("\n");
    return 0;
}