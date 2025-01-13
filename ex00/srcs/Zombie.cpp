/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:02:00 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/08 11:56:11 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../headers/Zombie.hpp"

// Constructor et Destructor 

Zombie::Zombie (std::string name) : name(name)
{
    std::cout << name << " has been successfully created\n";
}

Zombie::~Zombie ()
{
    std::cout << name << " has been successfully destroyed\n";
}


void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


