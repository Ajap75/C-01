/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:50:44 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 10:12:04 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "string"
#include "iostream"
#include "../headers/Weapon.hpp"


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

class HumanB
{
    private :

    std::string _name;
    Weapon *_weapon;

    public :

    HumanB (std::string name) ;
    void setWeapon(Weapon &weapon) ;
    

    void attack() const;
    
} ;

#endif 