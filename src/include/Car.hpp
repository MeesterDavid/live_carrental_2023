#pragma once
#include <string>
#include <ostream>

class Car{
    private:
    std::string type;
    double dayPrice;

    public:
    Car(){type="", dayPrice=0;}
    Car(std::string type, double dayPrice);
    void setDayPrice(double dayPrice);
    double getDayPrice() const;
    
    // Car lambo = Car();
    // std::cout << lambo;

    friend std::ostream& operator<<(std::ostream& os, Car rhs);
};