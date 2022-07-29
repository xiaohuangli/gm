//
// Created by xhl on 2021/6/13.
//

#include "test_type_traits.h"
#include <iostream>
#include <type_traits>


int test_type_traits_func() {
    auto val = std::is_convertible<Drive*, Base*>::value;
    auto type = std::is_convertible<Drive*, Base*>::type();
    std::cout << "t: " << type.value << ", v: " << val << std::endl;

    std::cout << std::is_base_of<Base, Drive>::value << std::endl;
}
