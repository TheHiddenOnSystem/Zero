import zero;

import <iostream>;
import <optional>;

using namespace zero;

int main() {
    // Testing the collections
    std::cout << collections_miu_greet() << std::endl;
    
    decltype(auto) a = collections::StackArray<int, 5>{1, 2, 3, 4, 5};

    // .get(6) terminating with uncaught exception of type std::bad_optional_access: bad_optional_access
    std::cout << "Getting an element: " << a.get(6).value_or(-1) << std::endl;
    std::cout << "Getting an element 2: " << a.get(2).value() << std::endl;

    return 0;
}
    