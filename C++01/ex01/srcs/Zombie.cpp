/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:02:00 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/13 13:55:51 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../headers/Zombie.hpp"

// Constructor et Destructor 

Zombie::Zombie ()
{
        std::cout << _name << "No_name_yet has been successfully destroyed\n";
}

Zombie::~Zombie ()
{
    std::cout << _name << " has been successfully destroyed\n";
}



// Methode de la classe définies en dehors de la classe 

void Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName (std::string name)
{
    _name = name;
}


