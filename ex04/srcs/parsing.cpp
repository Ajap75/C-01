/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:26:11 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/13 19:28:11 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <fstream>
#include <cstdlib>


void    check_files_status(std::ifstream& infilestream, std::ofstream& outfilestream)
{
    if (!infilestream.is_open())
    {
        std::cout << "Error while opening the infile" << std::endl;
        if (outfilestream.is_open())
            outfilestream.close();
        exit (1);
    }
    if (!outfilestream.is_open())
    {
        std::cout << "Error while opening/creating the outfile" << std::endl;
        exit (1);
    }
    return ;
}