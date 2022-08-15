#pragma once
#include "includes.h"

// MKT strings
#include <str/MKTstr.h>
// MKT math
#include <math/math.h>

#ifdef __MKT_THIRD__

_ERR_TYPE _MKT_Error;

#else

_OUT _ERR_TYPE _MKT_Error;

#endif