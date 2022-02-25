# Smart Home Automation System

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

![pfc](https://user-images.githubusercontent.com/82751022/154841999-ff9c54fe-7b39-4453-9b0b-be28609ca92a.png)



## Block Diagram Of Subsystem

## Power Supply
![Power supply](https://user-images.githubusercontent.com/82751022/154840639-2294ade3-216f-461d-88f8-3651f7df7df1.png)

- In this Power Supply we use Step-Down transformer, Rectifier and the voltage regulator.
## Step-Down Transformer: 
  - this is used to step down the incoming voltage i.e., 230V to 12V so that the upcoming components are comfortable for operation.
## Rectifier: 
- This device is used to convert the incoming 12v Ac to 12V dc (ac to dc converter).
## Voltage Regulator: 
As we Know that the output of the rectifier is a Pulsating dc so voltage regulator is used to make the pulsating dc voltage to constant dc voltage.

## Current Transformer:
- In an electrical circuit, currents is measured by using a C T at point when current is exceptionally high to straightforwardly apply to measuring instruments, the C T creates a decreased current, that can be suitably connected with measuring and recording instruments.
- CT is also used as a Protection Purpose.

## Potential Transformer:
- They convert A.C from one level to another voltage level along with some loss of power.
- Potential Transformers output is usually used for measuring and also various monitoring purposes.




## Microcontroller:
- It is the Heart of the embedded system.
- It does majority of the work starting from taking the data or instructions in, processing it according the program written and finally provide the output to complete the required function.

## Zero Crossing Detector:
- Zero crossing detector is a voltage comparator that changes the o/p between +Vsat & –Vsat when the I/p crosses zero reference voltage.
- the comparator is a basic operational amplifier used to compare two voltages simultaneously and changes the o/p according to the comparison. In the same way, we can say ZCD is a comparator.

## Relay:
- These controls relay has automatic and manual function with capability to switch every individual capacitor stage on or off.
- automatic identification of voltage & current source.

## Driver: 
- It is used to drive the relay with required current.

## Static Capacitor Banks:
- Static capacitor can produce reactive power and production of reactive power can be managed in regulated orders. Static Capacitors are usefully used to control level of voltage applied to customers by reducing or eliminating drop in voltage in system caused by inductive loads.

## Display:
- An embedded system communicates directly to a human being by use of input and output devices.
- The Status of the Power factor is displayed in the display by the microcontroller.







