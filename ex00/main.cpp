/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:19:55 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/14 09:54:27 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "=== Test 1: Animal, Dog and Cat ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    /*std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();*/
    //test for getType function
    std::cout << "Type: " << meta->getType() << std::endl;
    std::cout << "Type: " << j->getType() << std::endl;
    std::cout << "Type: " << i->getType() << std::endl;

    //test for makeSound function
    std::cout << "Animal sound: "; meta->makeSound();
    std::cout << "Dog sound: "; j->makeSound();
    std::cout << "Cat sound: "; i->makeSound();

    
    delete meta;
    delete i;
    delete j;

    std::cout << "=== Test 2: WrongAnimal, WrongCat ===" << std::endl;
    
    const WrongAnimal* test = new WrongAnimal();
    const WrongAnimal* test1 = new WrongCat();

    //test for the getType function and to see if it works correctly
    std::cout << "Type: " << test->getType() << std::endl;
    std::cout << "Type: " << test1->getType() << std::endl;

    //test for the makeSound function and to see if it works correctly
    std::cout << "WrongAnimal sound: "; test->makeSound();
    std::cout << "WrongCat sound: "; test1->makeSound();

    std::cout << "=== Test 3: Direct WrongCat pointer ===" << std::endl;

    return 0;
}