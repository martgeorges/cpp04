/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:44:55 by mgeorges          #+#    #+#             */
/*   Updated: 2025/05/15 14:50:47 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
  private:
	std::string _ideas[100];
  public:
	Brain();
	Brain(const Brain &copy);
	virtual ~Brain();
	Brain &operator=(const Brain &other);

	const std::string getIdea(unsigned int index) const;
	void setIdea(unsigned int index, std::string idea);
};

#endif