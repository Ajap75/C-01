/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:02:00 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/12 16:23:12 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../headers/Zombie.hpp"

// Constructor et Destructor 

Zombie::Zombie (std::string name) : name(name)
{
}

Zombie::~Zombie ()
{
    std::cout << name << " has been successfully destroyed\n";
}


void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


