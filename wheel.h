#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

class Wheel
{
public:
    Wheel();
    Wheel(int, string);

    int getSize() const;
    void setSize(int);
    string getType() const;
    void setType(string);
private:
    int size_;
    string type_;
};

#endif // WHEEL_H
