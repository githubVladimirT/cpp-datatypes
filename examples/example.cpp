#include "../src/datatypes.h"
#include <iostream>

int main()
{
    int n = 10;
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

    
    DataTypes::Vector2El *updatedvec2el = new DataTypes::Vector2El(vec3el->rmlastel().x, vec3el->rmlastel().y);
    DataTypes::Vector3El *updatedvec3el = new DataTypes::Vector3El(vec2el->addel(n).x, vec2el->addel(n).y, vec2el->addel(n).z);

    std::cout << "|=======================================================|" << std::endl;
    std::cout << "| Vector3El:" << std::endl;
    std::cout << "x: " << updatedvec3el->get().x << std::endl;
    std::cout << "y: " << updatedvec3el->get().y << std::endl;
    std::cout << "z: " << updatedvec3el->get().z << std::endl;
    std::cout << "| Vector2El:" << std::endl;
    std::cout << "x: " << updatedvec2el->get().x << std::endl;
    std::cout << "y: " << updatedvec2el->get().y << std::endl;
    std::cout << "|=======================================================|" << std::endl;

    return 0;
};
