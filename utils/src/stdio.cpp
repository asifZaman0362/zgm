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

