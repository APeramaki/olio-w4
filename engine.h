#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
public:
    Engine();
    Engine(int, double);
    int getHorsepower() const;
    void setHorsepower(int);
    double getDisplacement() const;
    void setDisplacement(double);
private:
    int horsepower_;
    double displacement_;
};

#endif // ENGINE_H
