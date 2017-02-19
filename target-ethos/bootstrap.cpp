#include <sfc/interface/interface.hpp>
#include <gb/interface/interface.hpp>

void Program::bootstrap() {
  interface = new Interface;

  emulator.append(new SuperFamicom::Interface);
  emulator.append(new GameBoy::Interface);

  for(auto& system : emulator) system->bind = interface;
}
