/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:26:11 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 10:25:20 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "../headers/function.hpp"


int    check_files_status(std::ifstream& infilestream, std::ofstream& outfilestream, std::string outfilename)
{
    if (!infilestream.is_open())
    {
        std::cerr << "Error while opening the infile" << std::endl;
        if (outfilestream.is_open())
            close_and_remove_file(infilestream, outfilestream, outfilename);
        return (1);
    }
    if (!outfilestream.is_open())
    {
        std::cerr << "Error while opening/creating the outfile" << std::endl;
        if (infilestream.is_open())
            close_and_remove_file(infilestream, outfilestream, outfilename);
        return (1);
    }
    return (0);
}

void    close_and_remove_file(std::ifstream& infilestream, std::ofstream& outfilestream, std::string outfilename)
{
    infilestream.close();
    outfilestream.close();
    std::remove(outfilename.c_str());
}
