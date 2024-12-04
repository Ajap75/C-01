/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:03:33 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/13 13:50:00 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"
#include "string"
#include "iostream"


int main(void)
{
    int N; 
    int i;
    std::string name;

    Zombie *zombiehorde;

    N = 5; 
    i = 0;
    name = "JOE";

   zombiehorde = zombieHorde(N, name);

   while (i < N)
   {
    zombiehorde[i].announce();
    i++;
   }
    delete[] (zombiehorde);

    return (0);
}