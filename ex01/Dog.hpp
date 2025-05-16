/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 07:56:21 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/16 08:10:50 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();
        Dog & operator = (const Dog &other);

        virtual void makeSound() const;
        //setter
        void setIdea(unsigned int index, std::string idea);
        //getter
        std::string getIdea(unsigned int index) const;
};

#endif