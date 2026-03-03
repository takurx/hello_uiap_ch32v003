#include <Arduino.h>
#include <unity.h>

void test_simple_assertion(void) {
    TEST_ASSERT_EQUAL(true, true);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_simple_assertion);
    UNITY_END();
}

void loop() {
    // Do nothing
}
