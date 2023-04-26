#include "include/Customer.hpp"

Customer::Customer(std::string name)
{
    this->name = name;
}

std::string Customer::getName() const{
    return this->name;
}

void Customer::setDiscount(double percentage)
{
    this->discountPercentage = percentage;
}

double Customer::getDiscount() const
{
    return this->discountPercentage;
}

bool Customer::operator==(const Customer &rhs)
{
    if(this->name == rhs.getName()){
        return true;
    }else{
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, Customer rhs)
{
    if(rhs.name == ""){
        os << "no renter known";
    }else{
        os << rhs.name << "(discount: " << rhs.discountPercentage << "%) ";
    }
    return os;
}
