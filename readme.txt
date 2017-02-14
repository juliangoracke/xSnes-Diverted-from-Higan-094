xSnes v1.00 by "Julian Goracke"
Derived from higan v094 
higan/bsnes Developed by "byuu"
Licensed under the General Public License v3.0
"http://opensource.org/licenses/GPL-3.0"


Philosophy:
The idea behind the xSnes fork of higan/bsnes is to preserve and separate the near
perfect Super Nintendo portion from the multi-emulator known as higan. This means
the emulator cores for the 8-bit Nintendo, and Game Boy Advance have been removed.
The Game Boy and Game Boy Color emulators remain intact to accommodate the Super Game
Boy. However, the Game Boy and Game Boy Color are not emulated as independent systems
as compiled. Therefore, to play Game Boy & Game Boy Color games, you must use the 
Super Game Boy exclusively as a Super Nintendo Adapter. I agree clean code is very
important.Therefore, I have tried to follow byuu's lead. The only code
I would find to be outside of this philosophy would be the BS-X code, but I must stress
that code is extremely narrow and only pertains specifically to the BS-X Satellaview. 

higan v094 - xSnes v1.00

- Removed 8-bit Nintendo, and Game Boy Advance emulation cores
- Game Boy and Game Boy Color require the exclusive use of the Super Game Boy
- Audio now defaults to the 32hz frequency to match real hardware
- Custom xSnes profile, Performance profile PPU with Accuracy profile CPU, SMP, & DSP
- Changed cartridge folder name for save states to "states"
- Ananke no longer supports *.fc,*.nes, or *.gba extensions
- Default config path changed from "%AppData%\higan" to "%AppData%\xSnes"
- F1 & F2 input keys have been assigned by default for Export Memory and Tracer minus
  input.bml
- Emulator Icon has been replaced and the UI has been slightly altered
- Emulator has been rebranded to "xSnes" & Modified "About" information located in the
  UI Conifg-Advanced tab
- Super Game Boy's video renders in real time (v094r01)
- MSU-1 code has been simpified (v094r08)
- Base system volume is no longer cut in half (v094r08) 
- Tiny bugfix in drawing of the Super Scope and Justifier cursor was fixed
  as they are meant to be red and green respectively, not black (v094r08)
- Performance profile Tetris Attack flicking in VS CPU mode fixed (v094r27) 
- BS-X Satellaview specific improvements (thanks LuigiBlood, & quequotion)
- Proper NSS Dip switch function (thanks hex_usr)
- Expanded exportMemory to dump expansion chip-specific memory. Currently, only
  the SA-1, ST-018, and Cx4 are supported (thanks hex_usr)
- Added exportRegisters for exporting some PPU registers to a debug report in
  BML format, Not all registers are supported (thanks hex_usr)

Some audio chipsets may not support the 32hz frequency and you may be required to 
make adjustments. Please adjust the audio timing in the UI as well if this is the 
case. The v094r01-v094r27 fixes are migrated from official WIPs released by byuu. 
The xSnes profile is a hybrid between Performance, Balanced, & Accuracy. It should 
run quicker than Balanced but slower than accuracy, although xSnes has a better 
DSP than the Balanced profile. The xSnes profile has much better compatibility over
the Performance profile (e.g. Mortal Kombat II). The reasoning is to consolidate the
multiple profiles into one standard that accommodates the majority of users while 
still maintaining a very high level of accuracy. Another bonus to this approach is 
better save state compatibility if all users of xSnes are using a single executable,
their save states will be cross compatible. The Performance, Balanced, and Accuracy 
profiles have not been removed from the source and still can be compiled at user's 
discretion.


Press F1 to Toggle Tracer (Debug)
Press F2 to Export Memory (Debug)
Press F11 to Toggle Fullscreen


Cartridge Folders:
The higan family of emulators which includes xSnes "manages games in a
library. To play a game you must first import the game. After doing so, 
the game will appear inside your library, and can then be loaded and 
played." Think of it as the folder representing the physical cartridge.
The folder contains the program data, save data, manifest, co-processor
rom, save states*, & debug*. It's convenient when handling MSU-1 games.
The path to the game libary can be me modified: "Settings-Configuration-
Advanced".

* = Special Data Subfolder

Super Nintendo:
Simply import the rom file and play. Please place the rom dump of the 
co-processor in the same location as the game rom prior to import if 
required. The "Nintendo Super System", "Super Famicom Box", & "SNES 
Bootleg" MAME ROMs are supported if modifications are made to allow 
their use in an SNES/SFC console via "SD2SNES" or emulator. 

