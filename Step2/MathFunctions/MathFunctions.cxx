#ifdef USE_MYMATH
#  include "mysqrt.h"
#endif

#include <cmath>

#ifdef USE_MYMATH
return detail::mysqrt(x);
#else
  return std::sqrt(x);
#endif