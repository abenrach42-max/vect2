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

vect2::~vect2(void) {}

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

const int &vect2::operator[](int idx) const
{
    return (this->_tab[idx]);
}

// --- Incrémentation / Décrémentation ---

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

// --- Moins unaire ---

vect2   vect2::operator-(void) const
{
    return (vect2(-this->_tab[0], -this->_tab[1]));
}

// --- Opérateurs arithmétiques (créent un nouveau vect2) ---

vect2   vect2::operator+(const vect2 &v) const
{
    return (vect2(this->_tab[0] + v._tab[0], this->_tab[1] + v._tab[1]));
}

vect2   vect2::operator+(int nb) const
{
    return (vect2(this->_tab[0] + nb, this->_tab[1] + nb));
}

vect2   vect2::operator-(const vect2 &v) const
{
    return (vect2(this->_tab[0] - v._tab[0], this->_tab[1] - v._tab[1]));
}

vect2   vect2::operator-(int nb) const
{
    return (vect2(this->_tab[0] - nb, this->_tab[1] - nb));
}

vect2   vect2::operator*(const vect2 &v) const
{
    return (vect2(this->_tab[0] * v._tab[0], this->_tab[1] * v._tab[1]));
}

vect2   vect2::operator*(int nb) const
{
    return (vect2(this->_tab[0] * nb, this->_tab[1] * nb));
}

vect2   vect2::operator/(const vect2 &v) const
{
    return (vect2(this->_tab[0] / v._tab[0], this->_tab[1] / v._tab[1]));
}

vect2   vect2::operator/(int nb) const
{
    return (vect2(this->_tab[0] / nb, this->_tab[1] / nb));
}

// --- Opérateurs d'assignation composée (modifient *this) ---

vect2   &vect2::operator+=(const vect2 &v)
{
    this->_tab[0] += v._tab[0];
    this->_tab[1] += v._tab[1];
    return (*this);
}

vect2   &vect2::operator+=(int nb)
{
    this->_tab[0] += nb;
    this->_tab[1] += nb;
    return (*this);
}

vect2   &vect2::operator-=(const vect2 &v)
{
    this->_tab[0] -= v._tab[0];
    this->_tab[1] -= v._tab[1];
    return (*this);
}

vect2   &vect2::operator-=(int nb)
{
    this->_tab[0] -= nb;
    this->_tab[1] -= nb;
    return (*this);
}

vect2   &vect2::operator*=(const vect2 &v)
{
    this->_tab[0] *= v._tab[0];
    this->_tab[1] *= v._tab[1];
    return (*this);
}

vect2   &vect2::operator*=(int nb)
{
    this->_tab[0] *= nb;
    this->_tab[1] *= nb;
    return (*this);
}

vect2   &vect2::operator/=(const vect2 &v)
{
    this->_tab[0] /= v._tab[0];
    this->_tab[1] /= v._tab[1];
    return (*this);
}

vect2   &vect2::operator/=(int nb)
{
    this->_tab[0] /= nb;
    this->_tab[1] /= nb;
    return (*this);
}

// --- Comparaisons ---

bool    vect2::operator==(const vect2 &v) const
{
    return (this->_tab[0] == v._tab[0] && this->_tab[1] == v._tab[1]);
}

bool    vect2::operator!=(const vect2 &v) const
{
    return (!(*this == v));
}

// --- Fonctions non-membres ---

vect2   operator+(int nb, const vect2 &v)
{
    return (v + nb);
}

vect2   operator-(int nb, const vect2 &v)
{
    return (vect2(nb - v[0], nb - v[1]));
}

vect2   operator*(int nb, const vect2 &v)
{
    return (v * nb);
}

std::ostream   &operator<<(std::ostream &os, const vect2 &v)
{
    os << "{" << v[0] << ", " << v[1] << "}";
    return (os);
}