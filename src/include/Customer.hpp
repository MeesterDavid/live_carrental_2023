#pragma once
#include <string>
#include <ostream>

class Customer
{
private:
    std::string name;
    double discountPercentage;

public:
    Customer(){name = "", discountPercentage=-1.0;}
    Customer(std::string);
    void setDiscount(double percentage);
    double getDiscount() const;
    std::string getName() const;

    bool operator==(const Customer& rhs);
    friend std::ostream &operator<<(std::ostream &os, Customer rhs);
};
