#ifndef NANOPB_PB_HPP
#define NANOPB_PB_HPP

#include <stdint.h>

namespace nanopb {

template <size_t N>
struct Bytes {
    size_t size;
    uint8_t bytes[N];
};

} // namespace nanopb

#endif
