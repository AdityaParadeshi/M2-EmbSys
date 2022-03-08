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

## Power Supply
![Power supply](https://user-images.githubusercontent.com/82751022/156935919-8305d7c7-a202-4e31-a77e-b7f8a7ba40ed.png)



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
