#ifdef ZIMG_ARM

#if defined(_WIN32)
  #define NOMINMAX
  #define STRICT
  #define WIN32_LEAN_AND_MEAN
  #include <Windows.h>
#elif defined(__linux__)
  #include <sys/auxv.h>
  #include <asm/hwcap.h>
#endif

#include "cpuinfo_arm.h"

namespace zimg {

namespace {

ARMCapabilities do_query_arm_capabilities() noexcept
{
	ARMCapabilities caps = { 0 };

	// NEON is required for ARMv8a.
	caps.neon  = 1;
	caps.vfpv4 = 1;
	return caps;
}

} // namespace


ARMCapabilities query_arm_capabilities() noexcept
{
	static const ARMCapabilities caps = do_query_arm_capabilities();
	return caps;
}

} // namespace zimg

#endif // ZIMG_ARM
