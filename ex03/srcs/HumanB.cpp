/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:42:08 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 17:59:46 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/HumanB.hpp"

/*
Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
bien sûr) :
<name> attacks with their <weapon type>
HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
• Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
n’est pas le cas de celui de HumanB.
• HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcément une.
*/

// Constructor && Destructor

HumanB::HumanB (std::string name) : _name(name), _weapon(NULL){}

// Fonctions membre définition : 

void HumanB::attack() const
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
         std::cout << _name << " attacks with their " << "No weapon" << std::endl;
}

//Dans ce cas particulier ou B peut ne pas avoir d'arme, et donc Weapon set à Null, 
// On protege la fonction memebre attack de B pour qu'elle n'essaye pas de déréférencer
// _weapon et causer un segfault puisque Weapon == NULL
// Deuxième fonction membre pour le test 
// Deuxième fonction membre pour le test 

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
    return ;
}
