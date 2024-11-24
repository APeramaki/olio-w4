#include "engine.h"

Engine::Engine() {}

Engine::Engine(int horsepower, double displacement) {
    horsepower_ = horsepower;
    displacement_ = displacement;
}

int Engine::getHorsepower() const {
    return horsepower_;
}

void Engine::setHorsepower(int horsepower) {
    horsepower_ = horsepower;
}

double Engine::getDisplacement() const {
    return displacement_;
}

void Engine::setDisplacement(double displacement) {
    displacement_ = displacement;
}
