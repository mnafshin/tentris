#ifndef SPARSETENSOR_EINSUM_TYPES_HPP

#define SPARSETENSOR_EINSUM_TYPES_HPP

#include <cstdint>
#include <vector>


namespace sparsetensor::operations {
    /**
     * Type for labels (uint8_t).
     */
    using label_t = uint8_t;

    /**
     * Type for the position of a operand (uint8_t).
     */
    using op_pos_t=uint8_t;

    constexpr uint8_t OP_POS_MAX = UINT8_MAX;

    /**
     * Type for the position of a label (uint8_t).
     */
    using label_pos_t = uint8_t;

    /**
     * A raw subscript is a vector of uint8s (uint8_t).
     */
    using raw_subscript = ::std::vector<uint8_t>;
}

#endif //SPARSETENSOR_EINSUM_TYPES_HPP
