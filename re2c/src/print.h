#ifndef _print_h
#define _print_h

#include <iosfwd>

#include "src/c99_stdint.h"

namespace re2c
{

void prtCh(std::ostream&, uint32_t);
void prtHex(std::ostream&, uint32_t);
void prtChOrHex(std::ostream&, uint32_t);
void printSpan(std::ostream&, uint32_t, uint32_t);

} // end namespace re2c

#endif