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
- With advancement of technology things are becoming simpler and easier for us. Automation is the use of control systems and information technologies to reduce the need for human work in the production of goods and services. In the scope of industrialization, automation is a step beyond mechanization. Whereas mechanization provided human operators with machinery to assist them with the muscular requirements of work, automation greatly decreases the need for human sensory and mental requirements as well. Automation plays an increasingly important role in the world economy and in daily experience. Automatic systems are being preferred over manual system. Through this project we have tried to show automatic control of a house as a result of which power is saved to some extent.

# Introduction:

- Automation is control of the electrical or electronic device within area or remotely.
- It is Automation of housework or household activities.
- The automation system in residential projects refers to an integrated system in which a very minimum human intervention is required.
- A  automation system usually connects controlled devices to a central hub or gateway. 
- As there is an increase in smart house there are very intresting technology including in the system.
- One of the biggest advantages of home automation is that it keeps your abode safe, and prevents accidental fires, water leaks, gas leaks, and other disasters.
- This is one of the most marketed benefits of smart home systems. Feeling lazy to get up and switch off the lights in all rooms? No worries, with just a few taps on your mobile, you can switch on/off lights and other appliances around the place.
- Smart homes also help you in saving money. Your energy bills are reduced as you can remotely turn off devices, that you aren’t using. This is a huge convenience, and you have complete control of household appliances and devices, without any extra effort.
-  Home automation has high potential for sharing data between family members or trusted individuals for personal security and could lead to energy saving measures with a positive environmental impact in the future.   
- Examples:- temprature control, light control, fan control, refridgerator control, washing machine control etc.

# Objectives
- to improve the quality of life and convenience in the home.
- Different models to be designed for security purpose.

# Swot Analysis
## Strengths
- Effecient and Intelligent energy saving Techniques.
- System cam be controlled within the area and  remotely
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

## Who: 
- This system is used by consumers for automizing their home.
## What: 
- This is an automated system ysed for controlling the electrical and electronic devices
## When: 
- This system can be used whenever there is the need of automation
## Where: 
- This System can be used in Residential, Commercial and Industrial buildings
## How: 
- This system is human machine interface can be used manually or automatically through app or the remote control

# Requirements

## High level requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|Home shall be Automated |
|HLR2	|System shall sense the thing  through IR sensor |
|HLR3	|System shall sense the flame |
|HLR4	|System shall sense the environmental changes |
|HLR5 |System shall sense the temprature |

## Low Level Requirement:

|RID	|DESCRIPTION |
|---- |----|
|LLR1	|Microcontroller shall be used for automation |
|LLR2	|Buzzer shall be turned on if IR sensor detects |
|LLR3	|led shall turned on if temprature is sensed |
|LLR4	|servo shall run if earthquake sensor detects |
|LLR3	|Dc fan shall turned on/off if temprature is sensed |

# Block Diagram of Smart Home Automation System

![home automation](https://user-images.githubusercontent.com/82751022/155759974-2fd7989c-27b4-43df-9a7d-333f9a866352.png)

## Microcontroller:
- It is the Heart of the embedded system.
- It does majority of the work starting from taking the data or instructions in, processing it according the program written and finally provide the output to complete the required function.

## IR Sensor
- An infrared (IR) sensor is an electronic device that measures and detects infrared radiation in its surrounding environment.
- The basic concept of an Infrared Sensor which is used as Obstacle detector is to transmit an infrared signal, this infrared signal bounces from the surface of an object and the signal is received at the infrared receiver.

## Flame Sensor
- Flame Detector module is representative of the many similar devices that are designed to interface with micro-controllers. This particular device consists of an IR detector, op amp circuitry, sensitivity adjustment and an LED indicator.

## Earthquake Sensor
- An earthquake is an unavoidable and unpredictable natural phenomenon that often causes damage to lives and property. We cannot fight it but we can stay alert and aware using technology that can protect us and the industry. Here a simple earthquake indicator for home and industry  and a highly-sensitive accelerometer is presented that can indicate vibrations.

## Temprature Sensor
- Temprature sensor is used to detect the temprature around the surroundings and perform its operation.

## Servo Motor (Actuator)
- A servo motor is an electrical device which can push or rotate an object with great precision. If you want to rotate and object at some specific angles or distance, then you use servo motor. It is just made up of simple motor which run through servo mechanism.

## Buzzer
- an electrical device that makes a buzzing noise and is used for signalling.

## Dc Motor With Fan
- Dc Motor is the device which converts Electrical energy in Mechenical energy connected with the fan. the fan turns on/off based on the temprature sensed in environment.





## Block Diagram Of Subsystem

## Power Supply
![Power supply](https://user-images.githubusercontent.com/82751022/154840639-2294ade3-216f-461d-88f8-3651f7df7df1.png)

- In this Power Supply we use Step-Down transformer, Rectifier and the voltage regulator.
## Step-Down Transformer: 
  - this is used to step down the incoming voltage i.e., 230V to 5V so that the upcoming components are comfortable for operation.
## Rectifier: 
- This device is used to convert the incoming 5v Ac to 5V dc (ac to dc converter).
## Voltage Regulator: 
As we Know that the output of the rectifier is a Pulsating dc so voltage regulator is used to make the pulsating dc voltage to constant dc voltage.

# Architecture

## UML Diagram
![uml](https://user-images.githubusercontent.com/82751022/155767102-0a5acc5d-6862-4eec-b426-493969e143a9.png)

## Use Case Structural Diagram
![use case structure](https://user-images.githubusercontent.com/82751022/155834194-66bffb5e-c48e-42e2-b609-7483dad64bf7.png)

## Flow Chart

![complete flow](https://user-images.githubusercontent.com/82751022/155834105-ebb8f27f-505f-43ba-a218-534c154333e5.png)


# Advantages And Disadvantages

## Advantages
- Easy to use
- Remote operation is possible
- Safety and Security is increased
- Provides facility to monitor and control multiple devices

## Disadvantages
- Installiation is costly
- Works only when the object or user is in the range of sensor
- Continuous Power supply is required

# Applications
- Lightening Systems.
- Lawn/Gardening management.
- Smart Home Appliances.
- Improved Home safety and security.
- Home air quality and water quality monitoring.
- Natural Language-based voice assistants.
- Better Infotainment delivery.
- Lighting control.











