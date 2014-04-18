/* processor config bit */

// DEVCFG3
#pragma config FSRSSEL = PRIORITY_7
#pragma config FUSBIDIO = ON
#pragma config FVBUSONIO = ON

// DEVCFG2
#pragma config FPLLIDIV = DIV_2
#pragma config FPLLMUL = MUL_20
#pragma config UPLLIDIV = DIV_2
#pragma config UPLLEN = OFF
#pragma config FPLLODIV = DIV_256

// DEVCFG1
#pragma config FNOSC = PRIPLL
#pragma config FSOSCEN = OFF
#pragma config IESO = ON
#pragma config POSCMOD = OFF
#pragma config OSCIOFNC = OFF
#pragma config FPBDIV = DIV_1
#pragma config FCKSM = CSDCMD
#pragma config WDTPS = PS1048576
#pragma config FWDTEN = OFF

// DEVCFG0
#pragma config DEBUG = OFF
#pragma config ICESEL = ICS_PGx2
#pragma config PWP = OFF
#pragma config BWP = OFF
#pragma config CP = OFF


/* Initialize the System */
void SYS_Initialize( void *data )
{
    /* TODO: init all modules*/
}