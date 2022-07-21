#ifndef ZGAME_UTILS_STDIO_H
#define ZGAME_UTILS_STDIO_H

//#include "format.hpp"
#include <iostream>

namespace zifmann::zgame::utils {
    namespace stdio {

        template<typename T>
        void println(T item) {
            std::cout << item << '\n';
        }

        template<typename T>
        void print(T item) {
            std::cout << item;
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
