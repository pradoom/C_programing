extern void uart_init(unsigned int b_rate);
extern void uart_tx(unsigned char data);
extern unsigned char uart_rx(void);
extern void uart_string(char *p);
extern void uart_rx_string(char*p,int size);