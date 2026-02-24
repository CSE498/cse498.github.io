// Add spiffy header about from CSE 498

// If you turn on the flag AUDIT, auditing will be done.
// To do so, compile with -DAUDIT

#include <iostream>
#include <vector>

namespace cse498 {

#ifndef AUDIT
  template <typename... ARG_Ts>
  using AuditedVector = std::vector<ARG_Ts...>;

#else

  template <typename VALUE_T, typename... ARG_Ts>
  class AuditedVector {
  private:
    std::vector<VALUE_T, ARG_Ts...> std_vector{};

    static constexpr size_t MAX_SIZE = 1'000'000'000'000;
    
    [[noreturn]] void Error(auto... args) {
      std::cout << "ERROR: ";
      ((std::cout << args), ...);
      std::cout << std::endl;
      abort();
    }

  public:
    // AuditedVector() = default;
    // AuditedVector(const AuditedVector &) = default;
    // AuditedVector(AuditedVector &&) = default;

    // AuditedVector & operator=(const AuditedVector &) = default;
    // AuditedVector & operator=(AuditedVector &&) = default;

    size_t size() const { return std_vector.size(); }

    void resize(size_t new_size) {
      if (new_size > MAX_SIZE) {
        Error("Trying to resize to ", new_size, " elements. Too big!");
      }
      std_vector.resize(new_size);
    }

    VALUE_T & operator[](size_t index) {
      if (index >= std_vector.size()) {
        Error("Index out of bounds, vector size = ", std_vector.size(), ", but index = ", index, ")");
      }
      return std_vector[index];
    }
    const VALUE_T & operator[](size_t index) const {
      return std_vector[index];
    }

    VALUE_T & front() {
      if (size() == 0) {
        Error("Trying to run front() on an empty vector.");
      }
      return std_vector.front();
    }

    const VALUE_T & front() const {
      if (size() == 0) {
        Error("Trying to run front() on an empty vector.");
      }
      return std_vector.front();
    }

    VALUE_T & back() {
      if (size() == 0) {
        Error("Trying to run back() on an empty vector.");
      }
      return std_vector.back();
    }

    const VALUE_T & back() const {
      if (size() == 0) {
        Error("Trying to run back() on an empty vector.");
      }
      return std_vector.back();
    }

  };

#endif

}