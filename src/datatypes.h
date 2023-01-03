#ifndef datatypes
#define datatypes

/**
 * @version 0.1
 * @author Vladimir Tolstov (vladimir.tolstov@selfip.ru)
 * @date 2023-01-03
 * @copyright Copyright (c) 2023
 */

namespace DataTypes
{

    /* Vector2El - (num1, num2) */
    struct vector2el
    {
        int x;
        int y;
    };
    class Vector2El
    {
    private:
        vector2el match;

    public:
        Vector2El(int a, int b);
        vector2el get();
        void set(int a, int b);
        int sum();
        int fminuss();
        int sminusf();
        int multi();
        int fdivides();
        int sdividef();
        int power();
    };

    /* Vector3El - (num1, num2, num3) */
    struct vector3el
    {
        int x;
        int y;
        int z;
    };
    class Vector3El
    {
    private:
        vector3el match;

    public:
        Vector3El(int a, int b, int c);
        vector3el get();
        void set(int a, int b, int c);
        int sum();
        int multi();
    };
};

#endif
