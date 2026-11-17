/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:15:00 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/17 18:15:00 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vect2.hpp"

vect2::vect2(void)
{
    this->_tab[0] = 0;
    this->_tab[1] = 0;
}

vect2::vect2(int nb1, int nb2)
{
    this->_tab[0] = nb1;
    this->_tab[1] = nb2;
}

vect2::vect2(const vect2 &src)
{
    *this = src;
}

vect2   &vect2::operator=(const vect2 &src)
{
    if (this != &src)
    {
        this->_tab[0] = src._tab[0];
        this->_tab[1] = src._tab[1];
    }
    return (*this);
}

int &vect2::operator[](int idx)
{
    return (this->_tab[idx]);
}

int vect2::operator[](int idx) const
{
    return (this->_tab[idx]);
}

vect2   &vect2::operator++(void)
{
    this->_tab[0]++;
    this->_tab[1]++;
    return (*this);
}

vect2   vect2::operator++(int)
{
    vect2   tmp(*this);
    ++(*this);
    return (tmp);
}

vect2   &vect2::operator--(void)
{
    this->_tab[0]--;
    this->_tab[1]--;
    return (*this);
}

vect2   vect2::operator--(int)
{
    vect2   tmp(*this);
    --(*this);
    return (tmp);
}

vect2   &vect2::operator+=(const vect2 &src)
{
    this->_tab[0] += src._tab[0];
    this->_tab[1] += src._tab[1];
    return (*this);
}

vect2   &vect2::operator+=(int nb)
{
    this->_tab[0] += nb;
    this->_tab[1] += nb;
    return (*this);
}

vect2   &vect2::operator-=(const vect2 &src)
{
    this->_tab[0] -= src._tab[0];
    this->_tab[1] -= src._tab[1];
    return (*this);
}

vect2   &vect2::operator-=(int nb)
{
    this->_tab[0] -= nb;
    this->_tab[1] -= nb;
    return (*this);
}

vect2   &vect2::operator*=(const vect2 &src)
{
    this->_tab[0] *= src._tab[0];
    this->_tab[1] *= src._tab[1];
    return (*this);
}

vect2   &vect2::operator*=(int nb)
{
    this->_tab[0] *= nb;
    this->_tab[1] *= nb;
    return (*this);
}

vect2   vect2::operator+(const vect2 &src) const
{
    return (vect2(this->_tab[0] + src._tab[0], this->_tab[1] + src._tab[1]));
}

vect2   vect2::operator+(int nb) const
{
    return (vect2(this->_tab[0] + nb, this->_tab[1] + nb));
}

vect2   vect2::operator-(const vect2 &src) const
{
    return (vect2(this->_tab[0] - src._tab[0], this->_tab[1] - src._tab[1]));
}

vect2   vect2::operator-(int nb) const
{
    return (vect2(this->_tab[0] - nb, this->_tab[1] - nb));
}

vect2   vect2::operator*(const vect2 &src) const
{
    return (vect2(this->_tab[0] * src._tab[0], this->_tab[1] * src._tab[1]));
}

vect2   vect2::operator*(int nb) const
{
    return (vect2(this->_tab[0] * nb, this->_tab[1] * nb));
}

vect2   &vect2::operator-(void)
{
    this->_tab[0] *= -1;
    this->_tab[1] *= -1;
    return (*this);
}

vect2::~vect2(void){}

std::ostream    &operator<<(std::ostream &os, const vect2 &v)
{
    os << "{" << v[0] << ", " << v[1] << "}";
    return (os);
}

vect2   operator-(int nb, const vect2 &v)
{
    return (vect2(nb - v[0], nb - v[1]));
}

vect2   operator*(int nb, const vect2 &v)
{
    return (v * nb);
}

vect2   operator+(int nb, const vect2 &v)
{
    return (v + nb);
}
