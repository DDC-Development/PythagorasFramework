// Pythagoras Framework
// (C) DDC Dev, 2022

// Pythagoras namespace and struct

#include <cmath>

struct Pythagoras
{
    float CalculateC(float A, float B)
    {
        // c^2 = a^2 + b^2
        return sqrt((A*A)+(B*B));
        // This returns the value of C, not the value of a^2 + b^2
    }
    float CalculateA(float C, float B)
    {
        // c^2 = a^2 + b^2
        // c^2 - b^2 = a^2
        return sqrt((C*C)-(B*B));
        // This returns the value of A, not the value of c^2 - b^2
    }
    float CalculateB(float C, float A)
    {
        // c^2 = a^2 + b^2
        // c^2 - a^2 = b^2
        return sqrt((C*C)-(A*A));
        // This returns the value of B, not the value of c^2 - a^2
    }
};
