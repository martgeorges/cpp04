/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:25:11 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/16 11:30:45 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "\033[33mWrongCat default constructor called\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
    std::cout << "\033[33mWrongCat copy constructor called\033[0m" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[33mWrongCat destructor called\033[0m" << std::endl;
}

WrongCat & WrongCat::operator= (const WrongCat &other) {
    std::cout << "\033[33mWrongCat assignment operator called\033[0m" << std::endl;
    this->_type = other._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout <<  "WrongCat says : meooooww!" << std::endl;
}