/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 07:56:25 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/19 08:37:11 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
    this->_type = "\033[32mDog";
    this->_brain = new Brain();
    std::cout << "\033[33mDog default constructor called\033[0m" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "\033[33mDog destructor called\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "\033[33mDog copy constructor called\033[0m" << std::endl;
    //*this = copy;
    this->_brain = new Brain(*copy._brain);
    this->_type = copy._type;
    
}

Dog & Dog::operator=(const Dog &other) {
    std::cout << "\033[33mDog assignment operator called\033[0m" << std::endl;
    if (this != &other) {
        this->_type = other._type;
        if (this->_brain)
            delete this->_brain;
        //making a deep copy
        this->_brain = new Brain(*other._brain); 
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type <<" says: wooooooooof! " << std::endl;
}

void Dog::setIdea(unsigned int index, std::string idea) {
    _brain->setIdea(index, idea);
}

std::string Dog::getIdea(unsigned int index) const {
    return (_brain->getIdea(index));
}