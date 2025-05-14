/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 07:56:25 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/13 13:22:02 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog & Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type <<" says: wooooooooof! " << std::endl;
}