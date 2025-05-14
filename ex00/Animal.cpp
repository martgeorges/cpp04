/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:41:44 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 07:58:58 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Default")
{
    std::cout << "Animal Default constructor called"  << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Default destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal doesn't make sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}