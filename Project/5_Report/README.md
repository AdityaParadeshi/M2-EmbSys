# Smart Home Automation System

# Table Of Content:
- 1. About Smart Automation System
-   1.1 Abstract
-   1.2 Introduction
-   1.3 Objectives
-   1.4 Swot Analysis
-   1.5 4w's and 1H
- 2. Requirements
-   2.1 High level requirements
-   2.2 Low level requirements
- 3. Block Diagram
-   3.1 Explaination on blocks
-   3.2 Sub System and its explaination
- 4. Architecture
-   4.1 UML Diagram
-   4.2 Use case Structural Diagram
-   4.3 Flow Chart
- 5. Advantages And Disadvantages
-   5.1 Advantages
-   5.2 Disadvantages
- 6. Applications

# Abstract
- With advancement of technology things are becoming simpler and easier for us.  
- Automation plays an increasingly important role in the world economy and in daily experience. 
- Automatic systems are being preferred over manual system. 

# Introduction:

- Automation is control of the electrical or electronic device within area or remotely.
- The project deals with the safety sensors such as --> Earthquake sensor, Temprature sensor, Smoke sensor, Motion Sensor.
- When the sensors detect the input they perform the required operation and alert the person 

# Objectives
- to improve the quality of life and convenience in the home.
- Different models to be designed for security purpose.

# Swot Analysis
## Strengths
- Effecient and Intelligent energy saving Techniques.
- Safety and Security will be increased.
- Single Protocol.
- Support for Effecient operation.

## Weakness
- cost of system may be increased
- Replacement of devices will be difficult
- complex system

## opportunities
- Advancement in Technology.
- Infrastructure Management.

## Threats
- Targated Attacks
- Short lifespan of Device
- Data Manipulation
- Identity Theft

# 4W's And 1H

## Who??? 
- This system is used by consumers for automizing their home.
## What??? 
- This is an automated system used for controlling the electrical and electronic devices
## When??? 
- This system can be used whenever there is the need of automation
## Where??? 
- This System can be used in Residential, Commercial and Industrial buildings
## How??? 
- This system is human machine interface which senses the input  and Displays the output and alerts the person

# Requirements

## High level requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|Home shall be Automated |
|HLR2	|System shall sense the motion |
|HLR3	|System shall sense the smoke  |
|HLR4	|System shall sense the environmental changes  |
|HLR5 |System shall sense the temprature |

## Low Level Requirement:

|RID	|DESCRIPTION |
|---- |----|
|LLR1	|led shall be turned on and displayed if Motion sensor (PIR) detects |
|LLR2	|temprature shall be displayed if temprature is sensed |
|LLR3	|viberation value shall be displayed if earthquake sensor detects |
|LLR4	|led shall be turned on if earthquake sensor doesnot detect |
|LLR5	|Exhaust fan shall be turned on if smoke is detected |

# Block Diagram of Smart Home Automation System

