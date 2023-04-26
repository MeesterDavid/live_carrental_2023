#pragma once
#include <string>
#include <ostream>
#include "Car.hpp"
#include "Customer.hpp"

class CarRental{
    private:
    int rentalDays;
    Customer renter;
    Car rentedCar;

    public:
    CarRental(){rentalDays=0, renter=Customer(), rentedCar=Car();};
    CarRental(Car car, Customer renter, int days);
    void setRentalDays(int days);
    void setRentedCar(Car car);
    Car getRentedCar() const;
    void setRenter(Customer renter);
    Customer getRenter() const;
    double totalPrice() const;
    friend std::ostream& operator<<(std::ostream& os, CarRental& rhs);

};