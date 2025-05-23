/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:41:44 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 13:31:31 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "\033[33mAnimal Default constructor called\033[0m"  << std::endl;
}

Animal::~Animal()
{
    std::cout << "\033[33mAnimal Default destructor called\033[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "\033[33mAnimal copy constructor called\033[0m" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "\033[33mAnimal assignment operator called\033[0m" << std::endl;
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