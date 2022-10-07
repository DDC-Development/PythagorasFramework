// Pythagoras Framework
// (C) DDC Dev, 2022

// Pythagoras namespace and struct

#include <cmath>

namespace Pythagoras
{
    class TheoremFunctions
    {
    public:
        TheoremFunctions(){}
        ~TheoremFunctions(){}
        double CalculateC(double A, double B)
        {
            // c^2 = a^2 + b^2
            return sqrt((A*A)+(B*B));
            // This returns the value of C, not the value of a^2 + b^2
        }
        double CalculateA(double C, double B)
        {
            // c^2 = a^2 + b^2
            // c^2 - b^2 = a^2
            return sqrt((C*C)-(B*B));
            // This returns the value of A, not the value of c^2 - b^2
        }
        double CalculateB(double C, double A)
        {
            // c^2 = a^2 + b^2
            // c^2 - a^2 = b^2
            return sqrt((C*C)-(A*A));
            // This returns the value of B, not the value of c^2 - a^2
        }
    };
}
