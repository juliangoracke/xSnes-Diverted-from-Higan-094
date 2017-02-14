#if defined(DEBUGGER)
  #error "xSnes: debugger not supported with xSnes profile."
#endif

#include <sfc/cpu/cpu.hpp>
#include <sfc/smp/smp.hpp>
#include <sfc/dsp/dsp.hpp>
#include <sfc/alt/ppu-performance/ppu.hpp>
