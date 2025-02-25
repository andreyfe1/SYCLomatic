// RUN: %clang_cc1 -no-opaque-pointers -triple spir64 -fsycl-is-device -disable-llvm-passes -emit-llvm %s -o - | FileCheck %s --check-prefix=SPIR
// RUN: %clang_cc1 -no-opaque-pointers -triple x86_64 -fsycl-is-device -disable-llvm-passes -emit-llvm %s -o - | FileCheck %s --check-prefix=X86

// REQUIRES: x86-registered-target

__attribute__((sycl_device)) void foo(__attribute__((opencl_global)) int *);
__attribute__((sycl_device)) void foo(__attribute__((opencl_local)) int *);
__attribute__((sycl_device)) void foo(__attribute__((opencl_private)) int *);
__attribute__((sycl_device)) void foo(int *);

// SPIR: declare spir_func void @_Z3fooPU3AS1i(i32 addrspace(1)* noundef)
// SPIR: declare spir_func void @_Z3fooPU3AS3i(i32 addrspace(3)* noundef)
// SPIR: declare spir_func void @_Z3fooPU3AS0i(i32* noundef)
// SPIR: declare spir_func void @_Z3fooPi(i32 addrspace(4)* noundef)

// X86: declare void @_Z3fooPU8SYglobali(i32* noundef)
// X86: declare void @_Z3fooPU7SYlocali(i32* noundef)
// X86: declare void @_Z3fooPU9SYprivatei(i32* noundef)
// X86: declare void @_Z3fooPi(i32* noundef)

__attribute__((sycl_device)) void test() {
  __attribute__((opencl_global)) int *glob;
  __attribute__((opencl_local)) int *loc;
  __attribute__((opencl_private)) int *priv;
  int *def;
  foo(glob);
  foo(loc);
  foo(priv);
  foo(def);
}
