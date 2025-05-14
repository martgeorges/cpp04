/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:25:11 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 08:41:53 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator= (const WrongCat &other) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << this->_type << " says : meooooww!" << std::endl;
}