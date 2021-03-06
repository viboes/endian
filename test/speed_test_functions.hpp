//  speed_test_functions.hpp  ----------------------------------------------------------//

//  Copyright Beman Dawes 2013

//  Distributed under the Boost Software License, Version 1.0.
//  http://www.boost.org/LICENSE_1_0.txt

//--------------------------------------------------------------------------------------//

//  These functions are separately compiled partially to defeat optimizers and
//  partially to create a worst case scenario. They are in a user namespace for
//  a bit of realism.

//--------------------------------------------------------------------------------------//

#ifndef BOOST_ENDIAN_SPEED_TEST_FUNCTIONS_HPP
#define BOOST_ENDIAN_SPEED_TEST_FUNCTIONS_HPP

#include <boost/cstdint.hpp>
#include <boost/endian/types.hpp>

namespace user
{
  using namespace boost;
  using namespace boost::endian;

  int16_t return_x_big_align_int16(int16_t x, big_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_x_little_align_int16(int16_t x, little_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_x_value_big_align_int16(int16_t x, big_align_int16_t) BOOST_NOEXCEPT;
  int16_t return_x_value_little_align_int16(int16_t x, little_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_x_in_place_big_align_int16(int16_t x, big_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_x_in_place_little_align_int16(int16_t x, little_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_y_big_align_int16(int16_t x, big_align_int16_t y) BOOST_NOEXCEPT;
  int16_t return_y_little_align_int16(int16_t x, little_align_int16_t y) BOOST_NOEXCEPT;

  int32_t return_x_big_align_int32(int32_t x, big_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_x_little_align_int32(int32_t x, little_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_x_value_big_align_int32(int32_t x, big_align_int32_t) BOOST_NOEXCEPT;
  int32_t return_x_value_little_align_int32(int32_t x, little_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_x_in_place_big_align_int32(int32_t x, big_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_x_in_place_little_align_int32(int32_t x, little_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_y_big_align_int32(int32_t x, big_align_int32_t y) BOOST_NOEXCEPT;
  int32_t return_y_little_align_int32(int32_t x, little_align_int32_t y) BOOST_NOEXCEPT;

  int64_t return_x_big_align_int64(int64_t x, big_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_x_little_align_int64(int64_t x, little_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_x_value_big_align_int64(int64_t x, big_align_int64_t) BOOST_NOEXCEPT;
  int64_t return_x_value_little_align_int64(int64_t x, little_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_x_in_place_big_align_int64(int64_t x, big_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_x_in_place_little_align_int64(int64_t x, little_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_y_big_align_int64(int64_t x, big_align_int64_t y) BOOST_NOEXCEPT;
  int64_t return_y_little_align_int64(int64_t x, little_align_int64_t y) BOOST_NOEXCEPT;

}

#endif
