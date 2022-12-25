#include "datatypes.h"
#include <iostream>

using namespace DataTypes;

// class Pair
// {
// private:
    // pair match;

// public:
    Pair::Pair(int a = 0, int b = 0)
    {
        match.x = a;
        match.y = b;
    };

    pair Pair::get()
    {
        return match;
    };

    void Pair::set(int a = 0, int b = 0)
    {
        match.x = a;
        match.y = b;
    };

    int Pair::sum()
    {
        return match.x + match.y;
    };

    int Pair::fminuss()
    {
        return match.x - match.y;
    };

    int Pair::sminusf()
    {
        return match.y - match.x;
    };

    int Pair::multi()
    {
        return match.x * match.y;
    };

    int Pair::fdivides()
    {
        return match.x / match.y;
    };

    int Pair::sdividef()
    {
        return match.y / match.x;
    };

    int Pair::power()
    {
        int result = 1;

        for (int i = 0; i < match.y; i++)
        {
            result *= match.x;
        }

        return result;
    };
// };