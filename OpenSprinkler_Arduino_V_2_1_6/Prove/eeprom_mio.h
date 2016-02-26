// eeprom_mio.h

#ifndef _EEPROM_MIO_h
#define _EEPROM_MIO_h
/*
#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
*/
#include <stdio.h>
#endif

unsigned char eeprom_read_byte(
	unsigned char * __p);
int eeprom_read_word(
	const unsigned int * __p);
void eeprom_write_byte(
	unsigned char * __p,
	unsigned char __value);
void eeprom_read_block(
	void * __dst,
	const void * __src,
	size_t __n);//Read a block of __n bytes from EEPROM address __src to SRAM __dst.
void eeprom_write_block(
	const void * __src,
	void * __dst,
	size_t __n); //Write a block of __n bytes to EEPROM address __dst from __src.
