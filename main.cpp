//
// Created by Administrator on 2020/4/1.
//

#include <iostream>
#include "header/Car.h"

using namespace std;
using namespace mine;

void instantiate();
void modify(Car &car);




int main() {

//    instantiate(); //实例化

    Car car(12, "Toyota");
    modify(car);
    cout << car.price << endl;


    return 0;
}

void modify(Car &car) {
    car.price = 85;
}

void instantiate() {
    Car car(12, "Toyota");
    car.show();
    cout << "Car.price is " << car.price << ", Car.name is " << car.name << endl;
}
