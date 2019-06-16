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
    int freqRentPoint() const {
        if ( ( getMovie().getPriceCode()->hasBonus())
             &&getDaysRented() > 1 ){

            return 2;
        }else{
            return 1;
        }

    }

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

    cost += getMovie().getPriceCode()->getBaseCost();
    if ( getDaysRented() > getMovie().getPriceCode()->getMaxRentLength() )
        cost += ( getDaysRented() - getMovie().getPriceCode()->getMaxRentLength() ) *
                getMovie().getPriceCode()->getFeePerExtraDay() ;


    return cost;
}
inline int Rental::
getDaysRented() const { return _daysRented; }

inline const Movie& Rental::
getMovie() const { return _movie; }

#endif // RENTAL_H