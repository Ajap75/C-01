/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:44 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 12:06:39 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/HumanA.hpp"
#include "../headers/HumanB.hpp"



int main()
{
    // Weapon club = Weapon("crude spiked club");
    // HumanA bob("Bob", club);
    // bob.attack();
    // club.setType("some other type of club");
    // bob.attack();

    
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

    return 0;
}

/*
Dans ce code, nous avons deux situations différentes :
- Pour bob (HumanA), l'attribut 'Weapon' est une référence, car HumanA 
  a toujours une arme. Une référence ne peut pas être nulle en C++, 
  ce qui convient pour cette situation.
- Pour jim (HumanB), l'attribut 'Weapon' est un pointeur, car HumanB 
  peut ne pas avoir d'arme. Un pointeur peut être nul. Dans ce cas, il 
  faut protéger la méthode 'attack' pour éviter de déréférencer un 
  pointeur nul.
De plus, pour HumanA, l'appelant doit s'assurer de ne pas passer une 
référence nulle, puisque les références ne peuvent pas être nulles en 
C++ et le code ne le vérifie pas. Cette responsabilité incombe à l'appelant.
*/