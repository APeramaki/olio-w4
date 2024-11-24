#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>

using namespace std;

class Car
{
public:
    Car();
    Car(const string, const string);
    ~Car() = default;
    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(const string);

    string getBrand() const;
    void setBrand(const string);

    void printDetails() const;
private:
    Engine engine_;
    Wheel wheel1_;
    Wheel wheel2_;
    Wheel wheel3_;
    Wheel wheel4_;
    string model_;
    string brand_;
};

#endif // CAR_H
