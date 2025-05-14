/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 07:56:25 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 11:00:30 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
    this->_type = "Dog";
    std::cout << "\033[33mDog default constructor called\033[0m" << std::endl;
}

Dog::~Dog() {
    std::cout << "\033[33mDog destructor called\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "\033[33mDog copy constructor called\033[0m" << std::endl;
    *this = copy;
}

Dog & Dog::operator=(const Dog &other) {
    std::cout << "\033[33mDog assignment operator called\033[0m" << std::endl;
    this->_type = other._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type <<" says: wooooooooof! " << std::endl;
}