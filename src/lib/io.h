/* automaton
 * (c) 2013 Justin Gottula
 * The source code of this project is distributed under the terms of the
 * simplified BSD license. See the LICENSE file for details.
 */


#ifndef AUTOMATON_LIB_IO_H
#define AUTOMATON_LIB_IO_H


#include "std.h"
#include "lib.h"


#define io_read(_reg, _mask) \
	(_reg & _mask)
#define io_write(_reg, _mask, _val) \
	(_reg) = (((_reg) & ~(_mask)) | ((_val) & (_mask)))


#define DDR(_x) \
	_CONCAT(DDR, _x)
#define PORT(_x) \
	_CONCAT(PORT, _x)
#define PIN(_x) \
	_CONCAT(PIN, _x)


#define IO_BTN      B
#define IO_UART     B
#define IO_LCD_BUS  C
#define IO_ISO9141  D
#define IO_DEBUG    D
#define IO_LCD_CTRL D


/*enum io_port_a {
	
};*/

enum io_port_b {
	IO_UART_DETECT = _BV(PB4),
};

enum io_port_c {
	IO_LCD_BUS_ALL = 0xff,
};

enum io_port_d {
	IO_ISO9141_RX  = _BV(PD2),
	IO_ISO9141_TX  = _BV(PD3),
	IO_ISO9141_ALL = IO_ISO9141_RX | IO_ISO9141_TX,
	
	IO_DEBUG_LED = _BV(PD4),
	
	IO_LCD_CTRL_E   = _BV(PD5),
	IO_LCD_CTRL_RW  = _BV(PD6),
	IO_LCD_CTRL_RS  = _BV(PD7),
	IO_LCD_CTRL_ALL = IO_LCD_CTRL_E | IO_LCD_CTRL_RW | IO_LCD_CTRL_RS,
};


#endif