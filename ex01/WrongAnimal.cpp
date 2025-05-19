/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:24:57 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/19 08:38:02 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "\033[32mWrongAnimal";
    std::cout << "\033[33mWrongAnimal Default constructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "\033[33mWrongAnimal copy constructor called\033[0m" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[33mWrongAnimal Destructor called\033[0m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "\033[33mWrongAnimal assignment operator called\033[0m" << std::endl;
    this->_type = other._type;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << this->_type << " says : Animal doesn't make sound !" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->_type);
}