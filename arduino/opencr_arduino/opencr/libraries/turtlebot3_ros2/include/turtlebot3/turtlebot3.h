/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef TURTLEBOT3_H_
#define TURTLEBOT3_H_

#include <stdint.h>
#include "turtlebot3_motor_driver.h"
#include "turtlebot3_sensor.h"
#include "turtlebot3_controller.h"
#include "turtlebot3_diagnosis.h"


const uint8_t FIRMWARE_VER = 2;
const uint32_t INTERVAL_MS_TO_CONTROL_MOTOR = 20;
const uint32_t INTERVAL_MS_TO_UPDATE_CONTROL_TABLE = 20;

namespace TurtleBot3Core{
  void begin(const char* model_name);
  void run();
} //namespace TurtleBot3Core



#endif // TURTLEBOT3_H_

