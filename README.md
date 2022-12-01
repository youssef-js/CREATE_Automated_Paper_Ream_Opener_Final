# CREATE-Competition-Automated-Paper-Ream-Opener

 Fall 2022 ECE Design Lab
 
 The Center for Disability Services mailing center, which processes enormous amounts of mail per day
supporting official New York State mailing operations, has partnered with students to develop a system that assists
disabled workers. The center uses an estimated 50,000 – 100,000 pieces of paper per day. This paper is manually
opened from reams of paper containing 500 sheets each, therefore, approximately 100-200 reams of paper must be
opened per day. The center would like to hire people with disabilities to open the reams of paper, but this is difficult due
to physical dexterity issues and the large number of paper cuts the disabled workers often suffer when trying to do this
job. 

The goal of this project is to develop a system that automatically opens reams of paper in a safe and effective way.

 
 ### Repository Contents
 
 In the interest of transparency all project reports have been included. Reading through this documentation will provide an individual with information on key milestones that were achieved during the progressive evolution of the product. Specifically the "Reports" folder contains the following: 
 
 * Logical Design Report
 * Physical Design Report
 * Experimental Design Report 

 Furthermore, within the "Presentations" folder viewers have been provided with a final copy of the presentation slides utilized within the classroom setting that exemplify the accomplished work within a condensed format.
 
 
 Lastly, in the scenario where an individual may wish to replicate the design we have provided the source code that is used to control the logic behind the device. The circuit schematic and initial preliminary prototype model have also been included, these can be found within the "Misc" folder. 
 
  ### System Parts
  
  The system was designed with the intention of being completely reproducible by any individual with the desire to do so. As such for the convenience of the prospective designer, the utilized components and their respective links are compiled below:
  
  1. Drive System Components

     * Belt Driven Nema 17: 500mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
       
     * Belt Driven Nema 17: 500mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
       
     * Belt Driven Nema 17: 250mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
    
  2. Control-Oriented Components
  
     * CNC Shield Expansion Board V3.0 + 4Pcs A4988 Stepper Motor Driver
  
       Link: https://www.amazon.com/Shield-Expansion-Stepper-Engraver-Printer/dp/B07DXNZ9PS/ref=cm_cr_arp_d_pl_foot_top?ie=UTF8
       
       
     * 12V 6A Power Supply
  
       Link: https://www.amazon.com/Signcomplex-Supply-Transformer-Switching-Adapter/dp/B074HV582Q/ref=sr_1_1_sspa?crid=1S0OV8LTMPDO3&keywords=12v%2B6amp%2Bpower%2Bsupply&qid=1667590086&qu=eyJxc2MiOiI0LjE4IiwicXNhIjoiMy42NiIsInFzcCI6IjMuMjgifQ%3D%3D&s=industrial&sprefix=12v%2B6A%2Cindustrial%2C77&sr=1-1-spons&th=1
       
     * Arduino Mega 
  
       Link: https://www.amazon.com/ELEGOO-ATmega2560-ATMEGA16U2-Projects-Compliant/dp/B01H4ZDYCE/ref=asc_df_B01H4ZLZLQ/?tag=hyprod20&linkCode=df0&hvadid=309743296044&hvpos=&hvnetw=g&hvrand=5459596528536033104&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9004731&hvtargid=pla-490931309987&th=1
       
  3. Store-Bought Components
  
     N/A

  
 ### Itemized Expenses
  
| Category      | Item          | Price |
| ------------- |:-------------:| -----:|
| Drive System  |Linear Actuator|$42.99 |
|               |L298N Driver   | $6.99 |
|               | AC-DC Adapter | $7.98 |
|               |               |       |
| User Interface| 20x4 LCD      | $6.33 |
|               | 4x4 Keypad    | $5.95 |
|               |MicroSD Board  | $9.56 |
|               |               |       |
|Data Collection|HX711 Amplifier| $1.99 |
|               |Load Cell      |$51.91 |
|               |               |       |
|Store-Bought   |All-Inclusive  |$30.00 |
|               |               |       |
|Grand Total    |-------------  |$163.70|


      
  
  
   ### Software Dependencies
   
   In the context of software dependencies there is none for the traditional user. This apparatus requires no external downloads and is advertised as a complete stand-alone product due to the microSD functionality allowing for an individual to interact with data from the device in the form of a txt file. As such, appropriate data analysis can be performed at the users discretion, it is anticipated that for chemistry students excel will be the preferred tool.
   
However, when initially setting up the device one must upload the source code onto the microcontroller. The first step is to download the Arduino IDE, the appropriate link is found below:

Link: https://www.arduino.cc/en/software

Next, it is important that the required libraries for the provided Arduino source code are properly configured. The procedure for doing so is concisely formatted below:


   Utilize Link --> Press "Code" Button --> Download the ZIP --> Extract files into the "libraries" folder for Arduino.


   -HX711_ADC Library
   
   Link: https://github.com/olkal/HX711_ADC
   
   -LiquidCrystal_I2C Library
  
   Link: https://github.com/johnrickman/LiquidCrystal_I2C
   
   -Keypad Library
  
   Link: https://github.com/Chris--A/Keypad
   
   -EEPROM Library
  
   Link: N/A (Built into Arduino IDE)
   
   -Wire Library
  
   Link: N/A (Built into Arduino IDE)
   
   -SD and SPI Library
  
   Link: N/A (Built into Arduino IDE)


Syntax to reference libraries:

(Provided for the readers understanding, these lines of code have already been included within the source code and there is no need for the user to make any additions.)
```C
// Load cell
#include <HX711_ADC.h>
#include <EEPROM.h>

// LCD
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Keypad
#include <Keypad.h>

// SD Card
#include <SD.h>
#include <SPI.h>
```

At this stage the setup in terms of software has been completed. Please download the source code provided within this repository and upload to the microcontroller to begin using the apparatus.

### Personnel and Funding

This project is completely funded by the Center For Undergraduate Research And Creative Engagement (CURCE). The designers applied for a $500 award and were subsequently granted the sum after passing the validation process. 

Designers

1. Youssef Jalwaj Soubai

2. Mazin Chater

3. Jaden Pharoah

Faculty Mentors/Support

1. Jonathan Muckell

2. Mike Denmark

Special thanks to Professor Chen, Feldblyun, Yeung, and the University at Albany’s Chemistry Department for sponsoring this project. 

Developed in ECE490: Design Lab; in the Electrical & Computer Engineering Department. 
