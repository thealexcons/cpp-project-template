#include <iostream>
#include "formula/Formula.h"
#include "another_module/Another.h"

int main() {
    std::cout << "Bla: " << Formula::bla(2) << std::endl;
    std::cout << "Foo: " << Another::foo(2) << std::endl;
    return 0;
}
