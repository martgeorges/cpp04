/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:19:55 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/20 11:38:57 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //should uncomment this, supposed to have an error when compiling
    //because it's non-instantiable / abstract (class)
    //Animal test = new Animal();
    //test->makeSound();
    std::cout << "\n\033[34m==== TEST 1 : Cat & Dog ====\033[0m\n" << std::endl;
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    
    std::cout << "\n\033[34m==== TEST 2: getType() ====\033[0m\n" << std::endl;
    Animal* cat1 = new Cat();
    Animal* dog1 = new Dog();
    std::cout << "Type of animal: " << cat1->getType() << std::endl;
    std::cout << "Type of animal: " << dog1->getType() << std::endl;

    delete cat1;
    delete dog1;

    std::cout << "\n\033[34m==== TEST 3: Deep Copy ====\033[0m\n" << std::endl;
    Dog basic;
    basic.setIdea(0, "Attraper une balle");
    Dog copy = basic;
    copy.setIdea(0, "Faire dodo");
    std::cout << "Basic thinks: " << basic.getIdea(0) << std::endl;
    std::cout << "Copy thinks: " << copy.getIdea(0) << std::endl;
    return 0;
}