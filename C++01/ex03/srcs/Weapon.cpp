/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:10:53 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 11:44:55 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "../headers/Weapon.hpp"


// Constructor && destructor 
Weapon::Weapon (std::string type) : _type(type) {}

// Fonctions membres

// 1) GETTER (const car elle ne doit pas modifier l'état de l'objet)
std::string& Weapon::getType()
{
    // declaration et initialisation d'une ref de type ref sur string
    std::string& typeREF = Weapon::_type;
    return(typeREF);
}

// 2) SETTER
void    Weapon::setType(std::string type)
{
    Weapon::_type = type;
}

