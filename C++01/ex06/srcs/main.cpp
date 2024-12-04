/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:38:48 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/15 11:33:28 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "string"
#include "iostream"
#include "../headers/Harl.hpp"

int main (int argc, char **argv)
{
    std::string level;
    Harl obj;
    if (argc == 2)
    {
        
        level = argv[1];
        obj.complain(level);
        return (0);
    }
    else 
    {
        std::cout << "Bad arguments" << std::endl;
        return(1);
    }
}