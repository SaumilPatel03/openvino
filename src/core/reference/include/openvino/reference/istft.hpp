// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/core/shape.hpp"

namespace ov {
namespace reference {
void istft(const float* in_data,
           const float* window,
           float* final_result,
           const Shape& signal_shape,
           const Shape& window_shape,
           const int64_t frame_size,
           const int64_t frame_step,
           const int64_t length,
           const bool center,
           const bool normalized);
}  // namespace reference
}  // namespace ov
