//
// Created by Administrator on 2020/4/1.
//

#include <iostream>
#include "../header/Car.h"

using namespace std;
using namespace mine;

void Car::show() {
    cout << "~~ Car.show ~~" << endl;
    cout << "price is " << this->price << ", name is " << this->name << endl;
}

Car::Car(int price, string name):price(price), name(name) {
    cout << "++ Car.Constructor ++" << endl;
    cout << "price is " << this->price << ", name is " << this->name << endl;
}