Super Game Boy:
The user will need both a Super Game Boy rom (.sfc or smc) and the 
bootstrap (sgb.rom) placed in the same folder and imported. When 
the Super Game Boy is launched as a Super Nintendo game you will be 
prompted to choose a Super Game Boy game. In the lower right hand 
corner of the screen you may select between imported Game Boy (.gb) 
& Game Boy Color (.gbc) games. Only the Game Boy Color games which had
compatibility support will function properly with the Super Game Boy.

BS-X Satellaview:
The user will need to import the BS-X Satellaview rom (.sfc or .smc).
You can find english translations of the bios.sfc on the BS-X Project 
webspace by "LuigiBlood". When the BS-X Satellaview is launched as a
Super Nintendo game, the user will be prompted to choose an imported
BS-X Satellaview rom (.bs). Within the bios after creating a character
re-enter the first house and "Load Stored Data". 

BS-X Satellite Service:
The "bsxdat" folder can be placed in the xSnes config directory for use
with the bios via "Receive Program", as an example of Satellite Service.
However, "Load Stored Data" after transmission creates an error message 
due to memory pak issues. Loading the stored data is not required and it 
otherwise seemingly works fine. At the moment these are created using 
SatellaWave v0.1 Beta. Perhaps someone will create an unoffical remote 
server at some point.

"bsxdat" Folder Location Example:
"\Users\ADMINACCOUNT\AppData\Roaming\xSnes"

Sufami Turbo:
The user will need to import the Sufami Turbo rom (.sfc or .smc). When
the Sufami Turbo is launched as a Super Nintendo game, the user will be
prompted to choose an imported Sufami Turbo rom (.st). The Sufami Turbo
had two cartridge linkable slots. Most games supported this function so
you can choose the imported roms for both slots A & B.


Reference:

higan/bsnes by "byuu" - http://byuu.org/

BS-X Project by "LuigiBlood" - http://bsxproj.superfamicom.org/


Credits:

"byuu"
The creator of higan/bsnes.

"LuigiBlood" 
The maintainer of the BS-X Project. You can find the bios english translation
on the webspace. Thanks to the contributors of this project as well.

"hex_usr" 
The maintainer of "nSide" a "higan" fork which includes many improvements
to the NES/FC core. Thanks to the contributors of this project as well.

"quequotion"
The maintainer of the higan-qq source which incorporates third-party improvements 
into a single source, along with independent modifcations by "quequotion".

"AWJ"
Fixed the Tetris Attack flicking in VS CPU mode for the Performance profile. Thanks :)

"libRetro Wiki"
They have a nice compatibility list for higan/bsnes testing. 

"chrisbanks2"
The icon used for xSnes is licensed under "CC BY-NC-ND 4.0" unmodified 
design. The license txt is included with the source.../data

Have fun...

____________________________________________________________________________

Changelog: v1.00

- Initial Release


What is Missing: ???

- Replace the game library golden diamond shape icon with a 
  little Super Nintendo cart icon???
- Solve Memory Pak issues-BS-X Satellaview???
- Auto Fullscreen when Game is launched from within game library GUI???
- Gamepad input screensaver prevention??? When using the real  
  Super Nintendo the player isn't interrupted by a screensaver.


Recommended System Requirements: xSnes Profile

- Intel Core 2 Duo E8400 or AMD equivalent 
- 192mb RAM free - Dual Channel Mode Recommended
- OpenGL 3.2-capable graphics card
- Sound card that supports non-standard
  sampling rates natively (32khz, 64khz...)
- Recommended OS: Windows 7 x64 Operating System or Newer

- If the end user meets or exceeds these system requirements even the most demanding games
  should run flawlessly at full frame rate. (e.g. Doom)

Known Bugs: Core Compatibility
"
- I tested against games listed in the "libRetro Wiki",although the list is outdated.
  "http://wiki.libretro.com/index.php?title=Nintendo_SNES_Core_Compatibility"

Profile: Accuracy

- Magical Drop (Japan) will not play voice effect. The game hangs while 
  attempting to display the Game Over screen in Endless Mode. higan v094 
  also includes this bug.
- Super Bonk's demo sequence has timing issue. Bonk falls short of entering a pipe,
  which ruins the rest of the demo as he continues reading inputs and gets stuck
  in the area above the pipe. higan v094 also includes this bug. (Thanks hex_usr)

VS.

Profile: xSnes

- Magical Drop (Japan) will not play voice effect. The game hangs while 
  attempting to display the Game Over screen in Endless Mode. higan v094 
  also includes this bug.
- Super Bonk's demo sequence has timing issue. Bonk falls short of entering a pipe,
  which ruins the rest of the demo as he continues reading inputs and gets stuck
  in the area above the pipe. higan v094 also includes this bug. (Thanks hex_usr)
- A.S.P. Air Strike Patrol Black lines show up during gameplay.The shadow
  below the aircraft is missing. Same as Balanced profile. 
- NHL ’94 Corrupted line on the NHL logo screen. 
