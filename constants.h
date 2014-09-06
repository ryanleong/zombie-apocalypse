/*
 * constants.h
 *
 *  Created on: Sep 1, 2014
 *      Author: adam
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include "clock.h"

#define MAX_COLOR 1 // used in apocalypse.c to express saturation of tile

#define PROBABILITY_INITIAL_PREGNANCY 0.017 // 2 children = 1.5 years in 85 years

#define PROBABILITY_ONE_CHILD 0.8
#define PROBABILITY_TWO_CHILDREN (PROBABILITY_ONE_CHILD + 0.19)
#define PROBABILITY_THREE_CHILDEN (PROBABILITY_TWO_CHILDREN + 0.01)

#define ZOMBIE_DECOMPOZITION_MEAN (1 * IN_YEARS)
#define ZOMBIE_DECOMPOZITION_STD_DEV (1 * IN_YEARS)

#define ZOMBIE_INFECTION_MEAN (2 * IN_MONTHS)
#define ZOMBIE_INFECTION_STD_DEV (2 * IN_WEEKS)

#define PREGNANCY_DURATION_MEAN (9 * IN_MONTHS)
#define PREGNANCY_DURATION_STD_DEV (2 * IN_WEEKS)

#define MALE_FEMALE_RATE 0.5

#define LIFE_EXPECTANCY_FEMALE_MEAN (85 * IN_YEARS) // wiki
#define LIFE_EXPECTANCY_FEMALE_STD_DEV (10 * IN_YEARS)
#define LIFE_EXPECTANCY_MALE_MEAN (81 * IN_YEARS) // wiki
#define LIFE_EXPECTANCY_MALE_STD_DEV (10 * IN_YEARS)

#define FERTILITY_START_FEMALE_MEAN (15 * IN_YEARS)
#define FERTILITY_START_FEMALE_STD_DEV (2 * IN_YEARS)
#define FERTILITY_START_MALE_MEAN (15 * IN_YEARS)
#define FERTILITY_START_MALE_STD_DEV (2 * IN_YEARS)

#define FERTILITY_END_FEMALE_MEAN (45 * IN_YEARS)
#define FERTILITY_END_FEMALE_STD_DEV (5 * IN_YEARS)
#define FERTILITY_END_MALE_MEAN (80 * IN_YEARS)
#define FERTILITY_END_MALE_STD_DEV (10 * IN_YEARS)

#endif /* CONSTANTS_H_ */
