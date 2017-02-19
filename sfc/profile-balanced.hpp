#if defined(DEBUGGER)
  #error "xSnes: debugger not supported with balanced profile."
#endif

#include <sfc/cpu/cpu.hpp>
#include <sfc/smp/smp.hpp>
#include <sfc/alt/dsp/dsp.hpp>
#include <sfc/alt/ppu-balanced/ppu.hpp>
