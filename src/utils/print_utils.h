//
// Created by xhl on 2021/5/9.
//

#ifndef ALGORITHM_PRINT_UTILS_H
#define ALGORITHM_PRINT_UTILS_H
#include <iostream>

template <class T>
class print_utils {
public:
    static void print(const T& t) {
        typename T::const_iterator iterator;
        for(auto pos=iterator.begin(); pos!=iterator.end(); ++pos)
        {
            std::cout<<*pos<<' ';
        }
        std::cout<<std::endl;
    }
};


#endif //ALGORITHM_PRINT_UTILS_H
