//
// Created by goturak on 16/06/19.
//

#ifndef GENREFAC2_REGULARPRICECODE_H
#define GENREFAC2_REGULARPRICECODE_H

#include "PriceCode.h"



class RegularPriceCode : public PriceCode {
private:


    static constexpr double BASE_AMOUNT_REGULAR = 2;
    static const int MAX_DAY_REGULAR = 2;
    static constexpr double FEE_REGULAR = 1.5;

public:


    double getBaseCost() const override;

    int getMaxRentLength() const override;

    double getFeePerExtraDay() const override;

    bool hasBonus() const override;

    virtual RegularPriceCode *clonePriceCode() const override;

    virtual ~RegularPriceCode();
};


inline RegularPriceCode* RegularPriceCode::clonePriceCode() const {
    return new RegularPriceCode();
}

inline double RegularPriceCode::getBaseCost() const {
    return BASE_AMOUNT_REGULAR;
}

inline int RegularPriceCode::getMaxRentLength() const {
    return MAX_DAY_REGULAR;
}

inline double RegularPriceCode::getFeePerExtraDay() const {
    return FEE_REGULAR;
}

inline bool RegularPriceCode::hasBonus() const {
    return false;
}

inline RegularPriceCode::~RegularPriceCode() {

}

#endif //GENREFAC2_REGULARPRICECODE_H
