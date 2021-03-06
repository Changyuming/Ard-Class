#ifndef BOMOTORPAIR_H
#define BOMOTORPAIR_H

#include "Arduino.h"

#define UPPER_ANALOG_LIMIT 255
#define LOWER_ANALOG_LIMIT 0
#define MILLI_MULTIPLIER 1000
#define SPEED_TOLERANCE 5


class BOMotorPair
{
private:
    int M1_pin1 , M1_pin2, M1_PWMPin;

    int M2_pin1, M2_pin2, M2_PWMPin;

    int M1_Speed, M2_Speed;

    int moveDirection;

public:

    BOMotorPair(int, int, int, int ,int, int);

    ~BOMotorPair();

    void SetMoveDirection(int);

    void SetMoveSpeed(int);

    void SetTurnSpeed(int, int);

    void SetWheelSpeedDifferential(int, int);

    void Move();

    void Move(int);

    void Stop();

    void Accelerate(int s1, int s2, int accel);

    void Accelerate(int finalSpeed, int delayRate);
    
    void MoveWheelsIndependently(int leftSpd, int rightSpd);

    

};

enum moveDirection {forward, backward, right, left};

#endif // BOMOTORPAIR_H
