/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:26:45 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 11:57:33 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/HumanA.hpp"

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

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

// Fonctions membre définition : 

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
