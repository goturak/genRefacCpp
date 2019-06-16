//
// Created by goturak on 16/06/19.
//

#ifndef GENREFAC2_NEWRELEASEPRICECODE_H
#define GENREFAC2_NEWRELEASEPRICECODE_H

#include "PriceCode.h"



class NewReleasePriceCode : public PriceCode{
private:


    static constexpr double BASE_AMOUNT_NEW_RELEASE = 0;
    static const int MAX_DAY_NEW_RELEASE = 0;
    static constexpr double FEE_NEW_RELEASE = 3;


public:



    double getBaseCost() const override;

    int getMaxRentLength() const override;

    double getFeePerExtraDay() const override;

    bool hasBonus() const override;

    virtual NewReleasePriceCode *clonePriceCode() const override;

    virtual ~NewReleasePriceCode();
};

inline NewReleasePriceCode *NewReleasePriceCode::clonePriceCode() const {
    return new NewReleasePriceCode();
}

inline double NewReleasePriceCode::getBaseCost() const {
    return BASE_AMOUNT_NEW_RELEASE;
}

inline int NewReleasePriceCode::getMaxRentLength() const {
    return MAX_DAY_NEW_RELEASE;
}

inline double NewReleasePriceCode::getFeePerExtraDay() const {
    return FEE_NEW_RELEASE;
}

inline bool NewReleasePriceCode::hasBonus() const {
    return true;
}

inline NewReleasePriceCode::~NewReleasePriceCode() {

}
#endif //GENREFAC2_NEWRELEASEPRICECODE_H
