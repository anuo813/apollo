/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include "modules/common/math/vec2d.h"
#include "modules/common/proto/pnc_point.pb.h"

namespace apollo {
namespace common {
namespace util {

class PointFactory {
 public:
  template <typename XY>
  static inline math::Vec2d ToVec2d(const XY& xy) {
    return math::Vec2d(xy.x(), xy.y());
  }

  static inline SLPoint ToSLPoint(const double s, const double l) {
    SLPoint sl;
    sl.set_s(s);
    sl.set_l(l);
    return sl;
  }
};

}  // namespace util
}  // namespace common
}  // namespace apollo