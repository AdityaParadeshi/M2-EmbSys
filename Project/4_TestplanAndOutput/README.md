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


![testingpass](https://user-images.githubusercontent.com/82751022/157089408-dad5ff07-d541-45e2-bdd8-17e44e593099.jpg)








                                                               
