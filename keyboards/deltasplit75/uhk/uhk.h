#pragma once

#include "deltasplit75.h"

#include "quantum.h"

//matrix is defined in a weird way here; the layout on both sides are asymmetrical, but the "matrix" is symmetrical but with empty gaps
//the last column is defined as a separate row because the firmware currently doesnt support more than 8 columns (this layout has 9 columns per side) K45 and K110 are the Bs on both sides; K53 and K106 are extra keys for ISO
#define LAYOUT_uhk( \
	K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,      K70,   K71,   K72,   K73,   K74,   K75,   K76,   K77, \
	K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,      K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87, \
	K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,      K90,   K91,   K92,   K93,   K94,   K95,   K96,   K97, \
	K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,      K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107, \
	K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,      K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117, \
	K50,   K51,   K52,   K53,   K54,   K55,   K56,   K57,      K120,  K121,  K122,  K123,  K124,  K125,  K126,  K127 \
	) \
	{ \
		{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07}, \
		{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17}, \
		{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27}, \
		{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37}, \
		{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47}, \
		{ K50,   K51,   K52,   K53,   K54,   K55,   K56,   K57}, \
\
		{ K70  , K71,   K72,   K73,   K74,   K75,   K76,   K77}, \
		{ K80,   K81,   K82,   K83,   K84,   K85,   K86,   K87}, \
		{ K90,   K91,   K92,   K93,   K94,   K95,   K96,   K97}, \
		{ K100,  K101,  K102,  K103,  K104,  K105,  K106, K107}, \
		{ K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117}, \
		{ K120,  K121,  K122,  K123,  K126, K125, K126,  K127}, \
	}

