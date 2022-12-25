#include "../src/datatypes.h"
#include <iostream>

int main()
{
    DataTypes::Pair *pair = new DataTypes::Pair(0, 0);

    int x, y;
    std::cin >> x >> y;

    pair->set(x, y);

    std::cout << "sum: " << pair->sum() << std::endl;
    std::cout << "power: " << pair->power() << std::endl;
    std::cout << "fminuss: " << pair->fminuss() << std::endl;
    std::cout << "fdivides: " << pair->fdivides() << std::endl;

    return 0;
}