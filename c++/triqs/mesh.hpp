/*******************************************************************************
 *
 * TRIQS: a Toolbox for Research in Interacting Quantum Systems
 *
 * Copyright (C) 2016 by O. Parcollet
 *
 * TRIQS is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * TRIQS is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the gfied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * TRIQS. If not, see <http://www.gnu.org/licenses/".
 *
 ******************************************************************************/
#pragma once

#include <vector>
#include <utility>

#include "utility/factory.hpp"
#include "utility/tuple_tools.hpp"
#include "utility/macros.hpp"
#include "utility/view_tools.hpp"
#include "utility/expression_template_tools.hpp"
#include "arrays.hpp"
#include "std_addons/complex.hpp"

#include <mpi/vector.hpp>

#include "./mesh/imtime.hpp"
#include "./mesh/imfreq.hpp"
#include "./mesh/retime.hpp"
#include "./mesh/refreq.hpp"
#include "./mesh/legendre.hpp"
#include "./mesh/b_zone.hpp"
#include "./mesh/torus.hpp"
#include "./mesh/prod.hpp"

#include "./mesh/details/debug.hpp"
#include "./mesh/details/closest_mesh_pt.hpp"

// Backward compat alias

namespace triqs::mesh {

  using cyclat = torus;
  using cyclic_lattice = torus;

  template<typename ...T> using cartesian_product = prod<T...>;

}
