#include "car.h"
#include <iostream>

Car::Car() {}

Car::Car(const string brand, const string model) {
    brand_ = brand;
    model_ = model;
}


void Car::setEngine() {
    engine_.setDisplacement(2.0);
    engine_.setHorsepower(170);
}

void Car::setWheels() {
    wheel1_.setSize(17);
    wheel1_.setType("kesarengas");
    wheel2_.setSize(17);
    wheel2_.setType("kesarengas");
    wheel3_.setSize(17);
    wheel3_.setType("kesarengas");
    wheel4_.setSize(17);
    wheel4_.setType("kesarengas");
}

string Car::getModel() const {
    return model_;
}

void Car::setModel(const string model) {
    model_ = model;
}

string Car::getBrand() const {
    return brand_;
}

void Car::setBrand(const string brand) {
    brand_ = brand;
}

void Car::printDetails() const {
    cout << "Auto\t\t: "   << model_ << " " << brand_ << endl;
    cout << "Moottori\t: " << engine_.getHorsepower() << " hp\t" << engine_.getDisplacement() << " L" << endl;
    cout << "Rengas 1\t: " << wheel1_.getSize() << " tuumaa\t" << wheel1_.getType() << endl;
    cout << "Rengas 2\t: " << wheel2_.getSize() << " tuumaa\t" << wheel2_.getType() << endl;
    cout << "Rengas 3\t: " << wheel3_.getSize() << " tuumaa\t" << wheel3_.getType() << endl;
    cout << "Rengas 4\t: " << wheel4_.getSize() << " tuumaa\t" << wheel4_.getType() << endl;
}
