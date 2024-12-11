//
// Created by victo on 11/12/2024.
//

#ifndef BOOT_H
#define BOOT_H



class boot {

};
#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}



#endif //BOOT_H
