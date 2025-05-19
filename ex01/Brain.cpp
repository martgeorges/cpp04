/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:44:46 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/19 08:30:51 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[33mBrain default constructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "\033[33mBrain copy constructor called\033[0m" << std::endl;
    for (int i = 0; i < 100; ++i) {
        this->_ideas[i] = copy._ideas[i]; 
    }
}

Brain::~Brain()
{
    std::cout << "\033[33mBrain desctructor called\033[0m" << std::endl;
}

Brain & Brain::operator=(const Brain &other) {
    //boucle for car index = 100 
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    std::cout << "\033[33mBrain assignment operator called\033[0m" << std::endl;
    return *this;
}

const std::string Brain::getIdea(unsigned int index) const {
    if (index < 100)
        return (this->_ideas[index]);
    else
        std::cout << "Only 100 ideas per brain" << std::endl;
    return "";
}

void Brain::setIdea(unsigned int index, std::string idea) {
    if (index < 100)
        this->_ideas[index] = idea;
    else
        std::cout << "Only 100 ideas per brain" << std::endl;
}