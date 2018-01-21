#pragma once

#define DEBUG
//#define TIME

#define VERSION 1

#define NUM_LEDS 2
#define STATUS_LED 13
#define ARM_LED -1

#define MOTOR_0_PIN 6
#define MOTOR_1_PIN 4
#define MOTOR_2_PIN 23
#define MOTOR_3_PIN 22

#define NUM_RC_CHANNELS 6

#define RC_CHANNEL_0_PIN 21 
#define RC_CHANNEL_1_PIN 20
#define RC_CHANNEL_2_PIN 17
#define RC_CHANNEL_3_PIN 16
#define RC_CHANNEL_4_PIN 15
#define RC_CHANNEL_5_PIN 14

const int RC_CHANNEL_PINS[NUM_RC_CHANNELS] = {
    RC_CHANNEL_0_PIN,
    RC_CHANNEL_1_PIN,
    RC_CHANNEL_2_PIN,
    RC_CHANNEL_3_PIN,
    RC_CHANNEL_4_PIN,
    RC_CHANNEL_5_PIN,
};

#define THROTTLE_CHANNEL 0
#define PITCH_CHANNEL 1
#define ROLL_CHANNEL 2
#define YAW_CHANNEL 3
#define AUX0_CHANNEL 4
#define AUX1_CHANNEL 5

#define STARTUP_TIME_S 2
#define ARM_DELAY_S 3

#define IMU_RATE_HZ 1000
#define KINEMATICS_RATE_HZ 1000
#define TELEMETRY_RATE_HZ 100

#define PWM_RESOLUTION 11
#define PWM_MAX 2048
#define PWM_MIN 1024

#define ACCEL_OFFSET_X 1423
#define ACCEL_OFFSET_Y 2182
#define ACCEL_OFFSET_Z 1985
#define GYRO_OFFSET_X -37
#define GYRO_OFFSET_Y 24
#define GYRO_OFFSET_Z 36

#define ACCEL_WEIGHT 0

#define ACCEL_1G 16384
#define GYRO_RANGE_DEG 250