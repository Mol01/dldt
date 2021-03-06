/*
// Copyright (c) 2019 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef GATHER_H
#define GATHER_H

#include "cldnn.h"


/// @addtogroup c_api C API
/// @{
/// @addtogroup c_topology Network Topology
/// @{
/// @addtogroup c_primitives Primitives
/// @{

#ifdef __cplusplus
extern "C" {
#endif
typedef enum
{
    cldnn_gather_along_b = 0,
    cldnn_gather_along_f = CLDNN_TENSOR_BATCH_DIM_MAX,
    cldnn_gather_along_x = CLDNN_TENSOR_BATCH_DIM_MAX + CLDNN_TENSOR_FEATURE_DIM_MAX,
    cldnn_gather_along_y = cldnn_gather_along_x + 1
} cldnn_gather_axis;

CLDNN_BEGIN_PRIMITIVE_DESC(gather)
/// @brief Gathering axis;
cldnn_gather_axis axis;
/// @brief Output shape
cldnn_tensor output_shape;
CLDNN_END_PRIMITIVE_DESC(gather)

CLDNN_DECLARE_PRIMITIVE_TYPE_ID(gather);

#ifdef __cplusplus
}
#endif

/// @}
/// @}
/// @}
#endif // GATHER_H
