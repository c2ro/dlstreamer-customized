/*******************************************************************************
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 ******************************************************************************/

#include "inference_backend/pre_proc.h"

namespace InferenceBackend {

class OpenCV_VPP : public ImagePreprocessor {
  public:
    OpenCV_VPP();
    ~OpenCV_VPP();

    // PreProc interface
    void Convert(const Image &src, Image &dst, const InputImageLayerDesc::Ptr &pre_proc_info,
                 const ImageTransformationParams::Ptr &image_transform_info, bool bAllocateDestination);
    void ReleaseImage(const Image &);
};

} // namespace InferenceBackend
