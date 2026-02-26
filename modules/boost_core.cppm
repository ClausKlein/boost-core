module;

#include <boost/core/detail/demangle_cxxabi.hpp> // must be the 1st one to avoid conflicts with import std
#include <cstdlib>
#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/static_assert.hpp>
#include <boost/assert.hpp>
#include <boost/assert/source_location.hpp>
#include <boost/cstdint.hpp>
#if defined(_MSC_VER)
#include <boost/core/detail/intrin.hpp>
#endif
#include <boost/throw_exception.hpp>

export module boost.core;

import std;

#define BOOST_CORE_INTERFACE_UNIT
#define BOOST_IN_MODULE_PURVIEW

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#endif

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 5244)
#endif

extern "C++" {
#include <boost/core/detail/is_same.hpp>
#include <boost/core/detail/string_view.hpp>
#include <boost/core/detail/splitmix64.hpp>
#include <boost/core/demangle.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/core/lightweight_test.hpp>
#include <boost/core/lightweight_test_trait.hpp>
#include <boost/core/type_name.hpp>
#include <boost/core/bit.hpp>
}