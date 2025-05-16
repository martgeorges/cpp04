/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:24:49 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/16 10:39:13 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "\033[33mCat default constructor called\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
    std::cout << "\033[33mCat copy constructor called\033[0m" << std::endl;
    //*this = copy;
    this->_brain = new Brain(*copy._brain);
    this->_type = copy._type;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "\033[33mCat destructor called\033[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
    std::cout << "\033[33mCat assignment operator called\033[0m" << std::endl;
    //this->_type = other._type;
    if (this != &other){
        this->_type = other._type;
        if (this->_brain)
            delete this->_brain;
        //copie profonde 
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " says: meoooooowww!" << std::endl;
}

void Cat::setIdea(unsigned int index, std::string idea) {
    _brain->setIdea(index, idea);
}

std::string Cat::getIdea(unsigned int index) const {
    return (_brain->getIdea(index));
}