#include "include/Car.hpp"

Car::Car(std::string type, double dayPrice)
{
    this->type = type;
    this->dayPrice = dayPrice;
}

void Car::setDayPrice(double dayPrice)
{
    this->dayPrice = dayPrice;
}

double Car::getDayPrice() const
{
    return this->dayPrice;
}

std::ostream &operator<<(std::ostream &os, Car rhs)
{
    if(rhs.type == ""){
        os << "no known car";
    }else{
        os << "car type: " << rhs.type << " with day price: " << rhs.dayPrice;
    }

    return os;
}
