#include "include/CarRental.hpp"


CarRental::CarRental(Car car, Customer renter, int days)
{
    this->rentedCar = car;
    this->renter = renter;
    this->rentalDays = days;
}

void CarRental::setRentalDays(int days)
{
    this->rentalDays = days;
}

void CarRental::setRentedCar(Car car)
{
    this->rentedCar = car;
}

Car CarRental::getRentedCar() const
{
    return this->rentedCar;
}

void CarRental::setRenter(Customer renter)
{
    this->renter = renter;
}

Customer CarRental::getRenter() const
{
    return this->renter;
}

double CarRental::totalPrice() const
{
    return this->rentalDays*this->rentedCar.getDayPrice();
}

std::ostream &operator<<(std::ostream &os, CarRental &rhs)
{
    os << rhs.getRentedCar() << std::endl << 
    rhs.getRenter() << std::endl << 
    "rental days: " << rhs.rentalDays << " for a price of " << rhs.getRentedCar().getDayPrice() << std::endl << std::endl;

}
