/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:15:07 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/17 18:15:07 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECT2_HPP
# define VECT2_HPP

# include <iostream>

class   vect2
{
    private:
        int _tab[2];
    public:
        vect2(void);
        vect2(int nb1, int nb2);
        vect2(const vect2 &src);
        vect2   &operator=(const vect2 &src);
        int     &operator[](int idx);
        int     operator[](int idx) const;

        // pre incrementation et post

        vect2   &operator++(void);
        vect2   operator++(int);
        vect2   &operator--(void);
        vect2   operator--(int);

        // +=, -=, *=

        vect2   &operator+=(const vect2 &src);
        vect2   &operator+=(int nb);
        vect2   &operator-=(const vect2 &src);
        vect2   &operator-=(int nb);
        vect2   &operator*=(const vect2 &src);
        vect2   &operator*=(int nb);

        // +, -, *

        vect2   operator+(const vect2 &src) const;
        vect2   operator+(int nb) const;
        vect2   operator-(const vect2 &src) const;
        vect2   operator-(int nb) const;
        vect2   operator*(const vect2 &src) const;
        vect2   operator*(int nb) const;

        // for -nb
        vect2   &operator-(void);
        ~vect2(void);
};

std::ostream    &operator<<(std::ostream &os, const vect2 &v);
vect2   operator-(int nb, const vect2 &v);
vect2   operator*(int nb, const vect2 &v);
vect2   operator+(int nb, const vect2 &v);

#endif