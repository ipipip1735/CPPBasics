//
// Created by Administrator on 2020/4/1.
//

#ifndef CPPBASICS_CAR_H
#define CPPBASICS_CAR_H

#include <iostream>

namespace mine {
    class Car {
    public:
        int price;
        std::string name;

        Car(int age, std::string name);

        void show();
    };

}

#endif //CPPBASICS_CAR_H
