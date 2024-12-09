#include <common.h>

//load at 8000E400

struct Texture
{
    const char * image;
    const char * clut;
};

//more japan

char fakecrash_japan[572] __attribute__ ((section (".data"))) = {0x10,0x22,0x12,0x22,0x11,0x23,0x12,0x10,0x22,0x3,0x21,0x22,0x22,0x22,0x22,0x42,0x44,0x24,0x12,0x51,0x55,0x55,0x21,0x22,0x61,0x12,0x1,0x23,0x11,0x10,0x12,0x1,0x24,0x44,0x3,0x0,0x0,0x0,0x11,0x11,0x11,0x6,0x50,0x55,0x22,0x12,0x60,0x11,0x0,0x16,0x1,0x30,0x11,0x30,0x31,0x0,0x0,0x11,0x11,0x11,0x87,0x88,0x88,0x8,0x50,0x55,0x22,0x2,0x60,0x1,0x0,0x16,0x0,0x30,0x1,0x13,0x1,0x30,0x11,0x89,0x88,0x88,0x88,0x88,0x88,0x8,0x50,0x55,0x22,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,0x11,0x91,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8,0x50,0x55,0x22,0x0,0x66,0x66,0x66,0x66,0x66,0x0,0x30,0x11,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8,0x50,0x55,0x42,0x36,0xaa,0x42,0xaa,0x2a,0x22,0x66,0x43,0x84,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x8,0x50,0x55,0x62,0xa1,0xaa,0x6a,0xaa,0xaa,0x22,0x22,0x12,0x42,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x97,0x89,0x8,0x56,0x55,0x22,0x22,0xaa,0x2a,0xaa,0xaa,0x22,0x22,0x22,0x22,0x84,0x88,0x88,0x88,0x88,0x88,0x78,0x22,0x92,0x8,0x22,0x52,0x0,0x1,0xa2,0xaa,0xaa,0x4a,0x22,0x22,0x22,0x22,0x92,0x88,0x88,0x88,0x88,0x88,0x28,0x22,0x22,0x67,0x22,0x52,0x10,0x14,0x0,0x24,0x22,0x22,0x22,0x22,0x22,0x22,0x42,0x87,0x88,0x88,0x88,0x88,0x48,0x22,0x42,0x48,0x22,0x52,0x0,0x1,0x0,0x20,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x89,0x88,0x88,0x88,0x88,0x48,0x22,0x42,0x49,0x22,0x52,0x0,0x0,0x0,0x26,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x74,0x88,0x88,0x88,0x88,0x48,0x22,0x42,0x22,0x22,0x52,0x0,0x0,0x0,0x26,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x92,0x88,0x88,0x88,0x88,0x18,0x22,0x42,0x24,0x22,0x54,0x0,0x0,0x0,0x21,0x22,0x22,0x22,0x22,0xa2,0x2a,0x22,0x42,0x87,0x88,0x88,0x88,0x18,0x22,0x44,0x22,0x42,0x54,0x0,0x0,0x46,0x22,0x22,0x22,0x22,0xa2,0xaa,0xaa,0x2a,0x22,0x89,0x88,0x88,0x88,0x18,0x22,0x24,0x22,0x44,0x55,0x33,0x41,0x22,0x22,0x22,0x22,0x22,0xa2,0xaa,0xaa,0x2a,0x22,0x89,0x88,0x88,0x88,0x18,0x24,0x44,0x22,0x54,0x55,0x22,0xaa,0xaa,0x2a,0x22,0x42,0x41,0xa2,0xaa,0xaa,0x2a,0x42,0x74,0x88,0x88,0x88,0x18,0x41,0x41,0x22,0x42,0x54,0xaa,0xaa,0xaa,0x22,0x44,0x44,0xa2,0x2a,0xaa,0xaa,0x22,0x24,0x92,0x88,0x88,0x19,0x11,0x11,0x21,0x22,0x22,0x52,0xaa,0x22,0x42,0x44,0x22,0xa2,0xaa,0xaa,0xaa,0x22,0x42,0x22,0x42,0x87,0x78,0x22,0x22,0x14,0x22,0x22,0x22,0x52,0x44,0x44,0x42,0xa1,0xaa,0x2a,0xaa,0xaa,0x22,0x22,0x44,0x22,0x22,0x89,0x98,0x22,0x22,0x24,0x22,0x22,0x22,0x54,0x12,0xaa,0xaa,0xa4,0xaa,0xaa,0xa2,0xaa,0x22,0x42,0x24,0x22,0x22,0x74,0x98,0x22,0x22,0x24,0x22,0x24,0x42,0x54,0x4a,0xaa,0xaa,0x2a,0xaa,0xaa,0x22,0x2a,0x22,0x44,0x22,0x22,0x22,0x92,0x88,0x49,0x44,0x44,0x44,0x14,0x41,0x55,0xaa,0xaa,0xaa,0x4a,0xaa,0xaa,0x22,0x22,0x42,0x24,0x22,0x22,0x22,0x42,0x88,0x68,0x41,0x14,0x91,0x9,0x50,0x55,0xaa,0xa2,0xaa,0x4a,0xa2,0x2a,0x22,0x42,0x44,0x22,0x22,0x22,0x22,0x22,0x88,0x11,0x44,0x11,0x0,0x0,0x50,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,};

