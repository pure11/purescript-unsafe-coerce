///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Coerce.hh
// Copyright   :  (c) Andy Arvanitis 2016
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Unsafe Coerce FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Unsafe_Coerce_FFI_HH
#define Unsafe_Coerce_FFI_HH

#include "PureScript/PureScript.hh"

namespace Unsafe_Coerce {
  using namespace PureScript;

  // foreign import unsafeCoerce :: forall a b. a -> b
  //
  inline auto unsafeCoerce(const any& x) -> any {
    return x;
  }

}

#endif // Unsafe_Coerce_FFI_HH
