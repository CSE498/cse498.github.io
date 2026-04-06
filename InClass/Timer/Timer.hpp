#include <chrono>
#include <print>

class Timer {
private:
  const char* m_Name;
  std::chrono::time_point<std::chrono::steady_clock> m_StartTimepoint;
  bool m_Stopped;

public:
  Timer(const char* name)
      : m_Name(name), m_Stopped(false)
  {
    m_StartTimepoint = std::chrono::steady_clock::now();
  }

  ~Timer()
  {
      if (!m_Stopped)
          Stop();
  }

  void Stop()
  {
    auto endTimepoint = std::chrono::steady_clock::now();

    long long start = std::chrono::time_point_cast<std::chrono::milliseconds>(m_StartTimepoint).time_since_epoch().count();
    long long end = std::chrono::time_point_cast<std::chrono::milliseconds>(endTimepoint).time_since_epoch().count();

    m_Stopped = true;

    std::println("Duration: {}ms", end - start);
  }
};
