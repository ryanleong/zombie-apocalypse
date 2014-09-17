#ifndef SIMULATION_H_
#define SIMULATION_H_

#include "world.h"

void simulation_step (const world_t * input, world_t * output);

void finishStep(world_t * input, world_t * output);

#endif /* SIMULATION_H_ */
