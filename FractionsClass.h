

class Fractions
{
public:
    // c'tor
    Fractions() : m_nominator(0), m_denominator(0) { ; }
    Fractions(int nominator, int denominator) : m_nominator(nominator), m_denominator(denominator) { ; }
    // d'tor
    ~Fractions();
    // get
    int getNominator() const { return m_nominator; }
    int getDenominator() const { return m_denominator; }
    // convert to float
    float getFraction() const { return ((float)m_nominator / (float)m_denominator); }
    // Print
    void Print() const;
    /* Operators */
    // * operator
    Fractions operator*(const Fractions &other) const;
    Fractions operator*(const int num) const;
    friend Fractions operator*(const int num, const Fractions &frac);
    // + operator
    Fractions operator+(const Fractions &other) const;
    Fractions operator+(const int num) const;
    friend Fractions operator+(const int num, const Fractions &frac);
    // - operator
    Fractions operator-(const Fractions &other) const;
    Fractions operator-(const int num) const;
    friend Fractions operator-(const int num, const Fractions &frac);
    // / operator
    Fractions operator/(const Fractions &other) const;
    Fractions operator/(const int num) const;
    friend Fractions operator/(const int num, const Fractions &frac);

private:
    int m_nominator;
    int m_denominator;
    // help functions for reduction of fractures(Future project)
    int getMax(const int a, const int b) const { return ((a > b) ? a : b); }
    int getMin(const int a, const int b) const { return ((a < b) ? a : b); }
};
