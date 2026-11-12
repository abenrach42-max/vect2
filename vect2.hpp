#ifndef VECT2_HPP
# define VECT2_HPP

# include <iostream>

class vect2
{
    private:
        int _tab[2];

    public:
        vect2(void);
        vect2(int nb1, int nb2);
        vect2(const vect2 &src);
        ~vect2(void);

        vect2       &operator=(const vect2 &src);

        int         &operator[](int idx);
        const int   &operator[](int idx) const;

        // Pré-incrémentation / décrémentation -> référence (&)
        vect2       &operator++(void);
        vect2       &operator--(void);

        // Post-incrémentation / décrémentation -> copie (sans &)
        vect2       operator++(int);
        vect2       operator--(int);

        // Moins unaire (-v)
        vect2       operator-(void) const;

        // Opérateurs arithmétiques (ne modifient pas *this -> const + retour par copie)
        vect2       operator+(const vect2 &v) const;
        vect2       operator+(int nb) const;
        vect2       operator-(const vect2 &v) const;
        vect2       operator-(int nb) const;
        vect2       operator*(const vect2 &v) const;
        vect2       operator*(int nb) const;
        vect2       operator/(const vect2 &v) const;
        vect2       operator/(int nb) const;

        // Opérateurs d'assignation composée (modifient *this -> retour par référence)
        vect2       &operator+=(const vect2 &v);
        vect2       &operator+=(int nb);
        vect2       &operator-=(const vect2 &v);
        vect2       &operator-=(int nb);
        vect2       &operator*=(const vect2 &v);
        vect2       &operator*=(int nb);
        vect2       &operator/=(const vect2 &v);
        vect2       &operator/=(int nb);

        // Comparaisons
        bool        operator==(const vect2 &v) const;
        bool        operator!=(const vect2 &v) const;
};

// Fonctions libres (quand le int ou ostream est à gauche)
vect2           operator+(int nb, const vect2 &v);
vect2           operator-(int nb, const vect2 &v);
vect2           operator*(int nb, const vect2 &v);
std::ostream    &operator<<(std::ostream &os, const vect2 &v);

#endif