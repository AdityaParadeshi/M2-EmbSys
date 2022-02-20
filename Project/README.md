# Introduction:

- Power factor is a measure of how effectively you are using electricity.
- It is the ratio between the Actual to Apparent Power.
- There are three types of load :-
- 1 Inductive Load.
- 2 Capacitive load.
- 3 Resistive load.
- An inductive load, like a motor, compressor or ballast, also requires Reactive Power to generate and sustain a magnetic field in order to operate. Which leads to the            low power factor.
- Improving the PF can maximize current-carrying capacity, improve voltage to equipment, reduce power losses, and lower electric bills.
- The simplest way to improve power factor is to add PF correction capacitors to the electrical system.

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

![pfc](https://user-images.githubusercontent.com/82751022/154840772-32d48d22-ee73-46a6-bd2e-c1bf91913795.png)


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