char tropy_japan[572] __attribute__ ((section (".data"))) = {0x0,0x21,0x22,0x22,0x33,0x44,0x44,0x43,0x65,0x76,0x65,0x66,0x66,0x56,0x34,0x44,0x44,0x33,0x22,0x22,0x11,0x0,0x0,0x11,0x22,0x22,0x33,0x83,0x88,0x28,0x44,0x66,0x66,0x66,0x56,0x44,0x82,0x88,0x38,0x33,0x22,0x22,0x1,0x0,0x0,0x10,0x22,0x22,0x32,0x33,0x22,0x22,0x32,0x44,0x44,0x44,0x34,0x22,0x22,0x22,0x33,0x23,0x22,0x12,0x1,0x0,0x0,0x10,0x21,0x22,0x32,0x33,0x88,0x83,0x88,0x33,0x33,0x33,0x83,0x88,0x88,0x88,0x33,0x23,0x22,0x12,0x0,0x0,0x0,0x70,0x21,0x22,0x22,0x33,0x83,0x38,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x38,0x33,0x23,0x22,0x11,0x0,0x0,0x0,0x70,0x17,0x22,0x22,0x32,0x22,0x83,0x88,0x88,0x88,0x48,0x84,0x38,0x22,0x32,0x33,0x22,0x12,0x71,0x0,0x0,0x0,0x70,0x17,0x22,0x22,0x22,0x83,0x88,0x38,0x33,0x33,0x83,0x28,0x77,0x77,0x29,0x23,0x22,0x12,0x77,0x0,0x0,0x0,0x70,0x17,0x21,0x22,0x12,0x91,0xaa,0xcb,0xcc,0xcc,0xbc,0x79,0x97,0xcb,0xbc,0x3a,0x22,0x11,0x77,0x0,0x0,0x0,0x70,0x77,0x21,0x12,0x99,0x77,0x77,0x77,0xba,0xcc,0x9b,0x97,0x66,0xad,0xcb,0xab,0x22,0x71,0x77,0x0,0x0,0x0,0x70,0x17,0x17,0x97,0xba,0xac,0x5c,0x66,0x97,0xca,0x7a,0x65,0x77,0x56,0xcb,0xbc,0x21,0x11,0x77,0x0,0x0,0x0,0x70,0x37,0x71,0xa1,0xcb,0xcc,0x65,0x77,0xa5,0xba,0xca,0x65,0x77,0x56,0xcb,0xbc,0x1a,0x31,0x77,0x0,0x0,0x0,0x70,0x87,0x44,0x94,0xaa,0xbb,0x5c,0x66,0xbc,0xca,0xcb,0x5d,0x66,0xc5,0xbb,0x99,0x44,0x84,0x77,0x0,0x0,0x0,0x70,0x27,0x11,0x11,0xa1,0xaa,0xbb,0xcc,0xab,0xcb,0xbb,0xbc,0xcc,0xab,0x9a,0x19,0x11,0x21,0x77,0x0,0x0,0x0,0x70,0x87,0x22,0x22,0x12,0xaa,0xba,0xbc,0xab,0xba,0xba,0xcc,0xbb,0xbb,0xaa,0x32,0x33,0x83,0x77,0x0,0x0,0x0,0x70,0x27,0x88,0x88,0x93,0x9a,0xcb,0xaa,0xbc,0xaa,0xcb,0xcc,0xbc,0xbc,0xaa,0x83,0x88,0x18,0x77,0x0,0x0,0x0,0x70,0xe7,0x11,0x11,0x93,0xa9,0xac,0xbc,0xa9,0xba,0xcb,0xbc,0xbc,0xcc,0xba,0x13,0x11,0xe1,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0x2e,0xa9,0xbc,0x9b,0x66,0xcc,0xcc,0xcc,0x5d,0xbd,0xba,0xcc,0xab,0xe2,0xee,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0x92,0xb9,0xac,0x69,0xbc,0xcc,0xcc,0xcc,0xcc,0xcc,0xab,0xcb,0xbc,0x21,0xee,0x77,0x0,0x0,0x0,0x70,0xe7,0x2e,0x91,0xca,0x9a,0xba,0xcb,0xcc,0xcc,0xcc,0xcc,0xcc,0xac,0xba,0xbc,0x1a,0xe2,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0xa9,0x9b,0xaa,0xab,0x77,0xca,0xcc,0xcc,0x9a,0x77,0xbc,0xaa,0xba,0x9a,0xee,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0x9e,0xaa,0x9a,0x77,0xb9,0xcb,0xcc,0xbc,0xbc,0x99,0x77,0x9a,0x9a,0xee,0xee,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0xee,0x99,0x79,0x97,0xab,0xba,0xbb,0xbb,0xaa,0x9a,0x79,0x97,0xe9,0xee,0xee,0x77,0x0,0x0,0x0,0x70,0xe7,0xee,0xee,0xee,0x7e,0x99,0x99,0x99,0xaa,0x9a,0x99,0x99,0x77,0xe7,0xee,0xee,0xee,0x77,0x0,0x0,0x0,0x70,0x77,0x77,0x77,0x77,0x77,0x77,0x91,0xba,0xbb,0xab,0x99,0x71,0x77,0x77,0x77,0x77,0x77,0x77,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x31,0x88,0x99,0xaa,0x99,0x82,0x38,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0x11,0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

char pura_japan[572] __attribute__ ((section (".data"))) = {0x0,0x10,0x11,0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x11,0x1,0x0,0x0,0x0,0x32,0x44,0x13,0x11,0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x11,0x31,0x33,0x54,0x2,0x0,0x64,0x72,0x47,0x44,0x44,0x11,0x31,0x66,0x35,0x33,0x33,0x33,0x33,0x55,0x66,0x11,0x23,0x22,0x77,0x77,0x25,0x0,0x27,0x47,0x88,0x88,0x44,0x14,0x33,0x53,0x55,0x55,0x55,0x55,0x55,0x35,0x13,0x31,0x22,0x42,0x84,0x74,0x22,0x0,0x24,0x84,0x99,0x89,0x88,0x35,0x33,0x13,0x11,0x31,0x33,0x13,0x11,0x11,0x11,0x11,0x75,0x98,0x99,0x89,0x27,0x0,0x70,0x99,0xa9,0x9a,0x59,0x33,0x31,0x53,0x35,0x13,0x11,0x31,0x53,0x35,0x13,0x11,0x81,0x99,0xaa,0x99,0x78,0x0,0x0,0x9b,0xaa,0x9a,0x35,0x72,0xcc,0x52,0x31,0x55,0x55,0x55,0x13,0x51,0xc7,0x7c,0x13,0xa1,0xaa,0x19,0x0,0x0,0x0,0xb6,0xa9,0x49,0x55,0xac,0xaa,0xca,0x13,0x31,0x33,0x13,0x11,0xc5,0xaa,0xaa,0x5c,0x93,0x9a,0x61,0x0,0x0,0x0,0x66,0xbb,0x51,0x75,0xaa,0x27,0xc2,0x14,0x11,0x11,0x11,0x11,0xc4,0x7c,0xac,0x4a,0x15,0x1b,0x66,0x0,0x0,0x0,0x66,0xdd,0x54,0xc3,0xcc,0x6c,0x66,0x17,0x11,0x11,0x11,0x31,0x66,0xc7,0xca,0xaa,0x31,0xd1,0x66,0x0,0x0,0x0,0x66,0x3d,0x55,0xa4,0xc6,0x2a,0x66,0x16,0x11,0x11,0x11,0x51,0x66,0x76,0x7a,0xa4,0x1b,0x13,0x66,0x0,0x0,0x0,0x66,0x53,0x13,0xc4,0x7c,0x66,0x66,0x36,0x13,0x11,0x11,0x21,0x66,0x66,0xc6,0xaa,0x11,0x31,0x61,0x0,0x0,0x0,0x36,0x35,0x13,0xcb,0x62,0x62,0x66,0x56,0x13,0x11,0x11,0x31,0x66,0x66,0x66,0xcc,0x1b,0x11,0x13,0x0,0x0,0x0,0x53,0x35,0x13,0x71,0x2c,0x66,0x66,0x55,0x11,0x11,0x11,0x11,0x63,0x66,0x76,0x7c,0x11,0x11,0x53,0x1,0x0,0x30,0x35,0x35,0x11,0xb1,0x77,0x67,0x56,0x33,0x11,0x33,0x13,0x11,0x51,0x66,0x77,0xb2,0x11,0x31,0x53,0xb,0x0,0x20,0x25,0x32,0xeb,0xbe,0xbb,0x4b,0x14,0x51,0x76,0x66,0x66,0x15,0xb1,0xbb,0xee,0xee,0xee,0x3e,0xb3,0x5,0x0,0x40,0x26,0xb7,0xfe,0xbf,0xb4,0xeb,0xee,0x1e,0x64,0x66,0x36,0xb1,0xee,0xff,0xff,0xeb,0xff,0xef,0x24,0x0,0x0,0x0,0x72,0x47,0xfb,0xff,0x4b,0xeb,0xee,0xbe,0x44,0x44,0x4b,0xbb,0xee,0xee,0xbe,0xfe,0xef,0x2e,0x62,0x0,0x0,0x0,0x66,0x72,0xb4,0xee,0xef,0x44,0x44,0x74,0x72,0x88,0x48,0x44,0x77,0x22,0xf4,0xef,0x7e,0xd2,0x66,0x0,0x0,0x0,0x66,0x2d,0x47,0xeb,0xee,0xbb,0xeb,0x8f,0x88,0x88,0x88,0xf8,0xee,0xb4,0xee,0xee,0x64,0xdd,0x66,0x0,0x0,0x0,0x66,0xdd,0x47,0xb4,0xeb,0x4b,0xfb,0x8a,0x88,0x88,0x88,0xa8,0xfa,0x4e,0xee,0x2b,0x26,0xdd,0x66,0x0,0x0,0x1,0x66,0x3d,0x35,0x41,0xb4,0xbb,0xe4,0x8f,0x88,0x88,0x88,0xaf,0xef,0x44,0x7b,0x22,0x33,0xdd,0x66,0x0,0x0,0x13,0x66,0x13,0x15,0x11,0x4b,0xb4,0x44,0xfb,0x99,0x99,0xf9,0xfa,0x4e,0x72,0x52,0x13,0x11,0x65,0x66,0x0,0x0,0x13,0x35,0x51,0x35,0x11,0x31,0x43,0x74,0xb7,0xeb,0xff,0xbe,0x24,0x22,0xb7,0x11,0x11,0x31,0x5,0x0,0x0,0x0,0x33,0x55,0x24,0x55,0x13,0x31,0x43,0xbb,0x4b,0x47,0x77,0x22,0x22,0xb4,0x1e,0x13,0x11,0x53,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

char penta_japan[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x0,0x0,0x10,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x12,0x0,0x0,0x0,0x0,0x0,0x20,0x22,0x22,0x21,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x21,0x22,0x0,0x0,0x0,0x20,0x22,0x12,0x33,0x21,0x22,0x22,0x22,0x11,0x11,0x11,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x22,0x43,0x44,0x34,0x21,0x22,0x12,0x43,0x44,0x34,0x11,0x22,0x22,0x22,0x22,0x22,0x12,0x22,0x0,0x0,0x0,0x20,0x32,0x44,0x44,0x44,0x13,0x12,0x43,0x44,0x44,0x44,0x44,0x13,0x22,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x43,0x13,0x22,0x31,0x34,0x31,0x44,0x44,0x44,0x44,0x44,0x44,0x13,0x22,0x22,0x22,0x22,0x21,0x0,0x0,0x0,0x20,0x34,0x31,0x44,0x14,0x43,0x43,0x44,0x13,0x11,0x11,0x43,0x44,0x34,0x21,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x14,0x44,0x14,0x22,0x41,0x44,0x13,0x31,0x34,0x21,0x22,0x31,0x44,0x23,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x14,0x44,0x21,0x44,0x32,0x34,0x31,0x44,0x13,0x22,0x22,0x12,0x43,0x14,0x22,0x22,0x22,0x12,0x0,0x0,0x0,0x20,0x14,0x44,0x22,0x22,0x22,0x14,0x43,0x44,0x21,0x41,0x44,0x21,0x41,0x34,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x14,0x44,0x22,0x51,0x21,0x14,0x44,0x44,0x22,0x22,0x22,0x22,0x42,0x44,0x21,0x22,0x22,0x22,0x0,0x0,0x0,0x20,0x14,0x44,0x62,0x22,0x22,0x14,0x44,0x44,0x22,0x22,0x51,0x21,0x42,0x44,0x21,0x22,0x22,0x22,0x1,0x0,0x0,0x20,0x14,0x43,0x61,0x66,0x32,0x14,0x44,0x44,0x62,0x21,0x22,0x61,0x42,0x44,0x21,0x22,0x22,0x22,0x2,0x0,0x0,0x20,0x32,0x31,0x24,0x22,0x43,0x14,0x43,0x44,0x61,0x66,0x66,0x26,0x41,0x34,0x22,0x22,0x22,0x22,0x2,0x0,0x0,0x20,0x72,0x13,0x22,0x31,0x84,0x34,0x31,0x44,0x13,0x66,0x66,0x12,0x43,0x14,0x22,0x22,0x22,0x22,0x1,0x0,0x0,0x20,0x91,0x47,0x44,0x44,0xa8,0x48,0x13,0x31,0x34,0x21,0x22,0x31,0x44,0x24,0x22,0x22,0x22,0x72,0x0,0x0,0x0,0x10,0x72,0x79,0x47,0x84,0xba,0x8a,0x44,0x13,0x11,0x11,0x31,0x44,0x44,0x23,0x22,0x22,0x22,0x77,0x0,0x0,0x0,0x21,0x22,0x97,0x77,0xa8,0xbb,0xaa,0x48,0x44,0x44,0x44,0x44,0x44,0x34,0x21,0x97,0x99,0x77,0x7,0x0,0x0,0x10,0x22,0x22,0x72,0x99,0xb8,0xab,0xaa,0x8a,0x44,0x44,0x44,0x44,0x74,0x77,0x97,0x79,0x77,0x27,0x12,0x0,0x0,0x20,0x22,0x22,0x22,0x77,0xb9,0xaa,0x8a,0x77,0x77,0x77,0x77,0x77,0x97,0x99,0x79,0x27,0x22,0x22,0x22,0x0,0x0,0x21,0x22,0x22,0x72,0x22,0xa1,0x88,0x77,0x99,0x99,0x99,0x99,0x99,0x79,0x27,0x22,0x22,0x22,0x22,0x22,0x1,0x0,0x22,0x22,0x22,0x29,0x31,0x44,0x44,0x44,0x44,0x34,0x21,0x22,0x22,0x77,0x27,0x77,0x22,0x22,0x22,0x22,0x2,0x0,0x22,0x22,0x22,0x79,0x43,0x44,0x44,0x44,0x44,0x44,0x23,0x22,0x77,0x99,0x77,0x29,0x22,0x22,0x22,0x22,0x12,0x0,0x22,0x22,0x22,0x97,0x44,0x44,0x44,0x44,0x44,0x44,0x74,0x77,0x97,0x79,0x97,0x29,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short fakecrash_japan_clut[16] __attribute__ ((section (".data"))) = {0x400,0xcc9,0x9b9,0x444,0xcef,0x0,0x22,0x8022,0x8000,0x8445,0x675b,0x0,0x0,0x0,0x0,0x0,};

short tropy_japan_clut[16] __attribute__ ((section (".data"))) = {0x0,0x8d,0x135,0x19a,0x2fe,0x6714,0x77bd,0x400,0x23e,0x2900,0x4980,0x6200,0x7260,0x6ea8,0x8000,0x0,};

short pura_japan_clut[16] __attribute__ ((section (".data"))) = {0x0,0x17a,0x110a,0x114,0x29f2,0x8d,0x400,0x258e,0x49f9,0x525a,0x6b9c,0x2255,0x4e93,0x8000,0x32b8,0x4b19,};

short penta_japan_clut[16] __attribute__ ((section (".data"))) = {0x0,0x2147,0x400,0x6b5a,0x7bde,0x56d5,0x3a00,0x286f,0x1f8,0x38b4,0x27e,0x35e,0x0,0x0,0x0,0x0,};

//august 5

char fakecrash_august5[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x0,0x21,0x21,0x0,0x0,0x0,0x0,0x30,0x3,0x23,0x12,0x33,0x3,0x0,0x0,0x12,0x0,0x0,0x0,0x21,0x22,0x41,0x44,0x34,0x11,0x32,0x44,0x44,0x44,0x34,0x33,0x32,0x33,0x43,0x44,0x44,0x24,0x31,0x4,0x0,0x0,0x13,0x21,0x42,0x33,0x21,0x12,0x21,0x33,0x55,0x35,0x34,0x13,0x33,0x55,0x55,0x55,0x15,0x32,0x34,0x4,0x0,0x0,0x33,0x14,0x21,0x44,0x33,0x13,0x13,0x21,0x33,0x35,0x33,0x31,0x54,0x55,0x55,0x13,0x12,0x43,0x43,0x4,0x0,0x0,0x30,0x43,0x44,0x44,0x21,0x31,0x11,0x13,0x21,0x43,0x43,0x43,0x33,0x33,0x21,0x11,0x31,0x44,0x43,0x4,0x0,0x0,0x0,0x33,0x43,0x11,0x33,0x33,0x33,0x13,0x13,0x12,0x43,0x43,0x12,0x12,0x11,0x31,0x43,0x34,0x43,0x4,0x0,0x0,0x0,0x44,0x33,0x44,0x44,0x44,0x34,0x33,0x33,0x13,0x31,0x34,0x11,0x33,0x31,0x11,0x11,0x12,0x45,0x4,0x0,0x0,0x0,0x44,0x34,0x64,0x87,0x38,0x43,0x44,0x44,0x44,0x44,0x34,0x33,0x33,0x33,0x13,0x43,0x31,0x45,0x4,0x0,0x0,0x0,0x44,0x45,0x89,0xa7,0x87,0x36,0x33,0xcb,0xdc,0xb4,0x44,0x44,0x44,0x33,0x33,0x11,0x12,0x43,0x4,0x0,0x0,0x0,0x44,0x55,0x69,0x78,0x77,0x68,0x39,0x7b,0xaa,0x77,0x4b,0x7d,0xbc,0x44,0x43,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x94,0x66,0x88,0x36,0xe3,0x9e,0xac,0xb7,0xdb,0x7a,0xbc,0x33,0x59,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x35,0x39,0x43,0x93,0x69,0x8f,0x6f,0xe6,0x99,0x99,0x99,0x33,0x53,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x55,0x93,0x39,0x34,0x69,0x8f,0x77,0x7a,0xaa,0xa7,0x87,0xef,0x55,0x55,0x55,0x45,0x44,0x44,0x0,0x0,0x44,0x55,0x55,0x35,0x3f,0xb1,0x93,0x69,0x78,0x77,0x77,0x77,0x78,0x88,0x6f,0x5e,0x55,0xb4,0xcb,0xbb,0x4,0x0,0x44,0x55,0x55,0x55,0x89,0xb9,0xcc,0x93,0x86,0x88,0x88,0x88,0x88,0x88,0xf8,0x96,0x43,0xbb,0xac,0xbc,0x4b,0x0,0x44,0x55,0x55,0x55,0x79,0xab,0xaa,0xbb,0x33,0x69,0xf6,0x8f,0xff,0xff,0xe6,0x99,0x43,0xb4,0xbb,0xbb,0x44,0x0,0x44,0x55,0x55,0x55,0xb3,0xaa,0xaa,0xab,0xcc,0xbc,0x3b,0x93,0x99,0x99,0x39,0x33,0x33,0x44,0x44,0x44,0x44,0x0,0x44,0x55,0x55,0x55,0xa3,0xaa,0xca,0xac,0xca,0xca,0xbc,0xcb,0xbc,0x55,0x55,0x55,0x55,0x44,0x44,0x44,0x4,0x0,0x44,0x55,0x55,0x55,0xac,0xaa,0xca,0xaa,0xaa,0xaa,0xbc,0xcc,0xca,0x5b,0x55,0x55,0x55,0x45,0x44,0x4,0x0,0x0,0x44,0x55,0x55,0x55,0xc3,0xcc,0xbc,0xaa,0xaa,0xaa,0xbc,0xac,0xaa,0x5a,0x55,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x55,0x55,0x35,0x9f,0xa9,0xaa,0xaa,0xaa,0xcc,0xac,0xaa,0xaa,0x55,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x55,0x55,0x35,0xf6,0xa9,0xaa,0xaa,0xaa,0xbc,0xac,0xaa,0xaa,0x55,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x55,0x55,0x55,0x55,0x6e,0x9f,0x99,0xaa,0xca,0xbc,0xf9,0x6f,0x53,0x55,0x55,0x55,0x45,0x4,0x0,0x0,0x0,0x44,0x44,0x44,0x44,0x44,0xe3,0xff,0xef,0x9e,0x33,0x33,0x93,0x39,0x44,0x44,0x44,0x44,0x44,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,0x99,0x33,0x33,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

char papu_august5[572] __attribute__ ((section (".data"))) = {0x0,0x11,0x11,0x11,0x11,0x0,0x22,0x33,0x54,0x36,0x77,0x46,0x75,0x77,0x7,0x10,0x11,0x11,0x11,0x11,0x11,0x11,0x0,0x20,0x22,0x2,0x0,0x0,0x32,0x43,0x54,0x36,0x77,0x46,0x55,0x77,0x7,0x0,0x0,0x22,0x2,0x10,0x11,0x11,0x0,0x0,0x0,0x22,0x2,0x8,0x36,0x44,0x64,0x33,0x77,0x67,0x54,0x75,0x6,0x88,0x22,0x0,0x0,0x0,0x11,0x11,0x22,0x22,0x2,0x0,0x22,0x0,0x42,0x54,0x65,0x33,0x73,0x67,0x44,0x55,0x2,0x20,0x2,0x0,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0x92,0xaa,0x29,0x44,0x54,0x36,0x76,0x77,0x76,0x46,0x54,0x25,0xa9,0x9a,0x2,0x0,0x0,0x10,0x11,0x0,0x0,0x20,0xba,0xcc,0x4c,0x54,0x55,0x36,0x76,0x37,0x76,0x46,0x44,0x55,0xcc,0xbc,0x2a,0x0,0x0,0x10,0x11,0x0,0x0,0x20,0x9a,0xc9,0x44,0x54,0x65,0x37,0x76,0x37,0x76,0x67,0x44,0x55,0xc5,0x99,0x2a,0x0,0x20,0x10,0x11,0x11,0x0,0x0,0x99,0x4b,0x54,0x54,0xa5,0x2d,0xd2,0xdc,0x22,0xad,0x44,0x55,0x55,0x9c,0x9,0x0,0x0,0x12,0x11,0x1,0x2,0x0,0x92,0x44,0x45,0x55,0xc5,0xda,0xcd,0xce,0xdd,0xca,0x44,0x54,0x55,0x95,0x2,0x0,0x10,0x11,0x11,0x2,0x0,0x0,0x40,0x54,0x54,0x55,0xcc,0xcc,0xec,0xea,0xcc,0xcc,0x4c,0x45,0x55,0x55,0x0,0x0,0x0,0x11,0x11,0x0,0x0,0x0,0x44,0x44,0x55,0x55,0xbc,0xcb,0xee,0xea,0xce,0xbb,0x4c,0x54,0x54,0x55,0x5,0x0,0x0,0x10,0x11,0x0,0x0,0x40,0x44,0x55,0x55,0xb5,0xe9,0x9e,0xec,0xea,0x9c,0xee,0xb9,0x44,0x45,0x55,0x55,0x0,0x0,0x10,0x11,0x0,0x0,0x44,0x54,0x54,0x55,0xf5,0xae,0xea,0xc9,0xbe,0xe9,0xaa,0xfe,0x44,0x54,0x55,0x55,0x5,0x0,0x10,0x11,0x0,0x0,0x40,0x45,0x55,0x55,0xff,0xaf,0xaa,0x9e,0x9b,0xae,0xaa,0xff,0x4f,0x44,0x54,0x55,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0x54,0x55,0xc5,0xf9,0xaf,0xaa,0xee,0xee,0xae,0xaa,0xff,0xce,0x44,0x45,0x5,0x0,0x20,0x12,0x11,0x0,0x0,0x0,0x5f,0x55,0x9f,0xae,0xaa,0xea,0xee,0xe9,0xae,0xaa,0xaa,0x9e,0x4f,0x54,0xf,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0xff,0xf5,0xff,0xaa,0xaa,0xea,0x2b,0x22,0xeb,0xaa,0xaa,0xfa,0xff,0xf4,0xf,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0xff,0x9f,0xff,0xaa,0xea,0xbe,0x22,0x22,0xb2,0xee,0xaa,0xfa,0x9f,0xff,0xf,0x0,0x0,0x12,0x11,0x2,0x0,0x0,0xff,0xef,0xaa,0xaa,0xbe,0xcc,0xcc,0xcc,0xcc,0xbc,0xae,0xaa,0xaa,0xff,0xf,0x0,0x0,0x12,0x11,0x11,0x20,0x0,0xff,0xef,0xae,0xaa,0xca,0xec,0xaa,0xaa,0xea,0xcc,0xaa,0xaa,0xea,0xff,0xf,0x0,0x2,0x11,0x11,0x1,0x20,0x0,0xff,0x9f,0xee,0xaa,0xaa,0x9a,0xeb,0xaa,0xea,0xaa,0xaa,0xaa,0x9e,0xff,0xf,0x0,0x12,0x11,0x11,0x0,0x0,0x0,0xff,0xbf,0x99,0xae,0xaa,0x9a,0x9b,0xaa,0x9e,0xae,0xaa,0xea,0xb9,0xff,0x6,0x0,0x12,0x11,0x11,0x11,0x80,0x0,0xff,0x86,0xbc,0xe9,0xaa,0xaa,0xb9,0xee,0xe9,0xaa,0xea,0x9e,0x8c,0xff,0x6,0x0,0x10,0x11,0x11,0x11,0x0,0x0,0xff,0x6,0x0,0xcc,0xee,0xae,0x9a,0x99,0xa9,0xee,0xce,0xcc,0x0,0xff,0x6,0x0,0x10,0x11,0x11,0x11,0x11,0x0,0x66,0x11,0x11,0x11,0xcc,0xcc,0xcc,0xcc,0xcc,0xcc,0x1c,0x11,0x11,0x66,0x11,0x0,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,};

char penta_august5[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x1,0x0,0x0,0x0,0x11,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x11,0x11,0x31,0x34,0x31,0x21,0x22,0x22,0x22,0x12,0x1,0x0,0x0,0x0,0x11,0x22,0x22,0x22,0x22,0x22,0x12,0x11,0x11,0x31,0x34,0x13,0x11,0x13,0x23,0x22,0x22,0x12,0x1,0x0,0x0,0x0,0x11,0x22,0x22,0x22,0x12,0x43,0x13,0x43,0x34,0x13,0x11,0x11,0x11,0x11,0x41,0x21,0x22,0x12,0x1,0x0,0x0,0x0,0x11,0x22,0x22,0x41,0x13,0x11,0x11,0x11,0x13,0x11,0x11,0x11,0x11,0x11,0x11,0x13,0x21,0x12,0x1,0x0,0x0,0x0,0x11,0x22,0x31,0x11,0x31,0x44,0x34,0x11,0x13,0x11,0x31,0x44,0x44,0x13,0x11,0x11,0x13,0x12,0x1,0x0,0x0,0x0,0x11,0x31,0x11,0x43,0x65,0x66,0x56,0x34,0x11,0x43,0x65,0x66,0x66,0x75,0x34,0x11,0x41,0x11,0x1,0x0,0x0,0x0,0x11,0x11,0x43,0x67,0x98,0x98,0x89,0x45,0x41,0x65,0x98,0x89,0x99,0xa8,0x76,0x34,0x11,0x14,0x1,0x0,0x0,0x0,0x31,0x11,0x74,0x96,0x68,0x64,0x98,0x56,0x53,0x86,0x89,0x46,0x86,0x99,0x6a,0x47,0x11,0x11,0x1,0x0,0x0,0x0,0x11,0x31,0x67,0x9a,0x46,0x41,0x96,0x68,0x64,0x98,0x69,0x14,0x64,0x99,0x68,0x76,0x13,0x31,0x1,0x0,0x0,0x0,0x13,0x41,0x66,0x99,0x14,0x11,0x94,0x69,0x66,0x99,0x48,0x11,0x41,0x98,0xa9,0x56,0x14,0x11,0x1,0x0,0x0,0x10,0x11,0x73,0xa6,0x89,0x11,0x16,0x81,0x89,0x86,0x99,0x18,0x61,0x11,0x96,0x89,0x56,0x37,0x11,0x13,0x0,0x0,0x10,0x11,0x74,0xa6,0x69,0x11,0x66,0x61,0x89,0x86,0x99,0x16,0x66,0x11,0x96,0x89,0x66,0x47,0x11,0x11,0x0,0x0,0x10,0x11,0x74,0x86,0x69,0x41,0x99,0x66,0xb9,0xcb,0x9c,0x66,0x99,0x14,0x96,0x89,0x66,0x47,0x11,0x11,0x0,0x0,0x10,0x11,0x73,0x86,0x69,0x44,0x69,0x11,0xbb,0xcd,0xdc,0x11,0x96,0x44,0x96,0x89,0x76,0x34,0x11,0x11,0x0,0x0,0x10,0x11,0x41,0x57,0x44,0x11,0x11,0xb4,0xbb,0xcd,0xdd,0x46,0x11,0x11,0x41,0x64,0x47,0x13,0x11,0x11,0x0,0x0,0x0,0x11,0x73,0x65,0x66,0x66,0x66,0xb6,0xbb,0xcc,0x7d,0x66,0x66,0x66,0x66,0x66,0x76,0x14,0x11,0x1,0x0,0x0,0x0,0x11,0x73,0x65,0xa6,0x88,0xa8,0x6a,0xbb,0xdc,0x57,0xaa,0x88,0x88,0x88,0x6a,0x56,0x37,0x11,0x94,0x0,0x0,0x90,0x14,0x41,0x57,0x8a,0xa8,0x66,0x66,0xbb,0xdc,0x57,0x66,0x66,0xaa,0x88,0xa8,0x56,0x37,0x41,0x89,0x0,0x0,0x80,0x99,0x44,0x74,0xa5,0x6a,0x66,0x66,0xb6,0x7d,0x57,0x66,0x66,0x66,0xa6,0x6a,0x75,0x44,0x89,0x6,0x0,0x0,0x0,0x86,0x99,0x34,0x74,0x65,0x66,0x66,0x66,0x7d,0x67,0x66,0x66,0x66,0x66,0x75,0x34,0x84,0x66,0x98,0x0,0x0,0x80,0x68,0x66,0x66,0x14,0x43,0x57,0x66,0x66,0x56,0x67,0x66,0x66,0x56,0x47,0x13,0x84,0x66,0x98,0x68,0x0,0x0,0x60,0x98,0x99,0x89,0x66,0x46,0x11,0x43,0x57,0x65,0x65,0x55,0x47,0x13,0x41,0x66,0x66,0x98,0x89,0x6,0x0,0x0,0x0,0x60,0x86,0x98,0x98,0x99,0x99,0x49,0x11,0x33,0x33,0x11,0x41,0x89,0x89,0x98,0x89,0x88,0x66,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short fakecrash_august5_clut[16] __attribute__ ((section (".data"))) = {0x0,0x72,0x13a,0x86c,0x400,0x8000,0x3dd9,0x631c,0x529c,0x2514,0x739c,0x2108,0x4610,0x1e0,0x3177,0x4a3b,};

short papu_august5_clut[16] __attribute__ ((section (".data"))) = {0x400,0x0,0x1084,0x49ce,0x4b3e,0x42db,0x1cc6,0x396b,0x8000,0x2dd8,0x3a5e,0x2594,0x2152,0x7bde,0x321b,0x19,};

short penta_august5_clut[16] __attribute__ ((section (".data"))) = {0x0,0x400,0x8000,0x14a5,0x2d6b,0x4a52,0x56b5,0x4210,0x6b5a,0x7bde,0x5ef7,0x337e,0x32fe,0x1e3e,0x0,0x0,};

//i think CTRICON4 has reached its limit

char roo_custom1[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x10,0x11,0x11,0x11,0x0,0x21,0x11,0x1,0x12,0x11,0x43,0x44,0x14,0x21,0x12,0x11,0x41,0x0,0x0,0x0,0x11,0x11,0x11,0x22,0x11,0x11,0x11,0x21,0x22,0x12,0x22,0x11,0x31,0x55,0x11,0x11,0x22,0x12,0x11,0x5,0x0,0x10,0x11,0x11,0x21,0x11,0x62,0x77,0x12,0x21,0x67,0x26,0x78,0x26,0x12,0x14,0x11,0x22,0x21,0x12,0x11,0x54,0x0,0x10,0x21,0x22,0x22,0x11,0x62,0x87,0x17,0x27,0x21,0x62,0x22,0x21,0x22,0x22,0x21,0x22,0x12,0x22,0x11,0x51,0x0,0x10,0x22,0x11,0x11,0x11,0x11,0x11,0x62,0x91,0x99,0x21,0x99,0x49,0x22,0x26,0x22,0x77,0x12,0x21,0x12,0x41,0x0,0x11,0x12,0xba,0xbb,0xbb,0xbb,0xbb,0x27,0x44,0x44,0x91,0xa8,0x49,0x29,0x66,0x26,0x31,0x14,0x11,0x12,0x41,0x0,0x11,0xa1,0xbb,0xbb,0xbb,0xbb,0xbb,0x17,0x94,0x99,0x91,0xaa,0x49,0x19,0x26,0x22,0x31,0x54,0x11,0x11,0x41,0x0,0x0,0xaa,0xbb,0xbb,0xbb,0x1b,0x11,0x17,0x94,0xa8,0x91,0x99,0x49,0x19,0x22,0x22,0x12,0x43,0x15,0x11,0x41,0x0,0x0,0xaa,0xbb,0xbb,0xbb,0x81,0x67,0x71,0x99,0xaa,0x91,0x44,0x94,0x11,0x12,0x11,0x11,0x31,0x54,0x11,0x45,0x0,0x0,0xaa,0xaa,0xaa,0xaa,0x71,0x26,0x61,0x91,0x19,0x22,0x99,0x99,0x11,0x21,0x86,0x26,0x12,0x44,0x11,0x45,0x0,0xa0,0xaa,0xaa,0xaa,0xaa,0xaa,0x11,0x22,0x22,0x22,0x27,0x22,0x22,0x77,0x86,0x77,0x28,0x12,0x44,0x51,0x44,0x0,0xaa,0xaa,0xaa,0xaa,0xaa,0x22,0x22,0x87,0x88,0x88,0x77,0x66,0x87,0x18,0x61,0x78,0x16,0x31,0x44,0x54,0x44,0x0,0x1a,0x11,0x11,0xaa,0xaa,0x66,0x77,0x77,0x87,0x88,0x88,0x67,0x77,0xa2,0x1a,0x76,0x31,0x44,0x44,0x54,0x44,0x0,0xa0,0x11,0x11,0x11,0xaa,0xcc,0x7c,0x67,0x77,0x77,0x77,0x66,0x26,0x91,0x1a,0x26,0x31,0x54,0x44,0x54,0x44,0x0,0xa0,0xaa,0xaa,0xaa,0x4a,0x44,0xc4,0x77,0x76,0x77,0x66,0x26,0x22,0x94,0x1a,0x16,0x43,0x55,0x44,0x55,0x44,0x0,0xc0,0xaa,0xaa,0x44,0x54,0x45,0x44,0x7c,0x62,0x66,0x26,0x22,0xa9,0x94,0x6a,0x12,0x53,0x45,0x44,0x55,0x44,0x0,0x3c,0x44,0x44,0x55,0x54,0x55,0x44,0xc4,0x22,0x22,0x22,0x49,0xa9,0xaa,0x62,0x32,0x54,0x45,0x54,0x45,0x44,0x0,0x43,0x54,0x43,0x33,0x44,0x35,0x55,0x44,0x1c,0x94,0xaa,0x4a,0xaa,0x4a,0x26,0x31,0x55,0x45,0x54,0x44,0x44,0x0,0x43,0x45,0x33,0xbb,0x33,0x34,0x34,0x45,0xb3,0xaa,0xaa,0xaa,0xdd,0xdd,0x26,0x41,0x55,0x44,0x55,0x44,0x34,0x0,0x43,0x33,0xbb,0xbb,0xbb,0x33,0x33,0x43,0xb3,0x94,0xea,0xfe,0x4e,0xdd,0x22,0x41,0x55,0x44,0x45,0x44,0x34,0x0,0x30,0xaa,0xbb,0xbb,0xbb,0xbb,0xbb,0x3b,0x73,0xd9,0x8e,0xef,0x4e,0x29,0x22,0x43,0x45,0x54,0x44,0x44,0x34,0x0,0x0,0xaa,0xbb,0xbb,0xbb,0xbb,0xbb,0x2b,0x76,0xed,0xf8,0xee,0x9e,0x22,0x12,0x54,0x45,0x45,0x44,0x44,0x33,0x0,0x0,0xaa,0xbb,0xbb,0xbb,0xbb,0xbb,0x2b,0x12,0xed,0xf8,0xee,0x1e,0x22,0x31,0x44,0x44,0x44,0x44,0x44,0x3,0x0,0x0,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0x12,0xed,0xf8,0xee,0x1e,0x11,0x3a,0x43,0x44,0x44,0x44,0x44,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0xfe,0xee,0x3d,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd0,0xee,0xde,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short roo_custom1_clut[16] __attribute__ ((section (".data"))) = {0x0,0x6080,0x7a00,0x594,0xf1f,0x179e,0x7a80,0x7b0b,0x7b95,0xdfe,0x400,0x8000,0x108d,0x18d1,0x2118,0x2dbe,};

char pura_custom1[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x0,0x10,0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x22,0x22,0x32,0x41,0x55,0x11,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x22,0x66,0x13,0x74,0x77,0x55,0x11,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x11,0x11,0x61,0x22,0x0,0x0,0x0,0x22,0x66,0x13,0x44,0x77,0x55,0x55,0x11,0x11,0x11,0x11,0x11,0x11,0x61,0x11,0x57,0x57,0x15,0x22,0x0,0x0,0x0,0x22,0x66,0x33,0x41,0x74,0x57,0x15,0x55,0x15,0x11,0x55,0x55,0x51,0x15,0x55,0x77,0x15,0x81,0x23,0x0,0x0,0x0,0x22,0x66,0x36,0x11,0x44,0x77,0x55,0x11,0x51,0x55,0x11,0x11,0x47,0x44,0x74,0x57,0x81,0x98,0x23,0x0,0x0,0x0,0x22,0x66,0x16,0x74,0x77,0x77,0x77,0x15,0x11,0x11,0x11,0x55,0x47,0x44,0x77,0x15,0x88,0xa9,0x23,0x0,0x0,0x0,0x22,0x66,0x41,0x22,0x22,0x52,0x77,0x57,0x11,0x51,0x55,0x77,0x74,0x77,0x55,0x15,0x98,0x3a,0x22,0x0,0x0,0x0,0x22,0x16,0x27,0xbb,0xbb,0x2b,0x17,0x51,0x55,0x15,0x71,0x22,0x22,0x22,0x57,0x17,0x93,0x63,0x22,0x0,0x0,0x0,0x22,0x16,0xb2,0xbb,0x22,0x22,0x72,0x15,0x11,0x71,0x25,0xbb,0xbb,0xbb,0x72,0x57,0x31,0x66,0x22,0x0,0x0,0x0,0x22,0x41,0xb1,0x2b,0xc2,0x2c,0x72,0x57,0x11,0x55,0xb1,0x2c,0x22,0xc2,0x2b,0x47,0x61,0x66,0x22,0x0,0x0,0x0,0x32,0x51,0xb1,0x2c,0xb2,0x22,0x42,0x57,0x55,0x17,0xcb,0x22,0xc2,0x2c,0x2b,0x47,0x31,0x66,0x22,0x0,0x0,0x0,0x13,0x51,0xc1,0x2c,0xed,0x2d,0x72,0x55,0x45,0x14,0xcc,0x22,0xb2,0x2c,0x22,0x77,0x14,0x63,0x22,0x0,0x0,0x30,0x18,0x15,0x17,0xcc,0x22,0x22,0x77,0x77,0x77,0x14,0xcc,0x22,0x22,0x22,0x12,0x47,0x15,0x38,0x22,0x0,0x0,0x30,0x58,0x55,0x77,0x77,0x57,0x51,0x55,0x55,0x51,0x57,0xc1,0xd2,0xde,0x2d,0x1b,0x44,0x15,0x38,0x22,0x0,0x0,0x30,0x88,0x15,0x11,0x55,0x85,0x22,0x22,0x22,0x82,0x75,0x55,0x21,0x22,0x12,0x71,0x57,0x11,0x81,0x23,0x0,0x0,0x0,0x83,0x88,0xaa,0x9a,0x99,0x28,0x32,0x23,0x98,0xaa,0x1a,0x51,0x55,0x77,0x17,0x11,0x51,0x81,0x23,0x0,0x0,0x0,0x83,0x99,0x99,0x99,0x99,0x89,0x22,0x82,0x99,0x99,0xa9,0x1a,0x51,0x55,0x55,0x55,0x15,0x89,0x23,0x0,0x0,0x0,0x32,0x98,0x99,0x39,0x99,0x99,0x88,0x98,0x99,0x99,0x99,0xa9,0xaa,0x55,0x55,0x11,0xa1,0x38,0x23,0x0,0x0,0x0,0x32,0x98,0x99,0x89,0x22,0x22,0x22,0x22,0x82,0x99,0x39,0x83,0x98,0xaa,0xaa,0x9a,0x89,0x33,0x22,0x0,0x0,0x0,0x22,0x83,0x99,0x99,0x28,0x55,0xff,0xff,0x2f,0x22,0x22,0x88,0x99,0x99,0x99,0x99,0x88,0x63,0x22,0x0,0x0,0x0,0x22,0x36,0x88,0x99,0x89,0xc2,0x22,0x22,0x2c,0x22,0x88,0x99,0x99,0x99,0x99,0x88,0x33,0x66,0x22,0x0,0x0,0x0,0x22,0x66,0x33,0x88,0x99,0x33,0x33,0x33,0x33,0x88,0x99,0x99,0x89,0x88,0x88,0x33,0x66,0x66,0x22,0x0,0x0,0x0,0x22,0x66,0x66,0x33,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x38,0x33,0x33,0x66,0x66,0x66,0x22,0x0,0x0,0x0,0x22,0x22,0x22,0x22,0x22,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short pura_custom1_clut[16] __attribute__ ((section (".data"))) = {0x0,0xd0,0x400,0x29cf,0x1e7f,0x137,0x8000,0x1be,0x4296,0x4b1b,0x5b7c,0x4a52,0x7bde,0x1928,0x1a6f,0x1ccd,};

char pinstripe_custom1[572] __attribute__ ((section (".data"))) = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x21,0x22,0x12,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x13,0x11,0x21,0x22,0x11,0x11,0x11,0x12,0x12,0x11,0x11,0x11,0x44,0x44,0x22,0x11,0x0,0x0,0x0,0x11,0x33,0x13,0x11,0x11,0x14,0x11,0x22,0x22,0x22,0x41,0x21,0x22,0x11,0x41,0x54,0x55,0x26,0x11,0x0,0x0,0x0,0x11,0x33,0x13,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x44,0x55,0x66,0x76,0x12,0x0,0x0,0x0,0x11,0x33,0x33,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x44,0x41,0x54,0x66,0x66,0x76,0x12,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x11,0x44,0x44,0x11,0x44,0x44,0x14,0x11,0x11,0x48,0x65,0x66,0x66,0x76,0x12,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x21,0x12,0x11,0x48,0x88,0x11,0x21,0x22,0x11,0x41,0x65,0x66,0x66,0x26,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x41,0x65,0x66,0x66,0x28,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x24,0x29,0xa2,0x42,0x22,0x99,0x22,0x1a,0x29,0x44,0x54,0x66,0x55,0x32,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x23,0xba,0x49,0x84,0x44,0xbb,0x9b,0x44,0x29,0x44,0x54,0x55,0x88,0x32,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x23,0x22,0x22,0x42,0x88,0x48,0xa4,0xbb,0xbb,0x48,0x84,0x48,0x44,0x22,0x33,0x11,0x0,0x0,0x0,0x11,0x33,0x23,0x82,0x88,0x44,0x84,0x78,0x77,0x44,0x84,0x44,0x84,0x88,0x88,0x11,0x11,0x33,0x11,0x0,0x0,0x10,0x11,0x11,0x81,0x77,0x77,0x77,0x77,0x99,0x99,0x77,0x77,0x77,0x87,0x88,0x88,0x11,0x11,0x33,0x11,0x0,0x0,0x11,0x77,0x17,0x11,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xc9,0x99,0x88,0x48,0x11,0x18,0x33,0x11,0x0,0x0,0x71,0x11,0x11,0x11,0x99,0xc9,0xcc,0x99,0x99,0x99,0x77,0x97,0xc9,0xcc,0x89,0x18,0x11,0x18,0x33,0x11,0x0,0x0,0x11,0x11,0x11,0x11,0xc9,0xcc,0xcc,0x9c,0x77,0x77,0xdd,0x7d,0x97,0xcc,0x89,0x18,0x81,0x31,0x33,0x11,0x0,0x0,0x11,0x22,0x22,0x12,0x99,0x99,0x99,0x77,0xdd,0xdd,0xee,0xdd,0x7d,0xc9,0x89,0x18,0x11,0x31,0x33,0x11,0x0,0x0,0x10,0x11,0x11,0x81,0x77,0x77,0x77,0x22,0xed,0xde,0xee,0xed,0xde,0xc7,0x8c,0x11,0x21,0x33,0x33,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x88,0x28,0x22,0x77,0x82,0x88,0x88,0xd8,0xdd,0xc7,0x29,0x11,0x11,0x33,0x33,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x33,0x78,0xc9,0x99,0xcc,0x9c,0x49,0x44,0xc9,0x28,0x11,0x11,0x33,0x31,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x33,0x78,0x97,0xcc,0x99,0x99,0x97,0x99,0x89,0x11,0x11,0x11,0x11,0x32,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x33,0x83,0x78,0x77,0x77,0x77,0x87,0x77,0x27,0x13,0x41,0x11,0x22,0x33,0x11,0x0,0x0,0x0,0x11,0x33,0x33,0x33,0x33,0x33,0x83,0x88,0x88,0x88,0x88,0x82,0x31,0x33,0x11,0x11,0x31,0x33,0x11,0x0,0x0,0x0,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short pinstripe_custom1_clut[16] __attribute__ ((section (".data"))) = {0x0,0x400,0x7,0x8000,0x8c,0x2116,0x39de,0x113,0xcf,0x158,0x4b7f,0x2de,0x99b,0x5294,0x7fff,};

struct Texture CTRICON2_PART1[] __attribute__ ((section (".sdata"))) = {
	[0] =
	{
		.image = fakecrash_japan,
		.clut = (char *)fakecrash_japan_clut,
	},
	[1] =
	{
		.image = tropy_japan,
		.clut = (char *)tropy_japan_clut,
	},
	[2] =
	{
		.image = pura_japan,
		.clut = (char *)pura_japan_clut,
	},
	[3] =
	{
		.image = penta_japan,
		.clut = (char *)penta_japan_clut,
	},
	[4] =
	{
		.image = fakecrash_august5,
		.clut = (char *)fakecrash_august5_clut,
	},
	[5] =
	{
		.image = papu_august5,
		.clut = (char *)papu_august5_clut,
	},
	[6] =
	{
		.image = penta_august5,
		.clut = (char *)penta_august5_clut,
	},
    [7] =
    {
        .image = roo_custom1,
        .clut = (char*)roo_custom1_clut,
    },
    [8] =
    {
        .image = pura_custom1,
        .clut = (char*)pura_custom1_clut,
    },
    [9] =
    {
        .image = pinstripe_custom1,
        .clut = (char*)pinstripe_custom1_clut,
    },
};