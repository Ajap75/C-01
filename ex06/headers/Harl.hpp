/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:41:54 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/15 11:09:13 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include "string"
#include "iostream"


class Harl;


struct Level
{
    std::string level;
    void (Harl::*ptrfuct)();
};

class Harl
{
    private :

    Level _levelarray[4];
    void debug (void);
    void info (void);
    void warning(void);
    void error(void);



    public :

    Harl() ;

    void complain( std::string level );

};

#endif 
