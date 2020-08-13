// Copyright (c) 2020 Simons Foundation
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You may obtain a copy of the License at
//     https://www.gnu.org/licenses/gpl-3.0.txt
//
// Authors: Nils Wentzell

#pragma once

#warning The use of the triqs/h5.hpp header deprecated. \
  The h5 functionality has been moved into the h5/h5.hpp header \
  in order to make it usable also outside of the triqs project. \
  The namespace was renamed from triqs::h5 to just h5. \
  Please adjust your application accordingly.

#include <h5/h5.hpp>

namespace triqs::h5 {
  using namespace ::h5;
}