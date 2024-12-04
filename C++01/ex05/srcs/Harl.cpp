/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:38:43 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/15 11:21:46 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Harl.hpp"

Harl::Harl ()
{
    _levelarray[0].level = "DEBUG" ;
    _levelarray[0].ptrfuct = &Harl::debug;

    _levelarray[1].level = "INFO";
    _levelarray[1].ptrfuct = &Harl::info;

    _levelarray[2].level = "WARNING";
    _levelarray[2].ptrfuct = &Harl::warning;

    _levelarray[3].level = "ERROR";
    _levelarray[3].ptrfuct = &Harl::error; 

}

void Harl::debug(void)
{
    std::cout << "DEBUG DEBUG DEBUG DEBUG DEBUG" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO INFO INFO INFO INFO" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNIG WARNING WARNING WARNING WARNING" << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR ERROR ERROR ERROR ERROR" << std::endl;
}

void Harl::complain( std::string level )
{
    int i;
    i = 0;

    while(level.compare(_levelarray[i].level))
    {
        i++;
        if (i >= 4) 
        {
            std::cout << "Error with the level you've entered" << std::endl;
            return ;
        }
    }
   (this->*_levelarray[i].ptrfuct)();
}


