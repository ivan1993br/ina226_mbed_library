#include "unittest_transport.h"

#ifdef PIO_FRAMEWORK_MBED_RTOS_PRESENT
#define SERIAL_TXD PD_8
#define SERIAL_RXD PD_9

#include "mbed.h"

static Serial g_serial(SERIAL_TXD, SERIAL_RXD);
static DigitalOut led3(PD_13);

void unittest_uart_begin() {
  led3 = 1;
  g_serial.baud(115200);
}

void unittest_uart_putchar(char c) {
  g_serial.putc(c);
}

void unittest_uart_flush() {
}

void unittest_uart_end() {}
#endif
