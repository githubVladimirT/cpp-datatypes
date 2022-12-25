#ifndef datatypes
#define datatypes

namespace DataTypes
{
    struct pair
    {
        int x;
        int y;
    };
    class Pair
    {
    private:
        pair match;

    public:
        Pair(int a, int b);
        pair get();
        void set(int a, int b);
        int sum();
        int fminuss();
        int sminusf();
        int multi();
        int fdivides();
        int sdividef();
        int power();
    };
}

#endif