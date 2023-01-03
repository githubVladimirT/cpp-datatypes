#include "../src/datatypes.h"
#include <iostream>

int main()
{
    // creating vector of 2 elements and vector of 3 elements
    DataTypes::Vector2El *vec2el = new DataTypes::Vector2El(0, 0);
    DataTypes::Vector3El *vec3el = new DataTypes::Vector3El(0, 0, 0);

    // input values for vectors
    int x1, y1;
    std::cout << "-- Vector2El\n";
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;

    int x2, y2, z2;
    std::cout << "-- Vector3El\n";
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    std::cout << "z2: ";
    std::cin >> z2;

    // put variables in vectors
    vec2el->set(x1, y1);
    vec3el->set(x2, y2, z2);

    // output sum of elements in vector of 2 elements
    std::cout << "-vec2el- SUM: " << vec2el->sum() << std::endl;
    // output multiply of elements in vector of 2 elements
    std::cout << "-vec2el- MULTIPLY: " << vec2el->multi() << std::endl;
    // output power of elements in vector of 2 elements
    std::cout << "-vec2el- POWER: " << vec2el->power() << std::endl;

    // output sum of elements in vector of 3 elements
    std::cout << "-vec3el- SUM: " << vec3el->sum() << std::endl;
    // output multiply of elements in vector of 3 elements
    std::cout << "-vec3el- MULTIPLY: " << vec3el->multi() << std::endl;

    return 0;
};
