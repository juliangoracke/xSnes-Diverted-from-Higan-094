uint8 r6003;      //control port
uint8 r6004;      //joypad 1
uint8 r6005;      //joypad 2
uint8 r6006;      //joypad 3
uint8 r6007;      //joypad 4
uint8 r7000[16];  //JOYP packet data
uint8 mlt_req;    //number of active joypads

uint8 output[4 * 512];
unsigned read_bank;
unsigned read_addr;
unsigned write_bank;
unsigned write_addr;
