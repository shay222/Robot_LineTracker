void preciseRightTurn() {
  // Set the motors for a precise right turn
  RF_MOTOR->run(FORWARD);
  LF_MOTOR->run(FORWARD);
  RF_MOTOR->setSpeed(0);
  LF_MOTOR->setSpeed(200);

  RB_MOTOR->run(BACKWARD);
  LB_MOTOR->run(FORWARD);
  RB_MOTOR->setSpeed(200);
  LB_MOTOR->setSpeed(0);
}

void preciseLeftTurn() {
  // Set the motors for a precise left turn
  RF_MOTOR->run(FORWARD);
  LF_MOTOR->run(FORWARD);
  RF_MOTOR->setSpeed(200);
  LF_MOTOR->setSpeed(0);

  RB_MOTOR->run(BACKWARD);
  LB_MOTOR->run(FORWARD);
  RB_MOTOR->setSpeed(0);
  LB_MOTOR->setSpeed(200);
}