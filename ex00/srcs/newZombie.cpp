/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:14 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/12 16:10:07 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"
#include "string"
#include "iostream"

Zombie* newZombie( std::string name )
{
    Zombie *newzombie ;
    newzombie = new Zombie(name) ;
    return (newzombie);
}

