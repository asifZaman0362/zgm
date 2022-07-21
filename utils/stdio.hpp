#ifndef ZGAME_UTILS_STDIO_H
#define ZGAME_UTILS_STDIO_H

//#include "format.hpp"
#include <iostream>

namespace zifmann::zgame::utils {
    namespace stdio {
        #define println(a, b)  _print<a>(b, '\n')
        #define print(a, b)    _print<a>(b)

        template<typename T>
        void _print(T item, char newline = '\0') {
            std::cout << item << newline;
        } 

        template<typename T>
        T get(const std::string& prompt = "") {
            T thing;
            std::cout << prompt;
            std::cin >> thing;
            return thing;
        }
    }
}

#endif
