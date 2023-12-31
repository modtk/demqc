#pragma once

// RETURN STATUS CODES
#define PARTIAL 2 // PARTIALLY TRUE, AMBIGUOUS DEPENDING ON FUNCTION
#define TRUE    1 // TRUE, YES, SUCCESS
#define FALSE   0 // FALSE, NO, FAILURE
#define LESSTRUE PARTIAL || FALSE // LESS THAN TRUE, EITHER `PARTIAL` OR `FALSE`
