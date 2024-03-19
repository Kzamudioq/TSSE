#include "inc/leds.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










static uint16_t leds_port = 0xFF;







void setUp(void);

void test_initial_state(void);

void test_single_led_on(void);

void test_single_led_off(void);

void test_multiple_leds_on_and_off(void);

void test_single_led_get_status_on(void);

void test_all_leds_turn_on(void);

void test_all_leds_turn_off(void);

void test_uninitialized_led_port(void);

void test_uninitialized_led_port_get_single_value(void);

void test_check_boundary_values(void);

void test_check_forbidden_values_turn_on(void);

void test_check_forbidden_values_turn_off(void);

void setUp(void) {

    leds_init(&leds_port);

}









void test_initial_state(void) {

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_init(&leds_port))), (

   ((void *)0)

   ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_UINT16);

}









void test_single_led_on(void) {

    const int LED = 3;



    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED))), (

   ((void *)0)

   ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_INT);

    UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (LED - 1))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(79));

    UnityAssertBits((UNITY_INT)((~(1 << (LED - 1)))), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(80));

}









void test_single_led_off(void) {

    const int LED = 3;





    leds_turn_on_single(LED);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_off_single(LED))), (

   ((void *)0)

   ), (UNITY_UINT)(93), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(94), UNITY_DISPLAY_STYLE_UINT16);

}









void test_multiple_leds_on_and_off(void) {

    const int LED1 = 1;

    const int LED3 = 3;

    const int LED5 = 5;





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED1))), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED3))), (

   ((void *)0)

   ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED5))), (

   ((void *)0)

   ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_INT);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_off_single(LED1))), (

   ((void *)0)

   ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_off_single(LED5))), (

   ((void *)0)

   ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_INT);





    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)(((1 << (LED3 - 1)))), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(115), UNITY_DISPLAY_STYLE_UINT16);

}









void test_single_led_get_status_on(void) {

    const int LED3 = 3;



    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED3))), (

   ((void *)0)

   ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((leds_get_status_single(LED3))), (

   ((void *)0)

   ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);

}









void test_all_leds_turn_on(void) {





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_all())), (

   ((void *)0)

   ), (UNITY_UINT)(134), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0xFF)), (UNITY_INT)(UNITY_UINT16)((leds_get_status_all())), (

   ((void *)0)

   ), (UNITY_UINT)(135), UNITY_DISPLAY_STYLE_UINT16);

}









void test_all_leds_turn_off(void) {





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_all())), (

   ((void *)0)

   ), (UNITY_UINT)(144), UNITY_DISPLAY_STYLE_INT);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_off_all())), (

   ((void *)0)

   ), (UNITY_UINT)(147), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_UINT16);

}









void test_uninitialized_led_port(void) {

    leds_deinit();

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((leds_turn_on_all())), (

   ((void *)0)

   ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0x00)), (UNITY_INT)(UNITY_UINT8 )((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_UINT8);

}











void test_uninitialized_led_port_get_single_value(void) {

    const int LED3 = 3;





    leds_deinit();

    UnityAssertEqualNumber((UNITY_INT)((-2)), (UNITY_INT)((leds_get_status_single(LED3))), (

   ((void *)0)

   ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_INT);

}















void test_check_boundary_values(void) {



    const int LED1 = 1;

    const int LED16 = 16;





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED1))), (

   ((void *)0)

   ), (UNITY_UINT)(184), UNITY_DISPLAY_STYLE_INT);

    UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (LED1 - 1))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(185));

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((leds_turn_on_single(LED16))), (

   ((void *)0)

   ), (UNITY_UINT)(186), UNITY_DISPLAY_STYLE_INT);

    UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (LED16 - 1))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(187));

}











void test_check_forbidden_values_turn_on(void) {



    const int LED1 = 1;

    const int LED16 = 16;



    UnityAssertEqualNumber((UNITY_INT)((-2)), (UNITY_INT)((leds_turn_on_single(LED1 - 1))), (

   ((void *)0)

   ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-2)), (UNITY_INT)((leds_turn_on_single(LED16 + 1))), (

   ((void *)0)

   ), (UNITY_UINT)(200), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_UINT16);

}













void test_check_forbidden_values_turn_off(void) {

    const int LED1 = 1;

    const int LED16 = 16;



    leds_turn_on_all();



    UnityAssertEqualNumber((UNITY_INT)((-2)), (UNITY_INT)((leds_turn_off_single(LED1 - 1))), (

   ((void *)0)

   ), (UNITY_UINT)(215), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-2)), (UNITY_INT)((leds_turn_off_single(LED16 + 1))), (

   ((void *)0)

   ), (UNITY_UINT)(216), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0xFF)), (UNITY_INT)(UNITY_UINT16)((leds_port)), (

   ((void *)0)

   ), (UNITY_UINT)(217), UNITY_DISPLAY_STYLE_UINT16);

}
