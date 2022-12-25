# C++ DataTypes namespace

### List of data types:
* Pairs

## Example of using
```cpp

#include "datatypes.h"
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

```

### You can found other examples of using, in "examples" directory.

<br>

#### For build text an example, run the commands:
1. clone the repo

2. #### And then:

```bash
cd cpp-datatypes
make
```
3. #### Or
```bash
cd cpp-datatypes
g++ src/datatypes.cpp examples/example.cpp -o build/example.out
./build/example.out
```