#include "Vec2.hpp"
#include <iostream>

int main() {
    const Vec2 a(3.0f, 4.0f);
    const Vec2 b(1.0f, 2.0f);

    std::cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << '\n';
    std::cout << "b = (" << b.x() << ", " << b.y() << "), length " << b.length() << '\n';

    Vec2 sum = a.plus(b);
    std::cout << "a + b = ()" <<  sum.x() << ", " <<  sum.y() << ")\n";


    return 0;
}

// const Vec2 origin(0.0f, 0.0f);   // a const object needs a constructor to initialise it
// origin.x();       // ok
// origin.setX(1);   // compile error: setX is not const