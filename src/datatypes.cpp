#include "datatypes.h"
#include <iostream>

/**
 * @version 0.1
 * @author Vladimir Tolstov (vladimir.tolstov@selfip.ru)
 * @date 2023-01-03
 * @copyright Copyright (c) 2023
*/

using namespace DataTypes;

/* Vector2El - (num1, num2) */
Vector2El::Vector2El(int a = 0, int b = 0)
{
    match.x = a;
    match.y = b;
};

vector2el Vector2El::get()
{
    return match;
};

void Vector2El::set(int a = 0, int b = 0)
{
    match.x = a;
    match.y = b;
};

int Vector2El::sum()
{
    return match.x + match.y;
};

int Vector2El::fminuss()
{
    return match.x - match.y;
};

int Vector2El::sminusf()
{
    return match.y - match.x;
};

int Vector2El::multi()
{
    return match.x * match.y;
};

int Vector2El::fdivides()
{
    return match.x / match.y;
};

int Vector2El::sdividef()
{
    return match.y / match.x;
};

int Vector2El::power()
{
    int result = 1;

    for (int i = 0; i < match.y; i++)
    {
        result *= match.x;
    }

    return result;
};

vector3el Vector2El::addel(int n)
{
    vector3el match3el;
    match3el.x = match.x;
    match3el.y = match.y;
    match3el.z = n;

    return match3el;
};

/* Vector3El - (num1, num2, num3) */
Vector3El::Vector3El(int a = 0, int b = 0, int c = 0)
{
    match.x = a;
    match.y = b;
    match.z = c;
};

vector3el Vector3El::get()
{
    return match;
};

void Vector3El::set(int a = 0, int b = 0, int c = 0)
{
    match.x = a;
    match.y = b;
    match.z = c;
};

int Vector3El::sum()
{
    return match.x + match.y + match.z;
};

int Vector3El::multi()
{
    return match.x * match.y * match.z;
};

vector2el Vector3El::rmlastel()
{
    vector2el match2el;
    match2el.x = match.x;
    match2el.y = match.y;

    return match2el;
};