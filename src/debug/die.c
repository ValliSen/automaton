/* automaton
 * (c) 2013 Justin Gottula
 * The source code of this project is distributed under the terms of the
 * simplified BSD license. See the LICENSE file for details.
 */


#include "debug/die.h"
#include "uart/uart.h"


noreturn void die(void) {
	uart_flush(UART_PC, 1000);
	
	cli();
	BREAK();
	for ( ; ; );
}
