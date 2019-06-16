//
// Created by goturak on 16/06/19.
//

#ifndef GENREFAC2_PRICECODE_H
#define GENREFAC2_PRICECODE_H
class Movie;
class PriceCode {

public:


    virtual double getBaseCost() const = 0;
    virtual int getMaxRentLength() const = 0;
    virtual double getFeePerExtraDay() const = 0;
    virtual bool hasBonus() const = 0;
    virtual PriceCode* clonePriceCode () const = 0;

    virtual ~PriceCode() {}
};
#endif //GENREFAC2_PRICECODE_H
