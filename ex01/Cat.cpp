/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:24:49 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 11:00:44 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->_type = "Cat";
    std::cout << "\033[33mCat default constructor called\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
    std::cout << "\033[33mCat copy constructor called\033[0m" << std::endl;
    *this = copy;
}

Cat::~Cat() {
    std::cout << "\033[33mCat destructor called\033[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
    std::cout << "\033[33mCat assignment operator called\033[0m" << std::endl;
    this->_type = other._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " says: meoooooowww!" << std::endl;
}