#pragma once

#ifdef ZIMG_ARM

#ifndef ZIMG_X86_CPUINFO_ARM_H_
#define ZIMG_X86_CPUINFO_ARM_H_

namespace zimg {

/**
 * Bitfield of selected ARM feature flags.
 */
struct ARMCapabilities {
};

ARMCapabilities query_arm_capabilities() noexcept;

} // namespace zimg

#endif // ZIMG_X86_CPUINFO_ARM_H_
#endif // ZIMG_ARM
