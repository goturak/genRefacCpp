//
// Created by goturak on 16/06/19.
//

#ifndef GENREFAC2_CHILDRENPRICECODE_H
#define GENREFAC2_CHILDRENPRICECODE_H

#include "PriceCode.h"

class ChildrenPriceCode : public PriceCode{
private:


    static constexpr double BASE_AMOUNT_CHILDRENS = 1.5;
    static const int MAX_DAY_CHILDRENS = 3;
    static constexpr double FEE_CHILDRENS = 1.5;

public:


    double getBaseCost() const override;

    int getMaxRentLength() const override;

    double getFeePerExtraDay() const override;

    bool hasBonus() const override;

    virtual ChildrenPriceCode *clonePriceCode() const override;

    virtual ~ChildrenPriceCode();
};


inline ChildrenPriceCode *ChildrenPriceCode::clonePriceCode() const {

    return new ChildrenPriceCode();
}

inline double ChildrenPriceCode::getBaseCost() const {
    return BASE_AMOUNT_CHILDRENS;
}

inline int ChildrenPriceCode::getMaxRentLength() const {
    return MAX_DAY_CHILDRENS;
}

inline double ChildrenPriceCode::getFeePerExtraDay() const {
    return FEE_CHILDRENS;
}

inline bool ChildrenPriceCode::hasBonus() const {
    return false;
}

inline ChildrenPriceCode::~ChildrenPriceCode() {

}
#endif //GENREFAC2_CHILDRENPRICECODE_H
