// SPDX-License-Identifier: MIT
// Copyright (c) 2024, Advanced Micro Devices, Inc. All rights reserved.

#include "a8w8_rowwise_256x32x64x512_16x16_2x1_32x8x1_32x8x1_1x32x1x8_8x8x1_1x2_intrawave_v3.cuh"

template torch::Tensor
a8w8_rowwise_256x32x64x512_16x16_2x1_32x8x1_32x8x1_1x32x1x8_8x8x1_1x2_intrawave_v3<F16>(
    torch::Tensor &XQ,
    torch::Tensor &WQ,
    torch::Tensor &x_scale,
    torch::Tensor &w_scale,
    torch::Tensor &Y,
    std::optional<torch::Tensor> bias);
