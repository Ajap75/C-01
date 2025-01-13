/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:10:53 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 17:32:58 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "../headers/Weapon.hpp"


// Constructor && destructor 
Weapon::Weapon (std::string type) : _type(type) {}

// Fonctions membres

// 1) GETTER (const car elle ne doit pas modifier l'état de l'objet)
const std::string& Weapon::getType() const
{
    // declaration et initialisation d'une ref de type ref sur string
    const std::string& typeREF = Weapon::_type;
    return(typeREF);
}

// 2) SETTER
void    Weapon::setType(std::string type)
{
    Weapon::_type = type;
}



