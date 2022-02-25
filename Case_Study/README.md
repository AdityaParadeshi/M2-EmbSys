# Small Level Case Study

## Block Diagram Of Tachometer

![digital tachometer](https://user-images.githubusercontent.com/82751022/154839827-e7b0263b-8a78-4ce9-8212-b31a704571e7.png)

## Digital Tachometer
- A tachometer made purely from electronic components and is used to measure the speed of an engine or any other moving object in revolutions per minute is known as an electronic tachometer. Electronic tachometers are used in the dashboard of a car for measuring the driving speed. These tachometers are lightweight, easy to view, and accurate under all conditions.

## Optical sensing: 
- An optical sensor consists of an optical disk placed near the motor which generates pulses proportional to the rotating shaft. A slotted disk and IR emitter are used to generate these pulses.

## Magnetic sensing: 
- In this type of sense, there is a possibility to use either Hall Effect sensors or magnetic sensors. Hall Effect principle generates the pulses proportional to the speed of the shaft and magnetic sensors are used to generate pulses by making use of variable reluctance.

## Signal Conditioning: 
- The output signals from the sensors are noisy, and therefore, are filtered, amplified, and digitized so that the microcontroller recognizes these signals for further action.

## Microcontroller:
-  A microcontroller is used to analyze and process the readings from the sensors. It sends that information to a display device, and when the speed is reduced or increased to a predefined level, it alerts the user by taking appropriate action.

## Memory: 
- The memory unit stores the data from the microcontroller

## Display Unit: 
- The function of the display unit is to view the stored values transmitted from the microcontroller.




# Medium Level Case Study

# Requirements

## High level requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|Power factor improvement |
|HLR2	|Harmonics must be reduced |
|HLR3	|Reduction in KVAR demand |
|HLR4	|Reduction of electricity bill |

## Low Level Requirement:

|RID	|DESCRIPTION |
|---- |----|
|LLR1	|Selection of appropriate Capacitive Banks |
|LLR2	|Inductive loads must be reduced |
|LLR3	|Continuous monitor of  load |

# Block Diagram of Automatic Power Factor Correction

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



