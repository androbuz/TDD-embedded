
#ifdef TEST

#include "unity.h"

#include "Demo.h"

void setUp(void)
{
}

void tearDown(void)
{
}



#endif // TEST

void test_Read_Button_Input(void)
{
    TEST_ASSERT_EQUAL(0, BUTTON); //PB0 or Port 8
    readButton(BUTTON);
    TEST_ASSERT_TRUE((*DDRB & (1 << BUTTON)) == 0);
    TEST_ASSERT_TRUE((*PORTB & (1 << BUTTON)) == 1); //PORTB should be 1 for a pull up resisto
}

void test_correct_led(void)
{
    TEST_ASSERT_EQUAL(7, LED);
}

void test_TurnOn_led(void)
{
    ledTurn_on(LED);
    TEST_ASSERT_TRUE((*DDRD & (1 << LED)) != 0);
}

void test_TurnOff_led(void)
{
    ledTurn_off(LED);
    TEST_ASSERT_TRUE((*DDRD & (1 << LED)) == 0);
}

void test_TurnOn_led_on_press(void)
{
    *PINB = 0; //Pushed, since the pull up resistor is enabled
    *DDRD = 0; //light is initially off
    unsigned short initial = (*PORTD);
    readButton(BUTTON);
    whenPressed(LED);
    TEST_ASSERT_NOT_EQUAL(initial, *PORTD);
}