/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
/**
 * @file nn/Utils.h
 *
 * Utils for modules.
 */

#pragma once

#include <af/dim4.hpp>

#include "flashlight/common/Defines.h"

namespace fl {
namespace detail {
size_t getNumRnnParams(
    int input_size,
    int hidden_size,
    int num_layers,
    RnnMode mode,
    bool bidirectional);

std::pair<dim_t, dim_t> computeFans(af::dim4 dims);

int derivePadding(
    int inSz,
    int filterSz,
    int stride,
    int pad);

} // namespace detail
} // namespace fl
