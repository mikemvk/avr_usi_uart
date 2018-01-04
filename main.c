#include <avr/io.h>
#include <avr/interrupt.h>

#include <stdio.h>

#include "usi_uart_43.h"

int main( void )
{
	char string[32];
	
	usiuartx_init();

	for( ; ; )
	{
	  for(int i = 0; i < 10000; i++)
	  {
	    sprintf(string, "hello %d!!!\r\n", i);
	    usiuartx_tx_string(string);

	  }
	}
}
