#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int size, string type) {
    size_ = size;
    type_ = type;
}

int Wheel::getSize() const {
    return size_;
}

void Wheel::setSize(int size) {
    size_ = size;
}

string Wheel::getType() const {
    return type_;
}

void Wheel::setType(string type) {
    type_ = type;
}
