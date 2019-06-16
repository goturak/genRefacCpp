// Rental.h
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
    Rental( const Movie& movie, int daysRented );
    double cost() const;
    int getDaysRented() const;
    const Movie& getMovie() const;

private:
    Movie _movie;
    int _daysRented;
};

inline Rental::
Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}


inline double Rental::cost() const {
    double cost=0;
    switch (getMovie().getPriceCode() ) {
        case Movie::REGULAR:
            cost += 2;
            if ( getDaysRented() > 2 )
                cost += ( getDaysRented() - 2 ) * 1.5 ;
            break;
        case Movie::NEW_RELEASE:
            cost += getDaysRented() * 3;
            break;
        case Movie::CHILDRENS:
            cost+= 1.5;
            if ( getDaysRented() > 3 )
                cost += ( getDaysRented() - 3 ) * 1.5;
            break;
    }
    return cost;
}
inline int Rental::
getDaysRented() const { return _daysRented; }

inline const Movie& Rental::
getMovie() const { return _movie; }

#endif // RENTAL_H