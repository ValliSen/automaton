/* automaton
 * (c) 2014 Justin Gottula
 * The source code of this project is distributed under the terms of the
 * simplified BSD license. See the LICENSE file for details.
 */


#include "dev/lcd/font_04b_03.h"


const uint8_t font_04b_03_glyphs[] PROGMEM = {
	/* 0x20 space */
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x21 ! */
	0b00010111,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x22 " */
	0b00000011,
	0b00000000,
	0b00000011,
	0b00000000,
	0b00000000,
	
	/* 0x23 #  */
	0b00001010,
	0b00011111,
	0b00001010,
	0b00011111,
	0b00001010,
	
	/* 0x24 $ */
	0b00010100,
	0b00010110,
	0b00111011,
	0b00001010,
	0b00000000,
	
	/* 0x25 % */
	0b00000001,
	0b00011000,
	0b00000100,
	0b00000011,
	0b00010000,
	
	/* 0x26 & */
	0b00001010,
	0b00010101,
	0b00010101,
	0b00001000,
	0b00010100,
	
	/* 0x27 ' */
	0b00000011,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x28 ( */
	0b00001110,
	0b00010001,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x29 ) */
	0b00010001,
	0b00001110,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x2a * */
	0b00000101,
	0b00000010,
	0b00000101,
	0b00000000,
	0b00000000,
	
	/* 0x2b + */
	0b00000100,
	0b00001110,
	0b00000100,
	0b00000000,
	0b00000000,
	
	/* 0x2c , */
	0b00100000,
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x2d - */
	0b00000100,
	0b00000100,
	0b00000100,
	0b00000000,
	0b00000000,
	
	/* 0x2e . */
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x2f / */
	0b00010000,
	0b00001000,
	0b00000100,
	0b00000010,
	0b00000001,
	
	/* 0x30 0 */
	0b00001110,
	0b00010001,
	0b00010001,
	0b00001110,
	0b00000000,
	
	/* 0x31 1 */
	0b00000001,
	0b00011111,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x32 2 */
	0b00001001,
	0b00010101,
	0b00010101,
	0b00010010,
	0b00000000,
	
	/* 0x33 3 */
	0b00010001,
	0b00010101,
	0b00010101,
	0b00001010,
	0b00000000,
	
	/* 0x34 4 */
	0b00001100,
	0b00001010,
	0b00011111,
	0b00001000,
	0b00000000,
	
	/* 0x35 5 */
	0b00010111,
	0b00010101,
	0b00010101,
	0b00001001,
	0b00000000,
	
	/* 0x36 6 */
	0b00001110,
	0b00010101,
	0b00010101,
	0b00001000,
	0b00000000,
	
	/* 0x37 7 */
	0b00000001,
	0b00011001,
	0b00000101,
	0b00000011,
	0b00000000,
	
	/* 0x38 8 */
	0b00001010,
	0b00010101,
	0b00010101,
	0b00001010,
	0b00000000,
	
	/* 0x39 9 */
	0b00000010,
	0b00010101,
	0b00010101,
	0b00001110,
	0b00000000,
	
	/* 0x3a : */
	0b00001010,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x3b ; */
	0b00011010,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x3c < */
	0b00000100,
	0b00001010,
	0b00010001,
	0b00000000,
	0b00000000,
	
	/* 0x3d = */
	0b00001010,
	0b00001010,
	0b00001010,
	0b00000000,
	0b00000000,
	
	/* 0x3e > */
	0b00010001,
	0b00001010,
	0b00000100,
	0b00000000,
	0b00000000,
	
	/* 0x3f ? */
	0b00000001,
	0b00010101,
	0b00000101,
	0b00000010,
	0b00000000,
	
	/* 0x40 @ */
	0b00001110,
	0b00010001,
	0b00011101,
	0b00010101,
	0b00001110,
	
	/* 0x41 A */
	0b00011110,
	0b00001001,
	0b00001001,
	0b00011110,
	0b00000000,
	
	/* 0x42 B */
	0b00011111,
	0b00010101,
	0b00010101,
	0b00001010,
	0b00000000,
	
	/* 0x43 C */
	0b00001110,
	0b00010001,
	0b00010001,
	0b00000000,
	0b00000000,
	
	/* 0x44 D */
	0b00011111,
	0b00010001,
	0b00010001,
	0b00001110,
	0b00000000,
	
	/* 0x45 E */
	0b00011111,
	0b00010101,
	0b00010101,
	0b00000000,
	0b00000000,
	
	/* 0x46 F */
	0b00011111,
	0b00000101,
	0b00000101,
	0b00000000,
	0b00000000,
	
	/* 0x47 G */
	0b00001110,
	0b00010001,
	0b00010101,
	0b00011101,
	0b00000000,
	
	/* 0x48 H */
	0b00011111,
	0b00000100,
	0b00000100,
	0b00011111,
	0b00000000,
	
	/* 0x49 I */
	0b00010001,
	0b00011111,
	0b00010001,
	0b00000000,
	0b00000000,
	
	/* 0x4a J */
	0b00001000,
	0b00010000,
	0b00010001,
	0b00001111,
	0b00000000,
	
	/* 0x4b K */
	0b00011111,
	0b00000100,
	0b00001010,
	0b00010001,
	0b00000000,
	
	/* 0x4c L */
	0b00011111,
	0b00010000,
	0b00010000,
	0b00000000,
	0b00000000,
	
	/* 0x4d M */
	0b00011111,
	0b00000010,
	0b00000100,
	0b00000010,
	0b00011111,
	
	/* 0x4e N */
	0b00011111,
	0b00000010,
	0b00000100,
	0b00011111,
	0b00000000,
	
	/* 0x4f O */
	0b00001110,
	0b00010001,
	0b00010001,
	0b00001110,
	0b00000000,
	
	/* 0x50 P */
	0b00011111,
	0b00001001,
	0b00001001,
	0b00000110,
	0b00000000,
	
	/* 0x51 Q */
	0b00001110,
	0b00010001,
	0b00010001,
	0b00101110,
	0b00000000,
	
	/* 0x52 R */
	0b00011111,
	0b00001001,
	0b00001001,
	0b00010110,
	0b00000000,
	
	/* 0x53 S */
	0b00010010,
	0b00010101,
	0b00010101,
	0b00001001,
	0b00000000,
	
	/* 0x54 T */
	0b00000001,
	0b00011111,
	0b00000001,
	0b00000000,
	0b00000000,
	
	/* 0x55 U */
	0b00001111,
	0b00010000,
	0b00010000,
	0b00001111,
	0b00000000,
	
	/* 0x56 V */
	0b00001111,
	0b00010000,
	0b00001100,
	0b00000011,
	0b00000000,
	
	/* 0x57 W */
	0b00001111,
	0b00010000,
	0b00001110,
	0b00010000,
	0b00001111,
	
	/* 0x58 X */
	0b00011011,
	0b00000100,
	0b00000100,
	0b00011011,
	0b00000000,
	
	/* 0x59 Y */
	0b00000011,
	0b00010100,
	0b00010100,
	0b00001111,
	0b00000000,
	
	/* 0x5a Z */
	0b00011001,
	0b00010101,
	0b00010011,
	0b00000000,
	0b00000000,
	
	/* 0x5b [ */
	0b00011111,
	0b00010001,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x5c backslash */
	0b00000001,
	0b00000010,
	0b00000100,
	0b00001000,
	0b00010000,
	
	/* 0x5d ] */
	0b00010001,
	0b00011111,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x5e ^ */
	0b00000010,
	0b00000001,
	0b00000010,
	0b00000000,
	0b00000000,
	
	/* 0x5f _ */
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	
	/* 0x60 ` */
	0b00000001,
	0b00000010,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x61 a */
	0b00001100,
	0b00010010,
	0b00010010,
	0b00011110,
	0b00000000,
	
	/* 0x62 b */
	0b00011111,
	0b00010010,
	0b00010010,
	0b00001100,
	0b00000000,
	
	/* 0x63 c */
	0b00001100,
	0b00010010,
	0b00010010,
	0b00000000,
	0b00000000,
	
	/* 0x64 d */
	0b00001100,
	0b00010010,
	0b00010010,
	0b00011111,
	0b00000000,
	
	/* 0x65 e */
	0b00001100,
	0b00011010,
	0b00010110,
	0b00000100,
	0b00000000,
	
	/* 0x66 f */
	0b00000100,
	0b00011110,
	0b00000101,
	0b00000000,
	0b00000000,
	
	/* 0x67 g */
	0b00001100,
	0b01010010,
	0b01010010,
	0b00111110,
	0b00000000,
	
	/* 0x68 h */
	0b00011111,
	0b00000010,
	0b00000010,
	0b00011100,
	0b00000000,
	
	/* 0x69 i */
	0b00011101,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x6a j */
	0b01000000,
	0b00111101,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x6b k */
	0b00011111,
	0b00001000,
	0b00001100,
	0b00010010,
	0b00000000,
	
	/* 0x6c l */
	0b00011111,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x6d m */
	0b00011110,
	0b00000010,
	0b00011110,
	0b00000010,
	0b00011100,
	
	/* 0x6e n */
	0b00011110,
	0b00000010,
	0b00000010,
	0b00011100,
	0b00000000,
	
	/* 0x6f o */
	0b00001100,
	0b00010010,
	0b00010010,
	0b00001100,
	0b00000000,
	
	/* 0x70 p */
	0b01111110,
	0b00010010,
	0b00010010,
	0b00001100,
	0b00000000,
	
	/* 0x71 q */
	0b00001100,
	0b00010010,
	0b00010010,
	0b01111110,
	0b00000000,
	
	/* 0x72 r */
	0b00011110,
	0b00000100,
	0b00000010,
	0b00000000,
	0b00000000,
	
	/* 0x73 s */
	0b00010100,
	0b00010110,
	0b00011010,
	0b00001010,
	0b00000000,
	
	/* 0x74 t */
	0b00000010,
	0b00001111,
	0b00010010,
	0b00000000,
	0b00000000,
	
	/* 0x75 u */
	0b00001110,
	0b00010000,
	0b00010000,
	0b00011110,
	0b00000000,
	
	/* 0x76 v */
	0b00001110,
	0b00010000,
	0b00001000,
	0b00000110,
	0b00000000,
	
	/* 0x77 w */
	0b00000110,
	0b00011000,
	0b00000110,
	0b00011000,
	0b00000110,
	
	/* 0x78 x */
	0b00010010,
	0b00001100,
	0b00010010,
	0b00000000,
	0b00000000,
	
	/* 0x79 y */
	0b00001110,
	0b01010000,
	0b01010000,
	0b00111110,
	0b00000000,
	
	/* 0x7a z */
	0b00010010,
	0b00011010,
	0b00010110,
	0b00010010,
	0b00000000,
	
	/* 0x7b { */
	0b00000100,
	0b00011011,
	0b00010001,
	0b00000000,
	0b00000000,
	
	/* 0x7c | */
	0b00011111,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	
	/* 0x7d } */
	0b00010001,
	0b00011011,
	0b00000100,
	0b00000000,
	0b00000000,
	
	/* 0x7e ~ */
	0b00000010,
	0b00000001,
	0b00000010,
	0b00000001,
	0b00000000,
};

