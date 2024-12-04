/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:26:11 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/14 16:32:24 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <fstream>

void    check_files_status(std::ifstream& infilestream, std::ofstream& outfilestream)
{
    if (!infilestream.is_open())
    {
        std::cout << "Error while opening the infile" << std::endl;
        exit (1);
    }
    if (!outfilestream.is_open())
    {
        std::cout << "Error while opening/creating the outfile" << std::endl;
        exit (1);
    }
    return ;
}