![home automation](https://user-images.githubusercontent.com/82751022/156934809-92154d70-95ee-44c0-91b7-f1938c739059.png)


## Microcontroller:
- It is the Heart of the embedded system.
- It does majority of the work starting from taking the data or instructions in, processing it according the program written and finally provide the output to complete the required function.

## PIR Sensor
- An Passive infrared (PIR) sensor is an electronic device that measures and detects infrared radiation in its surrounding environment.
- In the above project the PIR sensor is used to detect the motion around the surrounding and provide the output

## Smoke Sensor
- The smoke sensor is used to detect the smoke around the surrounding and perform the necessary actions

## Earthquake Sensor
- An earthquake is an unavoidable and unpredictable natural phenomenon that often causes damage to lives and property. We cannot fight it but we can stay alert and aware using technology 
- In the above Project the earthquake sensor sense the viberation and displays the viberation values and alerts the person. 

## Temprature Sensor
- Temprature sensor is used to detect the temprature around the surroundings and perform its operation.

## Dc Motor (Actuator)
- The Dc Motor is used as the exhaust  fan which turns on when the smoke is detected

## Buzzer
- an electrical device that makes a buzzing noise and is used for signalling used as an output device

## LCD Display
-  LCD display is used to display the output of the sensor.




## Block Diagram Of Subsystem
![Power supply](https://user-images.githubusercontent.com/82751022/156935919-8305d7c7-a202-4e31-a77e-b7f8a7ba40ed.png)

## Power Supply



- In this Power Supply we use Step-Down transformer, Rectifier and the voltage regulator.
## Step-Down Transformer: 
  - this is used to step down the incoming voltage i.e., 230V to 5V so that the upcoming components are comfortable for operation.
## Rectifier: 
- This device is used to convert the incoming 5v Ac to 5V dc (ac to dc converter).
## Voltage Regulator: 
As we Know that the output of the rectifier is a Pulsating dc so voltage regulator is used to make the pulsating dc voltage to constant dc voltage.

# Architecture

## UML Diagram
![uml](https://user-images.githubusercontent.com/82751022/156936095-f216ed84-839f-4624-9a8a-1045e806ad64.png)

## Use Case Structural Diagram
![use case structure](https://user-images.githubusercontent.com/82751022/155834194-66bffb5e-c48e-42e2-b609-7483dad64bf7.png)

## Flow Chart
![complete flow](https://user-images.githubusercontent.com/82751022/156937127-dd44c1c9-44df-4278-81f1-58052cff4067.png)

## Simulation
![simulation circuit](https://user-images.githubusercontent.com/82751022/157204997-c70996e7-af08-49cd-bf52-96169a13c5dd.PNG)

# Test Plan

## High Level Test:

|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |            
|---- |---- |---- |---- |----|----|
|HLT1 |Motion Sensor |Sense the Motion |Sensed |Sensed |pass |
|HLT2 |Temprature Sensor | Temprature must be sensed| sensed |sensed |pass |
|HLT3 |Smoke Sensor |Smoke must be sensed |Sensed |Sensed |pass |
|HLT4 | Earthquake Sensor|Viberation must be sensed | Sensed|Sensed |pass |
       


## Low Level Test:

## Low Level Test for Motion Sensor (Using LED)

|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT1.1 |test for motion sensor |for the simulation PIR sensor is replaced through the switch(when switch is high) |Led ON  |Led ON |pass |  
|LLT1.2 |test for motion sensor |When the Switch is low |Led OFF |Led OFF |pass |

## Low Level Test for Motion Sensor (Using Display)
|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT1.3 |test for motion sensor |When the Switch is High |Motion Detected |Motion Detected |pass |
|LLT1.4 |test for motion sensor |When the Switch is Low |Motion not Detected |Motion not Detected |pass |

## Low Level Test for Temperature Sensor (Using Display)
|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT2.1 |test for Temperature sensor |for the simulation Temprature sensor is replaced through the Potentiometer(when Potentiometer is at initial point) |temp=0*celcius  |temp=0*celcius |pass |
|LLT2.2 |test for Temperature sensor |when Potentiometer is slightly varied |temp=15*celcius  |temp=15*celcius |pass |


## Low Level Test for Smoke Sensor 

|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT3.1 |test for Smoke sensor |for the simulation smoke sensor is replaced with Potentiometer (when smoke value<=threshold value(400) |Exhaust fan OFF |Exhaust fan OFF  |pass |
|LLT3.2 |test for Smoke sensor |  smoke value > threshold value(400) |Exhaust fan ON |Exhaust fan ON  |pass |

## Low Level Test for Earthquake Sensor  (using Led)

|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT4.1 |test for Earthquake sensor |for the simulation Eathquake sensor is replaced with Potentiometer (When the Vibration is zero) |Led is ON |Led is ON |pass |
|LLT4.2 |test for Earthquake sensor | When the Vibration sensor gives certain value |Led is OFF |Led is OFF |pass |

## Low Level Test for Earthquake Sensor  (using Display)

|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT4.1 |test for Earthquake sensor | When the  value of Vibration is zero |NO Vibration|NO Vibration |pass |
|LLT4.2 |test for Earthquake sensor | When the Vibration sensor gives certain value |vibration=value of sensor |vibration=value of sensor |pass |


# Tested Output on Motion Sensor
![motion sensor](https://user-images.githubusercontent.com/82751022/157091669-edd2fcd0-271a-45c6-917e-501ee4e1fb2d.PNG)
# Tested Output on Temprature Sensor
![temprature](https://user-images.githubusercontent.com/82751022/157091724-0e3a3bd0-e4e4-4d7d-a7ba-c6df84f10a32.PNG)
# Tested Output on Smoke Sensor at value=0 (Exhaust fan is OFF)
![smoke 0](https://user-images.githubusercontent.com/82751022/157091760-42fb500c-95cc-4c2e-9e0f-7a1afdb904f8.PNG)
# Tested Output on Smoke Sensor at value=0 (Exhaust fan is OFF)
![smoke high](https://user-images.githubusercontent.com/82751022/157091769-3d11f256-4b74-45ae-bade-991c5a38e259.PNG)
# Tested Output on Earthquake Sensor at value=0
![no viberation](https://user-images.githubusercontent.com/82751022/157091859-55ad7dfa-cd40-4614-b5ce-78633a9f7269.PNG)
# Tested Output on Earthquake Sensor at certain vibration value
![viberation](https://user-images.githubusercontent.com/82751022/157091829-67ca4f63-aa46-4480-b519-85c24af1e82c.PNG)
![33vib](https://user-images.githubusercontent.com/82751022/157091929-d8017f32-a63d-4689-a52c-cdcc6ebe5201.PNG)

# All Sensors On Work:



https://user-images.githubusercontent.com/82751022/157106842-c92393d4-71bf-48aa-b6c8-61877b203b48.mp4
















                                                               





# Advantages And Disadvantages

## Advantages
- Easy to use
- Safety and Security is increased
- Provides facility to monitor and control multiple devices

## Disadvantages
- Installiation is costly
- Works only when the object or user is in the range of sensor
- Continuous Power supply is required

# Applications
- Industries,  Residential , Commercial Purpose
- Smart Home Appliances.
- safety and security, etc.
## Reference
- https://www.homemade-circuits.com/pir-sensor-datasheet-pinout-specification-working
- https://www.signaguard.com/seismic-sensor
- https://www.arduino.cc











