#ifndef ZGAME_UTILS_STDIO_H
#define ZGAME_UTILS_STDIO_H

#include <iostream>

namespace zifmann::zgame::utils {
    namespace stdio {

        template<typename T>
        void println(T);

        template<typename T>
        void print(T);

        template<typename T>
        T get(const std::string& prompt = "");
    
    }
}

#endif
