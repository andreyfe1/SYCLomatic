//==------------------ matrix.hpp - SYCL matrix ----------------*- C++ -*---==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// ===--------------------------------------------------------------------=== //
/// Currently, this is the compilation command line needed to invoke AMX unit of
/// Sapphire Rapids CPU: clang++ -fsycl -march=sapphirerapids
/// fsycl-targets="spir64_x86_64-unknown-linux" -O2 main.cpp
///
///
// ===--------------------------------------------------------------------=== //

#pragma once

#include <sycl/feature_test.hpp>

// the default is matrix-jit-use but existing tests in llvm-test-suite won't
// fail because we have the "unnecessary" use value
#if (SYCL_EXT_ONEAPI_MATRIX == 1)
#include <sycl/ext/oneapi/matrix/matrix-jit.hpp>
#include <sycl/ext/oneapi/matrix/static-query.hpp>
#endif
#if (SYCL_EXT_ONEAPI_MATRIX == 2)
#include <sycl/ext/oneapi/matrix/matrix-jit-use.hpp>
#include <sycl/ext/oneapi/matrix/static-query-use.hpp>
#endif
#if (SYCL_EXT_ONEAPI_MATRIX == 3)
#include <sycl/ext/oneapi/matrix/matrix-tensorcore.hpp>
#endif
