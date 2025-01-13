/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:03:33 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 12:06:41 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"
#include "string"
#include "iostream"


int main(void)
{
    // allouer sur la heap donc neccessite un delete manuel
    Zombie *zombie = newZombie("Foo");
    zombie->announce();
    delete (zombie);
    // allouer sur la stack donc sera liberer automatiquement a la fin de la fct.
    randomChump("Man");
    return (0);
}