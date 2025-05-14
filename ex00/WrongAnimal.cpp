/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:24:57 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 09:41:31 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << this->_type << "says : Animal doesn't make sound !" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->_type);
}