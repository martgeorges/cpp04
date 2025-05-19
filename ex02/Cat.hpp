/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:24:39 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/16 08:28:26 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat & operator = (const Cat &other);

        virtual void makeSound() const;
        void setIdea(unsigned int index, std::string idea);
        std::string getIdea(unsigned int index) const;
};

#endif