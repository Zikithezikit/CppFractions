#include <iostream>
#include "FractionsClass.hpp"

// d'tor
Fractions::~Fractions()
{
    m_denominator = 0;
    m_nominator = 0;
}
// Print()
void Fractions::Print() const
{
    std::cout << "The Fraction is " << m_nominator << "/" << m_denominator << "\n";
}

/* Operators */

// The * option for the Fractions Class
Fractions Fractions::operator*(const Fractions &other) const
{
    return (Fractions(m_nominator * other.getNominator(), m_denominator * other.getDenominator()));
}

Fractions Fractions::operator*(const int num) const
{
    return (Fractions(m_nominator * num, m_denominator));
}

Fractions operator*(const int num, const Fractions &frac)
{
    return Fractions(frac.getNominator() * num, frac.getDenominator());
}

// The + option for the Fractions Class
Fractions Fractions::operator+(const Fractions &other) const
{
    if (m_denominator == other.getDenominator())
    {
        return Fractions(m_nominator + other.getNominator(), m_denominator);
    }
    return Fractions(m_nominator * other.getDenominator() + other.getNominator() * m_denominator, m_denominator * other.getDenominator());
}

Fractions Fractions::operator+(const int num) const
{
    return (Fractions(m_nominator + (num * m_denominator), m_denominator));
}

Fractions operator+(const int num, const Fractions &frac)
{
    return (Fractions(frac.getNominator() + (num * frac.getDenominator()), frac.getDenominator()));
}

// The - operator for the fraction class *TO:DO
Fractions Fractions::operator-(const Fractions &other) const
{
    if (m_denominator == other.getDenominator())
    {
        return Fractions(m_nominator - other.getNominator(), m_denominator);
    }
    return Fractions(m_nominator * other.getDenominator() - other.getNominator() * m_denominator, m_denominator * other.getDenominator());
}

Fractions Fractions::operator-(const int num) const
{
    return (Fractions(m_nominator - (num * m_denominator), m_denominator));
}

Fractions operator-(const int num, const Fractions &frac)
{
    return (Fractions((num * frac.getDenominator()) - frac.getNominator(), frac.getDenominator()));
}

// The oprator /
Fractions Fractions::operator/(const Fractions &other) const
{
    return ((Fractions(m_nominator, m_denominator)) * Fractions(other.getDenominator(), other.getNominator()));
}

Fractions Fractions::operator/(const int num) const
{
    return ((Fractions(1, num) * Fractions(m_nominator, m_denominator)));
}
Fractions operator/(const int num, const Fractions &frac)
{
    return (Fractions(num, 1) * Fractions(frac.getDenominator(), frac.getNominator()));
}
