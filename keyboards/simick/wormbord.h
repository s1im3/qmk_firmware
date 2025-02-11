#pragma once

#include "quantum.h"

/* LAYOUT
 * ┌───┼───┬───┬───┬───┐
 * │K00│K01│K02│K03│K04│
 * ├───┼───┼───┼───┼───┤
 * │K10│K11│K12│K33│K14│
 * ├───┼───┼───┼───┼───┤
 * │K20│K21│K22│K23│K24│
 * └───┴───┴───┴───┴───┘
 */
#define LAYOUT( \
	K00, K01, K02, K03, K04, \
	K10, K11, K12, K13, K14, \
	K20, K21, K22, K23, K24  \
) { \
	{ K00, K01, K02, K03, K04 }, \
	{ K10, K11, K12, K13, K14 }, \
	{ K20, K21, K22, K23, K24 }  \
}
