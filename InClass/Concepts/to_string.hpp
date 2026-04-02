#include <concepts>
#include <format>
#include <string>

// to_string will convert most variable types into a string.
//
// Order of resolution:
// - If you pass in a string, it returns that string.
// - If a variable has a ToString member function, use it!!
// - If you pass in something that can use std::format, do so.

namespace cse498 {

  template <typename T>
  concept CanBeFormatted = requires (const T x) {
    { std::format("{}", x) } -> std::convertible_to<std::string>;
  };

  template <typename T>
  concept HasToString = requires (const T x) {
    { x.ToString() } -> std::convertible_to<std::string>;
  };

  template <typename T>
  std::string to_string(T in) {
    if constexpr (std::convertible_to<T, std::string>) {
      return in;
    }
    else if constexpr (HasToString<T>) {
      return in.ToString();
    }
    else if constexpr (CanBeFormatted<T>) {
      return std::format("{}", in);
    }
    else { return "[[error]]"; }
  }


}