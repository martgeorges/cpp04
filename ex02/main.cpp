/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:19:55 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/19 07:46:47 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //Animal test = new Animal();
    std::cout << "\n\033[34m==== TEST 1: Pointeur sur animal (polymorphisme) ====\033[0m\n" << std::endl;
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    i->makeSound();
    j->makeSound();

    delete i;
    delete j;
    std::cout << "\n\033[34m==== TEST 2: deep copy ====\033[0m\n" << std::endl;
    Dog basic;
    basic.setIdea(0, "manger");
    Dog copy = basic;
    copy.setIdea(0, "dormir");

    std::cout << "basic think about : " << basic.getIdea(0) << std::endl;
    std::cout << "copy think about : " << copy.getIdea(0) << std::endl;   
    
    std::cout << "\n\033[34m==== TEST 3: array to test Animal ====\033[0m\n" << std::endl;
    const int size = 10;
    Animal* animals[size];

    //half array for Dog
    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    //half array for Cat
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }
    //making them do their sounds for the full array
    for (int i = 0; i < size; ++i) { 
        animals[i]->makeSound();
    }
    //making free for the whole array
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }
    
    std::cout << "\n\033[34m==== TEST 4 : wrongAnimal ====\033[0m\n" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    wrong->makeSound();
    delete wrong;
    return 0;
}