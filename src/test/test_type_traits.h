//
// Created by xhl on 2021/6/13.
//

#ifndef ALGORITHM_TEST_TYPE_TRAITS_H
#define ALGORITHM_TEST_TYPE_TRAITS_H

class Base {
public:
    int a = 1;
};

class Drive : public Base {
public:
    int c = 1;
};

int test_type_traits_func();

#endif //ALGORITHM_TEST_TYPE_TRAITS_H
