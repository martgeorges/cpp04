/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:24:49 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/13 14:37:57 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " says: meoooooowww!" << std::endl;
}