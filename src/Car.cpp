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

// Car wordt niet by reference meegegeven (Car& ) omdat de << operator in CarRental het Car-object via de getter aanvraagt, 
// deze returned aan Car, niet een Car&.
std::ostream &operator<<(std::ostream &os, Car rhs)
{
    if(rhs.type == ""){
        os << "no known car";
    }else{
        os << "car type: " << rhs.type << " with day price: " << rhs.dayPrice;
    }

    return os;
}
