
#include "Demo.h"

static unsigned short* address;

//LEAVE THESE
//Mock objects used to get a safe address to work with
unsigned short mock = 100;
unsigned short mock2 = 1;
unsigned short mock3 = 1;
unsigned short mock4 = 1;
unsigned short mock5 = 5;

int LED = 7;
int BUTTON = 0; //PB0
//unsigned short PORTD = 0x2B;
//unsigned short DDRD = 0x2A;
//unsigned short PIND = 0x29;

unsigned short* DDRD = &mock;
unsigned short* DDRB = &mock2;
unsigned short* PORTB = &mock3;
unsigned short* PINB = &mock4;
unsigned short* PORTD = &mock5;

void ledTurn_on( int led){
    *DDRD |= (1 << led); //as output
}

void ledTurn_off( int led){
    *DDRD &= (~(1 << led)); //as input
}

void readButton( int button){
    *DDRB &= ~(1 << button); //clearing the DDRB bit to 0 to enable inputs
    *PORTB |= (1 << button); //changing the DDRB bit to 1 to enable pull up
}

void whenPressed(int led){
    if (!(*PINB & (1<<BUTTON))){ //since the pull up is enabled
        *PORTD ^= (1 << led);
    }
}