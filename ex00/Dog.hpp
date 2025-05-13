/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 07:56:21 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/13 08:22:57 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog &copy);
        ~Dog();
        Dog & operator = (const Dog &other);
};

#endif