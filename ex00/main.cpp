/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:19:55 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/20 09:59:35 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "\n\033[34m=== Test 1: Animal, Dog and Cat ===\033[0m\n" << std::endl;
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
    std::cout << "\033[32mType: \033[0m" << meta->getType() << std::endl;
    std::cout << "\033[32mType: \033[0m" << j->getType() << std::endl;
    std::cout << "\033[32mType: \033[0m" << i->getType() << std::endl;

    //test for makeSound function
    std::cout << "\033[32mAnimal sound: \033[0m"; meta->makeSound();
    std::cout << "\033[32mDog sound: \033[0m"; j->makeSound();
    std::cout << "\033[32mCat sound: \033[0m"; i->makeSound();

    
    delete meta;
    delete i;
    delete j;

    std::cout << "\n\033[34m=== Test 2: WrongAnimal, WrongCat ===\033[0m\n" << std::endl;
    
    const WrongAnimal* test = new WrongAnimal();
    const WrongAnimal* test1 = new WrongCat();

    //test for the getType function and to see if it works correctly
    std::cout << "\033[32mType: \033[0m" << test->getType() << std::endl;
    std::cout << "\033[32mType: \033[0m" << test1->getType() << std::endl;

    //test for the makeSound function and to see if it works correctly
    std::cout << "\033[32mWrongAnimal sound: \033[0m"; test->makeSound();
    std::cout << "\033[32mWrongCat sound: \033[0m"; test1->makeSound();

    delete test;
    delete test1;
    
    std::cout << "\n\033[34m=== Test 3: Direct WrongCat pointer ===\033[0m\n" << std::endl;

    const WrongCat* realWrongcat = new WrongCat();

    std::cout << "\033[32mType: \033[0m" << realWrongcat->getType() << std::endl;
    std::cout << "\033[32mWrongCat sound: \033[0m"; realWrongcat->makeSound();

    delete realWrongcat;

    std::cout << "\n\033[34m=== Test 4: Stack Allocation ===\033[0m\n" << std::endl;
    Dog dog;
    Cat cat;
    std::cout << "\033[32mType : \033[0m" << dog.getType() << std::endl;
    std::cout << "\033[32mType : \033[0m"<< cat.getType() << std::endl;

    dog.makeSound();
    cat.makeSound();
    return 0;
}