// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "PriceCode.h"
#include "RegularPriceCode.h"
#include "NewReleasePriceCode.h"
#include "ChildrenPriceCode.h"
class Movie {
public:
    static const int CHILDRENS   = 2;
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;

    Movie( const std::string& title, PriceCode* priceCode = new RegularPriceCode );

    PriceCode* getPriceCode() const;
    void setPriceCode( PriceCode* arg );
    std::string getTitle() const;

private:
    std::string _title;
    PriceCode* _priceCode;
};

inline Movie::
Movie( const std::string& title, PriceCode* priceCode )
        : _title( title )
        , _priceCode( priceCode )
{}

inline PriceCode* Movie::
getPriceCode() const { return _priceCode; }

inline void Movie::
setPriceCode( PriceCode* arg ) { _priceCode = arg; }

inline std::string Movie::
getTitle() const { return _title; }

#endif // MOVIE_H