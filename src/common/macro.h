/* automaton
 * (c) 2013 Justin Gottula
 * The source code of this project is distributed under the terms of the
 * simplified BSD license. See the LICENSE file for details.
 */


#ifndef AUTOMATON_COMMON_MACRO_H
#define AUTOMATON_COMMON_MACRO_H


#define CONCAT(_a, _b) \
	_a ## _b

#define CEIL(_num, _div) \
	((_num) == 0 ? 0 : ((((_num) - 1) / (_div)) + 1))
#define ROUND(_num, _div) \
	((_num + (_div / 2)) / _div)


#endif