const uint8_t font_04b_03_mask[] PROGMEM = {
	0b01111111,
	0b01111111,
	0b01111111,
	0b01111111,
	0b01111111,
};

const uint8_t font_04b_03_widths[] PROGMEM = {
	1, // space
	1, // !
	3, // "
	5, // #
	4, // $
	5, // %
	5, // &
	1, // '
	2, // (
	2, // )
	3, // *
	3, // +
	2, // ,
	3, // -
	1, // .
	5, // /
	4, // 0
	2, // 1
	4, // 2
	4, // 3
	4, // 4
	4, // 5
	4, // 6
	4, // 7
	4, // 8
	4, // 9
	1, // :
	1, // ;
	3, // <
	3, // =
	3, // >
	4, // ?
	5, // @
	4, // A
	4, // B
	3, // C
	4, // D
	3, // E
	3, // F
	4, // G
	4, // H
	3, // I
	4, // J
	4, // K
	3, // L
	5, // M
	4, // N
	4, // O
	4, // P
	4, // Q
	4, // R
	4, // S
	3, // T
	4, // U
	4, // V
	5, // W
	4, // X
	4, // Y
	3, // Z
	2, // [
	5, // backslash
	2, // ]
	3, // ^
	4, // _
	2, // `
	4, // a
	4, // b
	3, // c
	4, // d
	4, // e
	3, // f
	4, // g
	4, // h
	1, // i
	2, // j
	4, // k
	1, // l
	5, // m
	4, // n
	4, // o
	4, // p
	4, // q
	3, // r
	4, // s
	3, // t
	4, // u
	4, // v
	5, // w
	3, // x
	4, // y
	4, // z
	3, // {
	1, // |
	3, // }
	4, // ~
};
