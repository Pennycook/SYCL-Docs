// Copyright (c) 2011-2024 The Khronos Group, Inc.
// SPDX-License-Identifier: MIT

namespace sycl {

template <typename T = void> struct maximum {
  T operator()(const T& x, const T& y) const;
};

template <> struct maximum<void> {
  template <class T, class U> constexpr auto operator()(T&& t, U&& u) const
  -> /* see below */;

  using is_transparent = /* unspecified */;
};

} // namespace sycl
