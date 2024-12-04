/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:03:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/12 16:35:54 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"
#include "string"
#include "iostream"


int main(void)
{
    Zombie *zombie = newZombie("Foo");
    delete (zombie);

    randomChump("Man");
    return (0);
}