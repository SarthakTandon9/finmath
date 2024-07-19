//
// Created by Prajwal on 7/18/24.
//

#include "finmath/Interest and Annuities/simple_interest.h"
#include <cmath>

double simple_interest(double principal, double rate, double time) {
    return principal * (1 + rate * time);
}