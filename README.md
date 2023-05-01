# CREATE-Competition-Automated-Paper-Ream-Opener

 Fall 2022 - Spring 2023 
 ECE Design Lab
 
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
 * CREATE_Experimental_Results_and_Discussion

 Furthermore, within the "Presentations" folder viewers have been provided with a final copy of the presentation slides for both the fall and spring semesters utilized within the classroom setting that exemplify the accomplished work within a condensed format.
 
 
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
       
  3. Crucial Supplies/Experimental Parts
 
     * Wires
  
       Link: https://www.amazon.com/dp/B08B8XX89H/ref=twister_B09H6XQRJG?_encoding=UTF8&th=1
       
     * Bulk Pack of A4988 Stepper Motor Drivers
  
       Link: https://www.amazon.com/HiLetgo-Stepstick-Stepper-Printer-Compatible/dp/B07BND65C8/ref=sr_1_3?crid=G0BBGVX4W37D&keywords=a4988&qid=1664568298&qu=eyJxc2MiOiI0LjA3IiwicXNhIjoiMy41MiIsInFzcCI6IjMuMjUifQ%3D%3D&sprefix=A4988%2Caps%2C2232&sr=8-3

     * DM542T STEPPERONLINE CNC Stepper Motor Driver
  
       Link: https://www.amazon.com/STEPPERONLINE-1-0-4-2A-20-50VDC-Micro-step-Resolutions/dp/B06Y5VPSFN/ref=sr_1_13?keywords=nema+17+driver&qid=1664568370&qu=eyJxc2MiOiI0LjA2IiwicXNhIjoiMy43NyIsInFzcCI6IjMuNTAifQ%3D%3D&sr=8-13
       
     * Bates- Double Edge Razor Blade
  
       Link: https://www.amazon.com/Bates-Choice-Pro-Razor-blades/dp/B09BJNDDRN/ref=sr_1_6?crid=251T2DUXYX536&keywords=double+edge+razor+blade&qid=1664568460&qu=eyJxc2MiOiI1LjQ2IiwicXNhIjoiNC45MSIsInFzcCI6IjQuNzYifQ%3D%3D&sprefix=double+edge+%2Caps%2C87&sr=8-6
       
     * Utility Knife Blades by HEIKIO
  
       Link: https://www.amazon.com/Utility-HEIKIO-Standard-Replacement-Heavy-duty/dp/B09Q3NSYD2/ref=sr_1_7?crid=ROZT8PODJ5NI&keywords=knife+blade&qid=1664568691&qu=eyJxc2MiOiI1Ljg0IiwicXNhIjoiNC4zMiIsInFzcCI6IjQuMDUifQ%3D%3D&sprefix=knife+blad%2Caps%2C87&sr=8-7

     * Yanzeo CC431-60119ADF Input Paper Tray
  
       Link: https://www.amazon.com/YANZEO-CC431-60119-Input-CM1312-CM2320/dp/B072JGJ8HH/ref=sr_1_11?crid=1Q5VCT93WBDPN&keywords=paper+input+tray&qid=1664569153&qu=eyJxc2MiOiIwLjAwIiwicXNhIjoiMC4wMCIsInFzcCI6IjAuMDAifQ%3D%3D&sprefix=paper+input+tray%2Caps%2C112&sr=8-11
       
     * Automatic Document Feeder ADF Paper Input Tray
  
       Link: https://www.amazon.com/OKLILI-CM1312-CM2320-M375-M2727/dp/B093SQB75L/ref=sr_1_12?crid=1Q5VCT93WBDPN&keywords=paper+input+tray&qid=1664569153&qu=eyJxc2MiOiIwLjAwIiwicXNhIjoiMC4wMCIsInFzcCI6IjAuMDAifQ%3D%3D&sprefix=paper+input+tray%2Caps%2C112&sr=8-12
       
     * 12V 2A Power Supply
  
       Link: https://www.amazon.com/inShareplus-Mounted-Switching-Connector-Adapter/dp/B01GD4ZQRS/ref=sr_1_8?crid=2IFNPO7KWKB5G&keywords=led%2Bpower%2Bsupply&qid=1664569882&qu=eyJxc2MiOiI1LjUyIiwicXNhIjoiNS4yMCIsInFzcCI6IjUuMDgifQ%3D%3D&s=hi&sprefix=led%2Bpower%2B%2Ctools%2C91&sr=1-8&th=1

  4. Store-Bought Components
  
     * 12" Mending Plate Zinc (Straight Metal Bar with Holes) (Quantity: 2)
  
       Store: Home Depot

  
 ### Itemized Expenses
  
| Category                   | Item                                  | Price |
| -------------------------- |:-----------------------------------------------------------------:| -----:|
| Drive System               |Belt Driven Nema 17: 500mm 1070-Bundle                             |$117.99|
|                            |Belt Driven Nema 17: 500mm 1070-Bundle                             |$117.99|
|                            |Belt Driven Nema 17: 250mm 1070-Bundle                             |$111.99|
|                            |                                                                   |       |
| Control-Oriented Components| CNC Shield Expansion Board V3.0 + 4Pcs A4988 Stepper Motor Driver |$15.39 |
|                            | 12V 6A Power Supply                                               |$19.99 |
|                            |Arduino Mega                                                       |$20.99 |
|                            |                                                                   |       |
| Crucial Supplies/Experimental Parts| Wires                                                     |$14.94 |
|                            |Bulk Pack of A4988 Stepper Motor Drivers                           |$9.89  |
|                            |DM542T STEPPERONLINE CNC Stepper Motor Driver                      |$28.99 |
|                            |Bates- Double Edge Razor Blade                                     |$4.95  |
|                            |Utility Knife Blades by HEIKIO                                     |$4.99  |
|                            |Yanzeo CC431-60119ADF Input Paper Tray                             |$19.00 |
|                            |Automatic Document Feeder ADF Paper Input Tray                     |$16.99 |
|                            |12V 2A Power Supply                                                |$8.89  |
|                            |                                                                   |       |
|Store-Bought         |12" Mending Plate Zinc (Straight Metal Bar with Holes) (Quantity: 2)      |$11.38 |
|                 |               |       |
|Shipping Cost    |-------------  |$25.50 |
|Grand Total      |-------------  |$549.86|


      
  
  
   ### Software Dependencies
   
   In the context of software dependencies there is none for the traditional user. This apparatus requires no external downloads and is advertised as a complete stand-alone product.
   
However, when initially setting up the device one must upload the source code onto the microcontroller. The first step is to download the Arduino IDE, the appropriate link is found below:

Link: https://www.arduino.cc/en/software

At this stage the setup in terms of software has been completed. Please download the source code provided within this repository and upload to the microcontroller to begin using the apparatus.

### Replication

In the interest of successfully replicating the aforementioned progress a concise check list has been provided below.

 1. Watch the instructional video provided below:

     * Link: https://www.screencast.com/t/LzzzPJ7e0wt
       
Now that sufficient context has been provided an individual would proceed by purchasing the displayed equipment articulated within the video format. A complete list of parts with purchasing links has been organized up above in the "System Parts" section.
    
  2. Purchase Relevant Equipment
  
Lastly, the final step of the procedure is to recreate the circuit connections displayed within the "Misc" folder of this repository. After this has been accomplished an indvidual may upload the source code to the microcontroller.
    
  3. Follow Circuit Schematic and Upload Source Code
 
It will be known whether or not successful replication has been achieved based on the performance of the apparatus in comparison to the ideal case displayed in the instructional video.

### TO-DO

Looking forward to the future the team will resume work on the device during the winter break. Designers expect to achieve considerable progress, especially in the following areas:
    
     * Development of Enclosure (Focusing on the Safety of Disabled Employees)
       
     * Increased Automation Emphasis
       
     * Satisfying Secondary Tasks provided by the Stakeholder

### Personnel and Funding

This project is completely sponsored by New York State Industries for the Disabled (NYSID) and allows the respective designers to take part in the CREATE (Cultivating Resources for Employment with Assistive TEchnology) competition.

Designers

1. Youssef Jalwaj Soubai

2. Mazin Chater

3. Abdullah Qureshi

Faculty Mentors/Support

1. Jonathan Muckell

2. Mike Denmark

Special thanks to Alex Demitraszek, customer care manager of the Center for Disability Services.

Developed in ECE490: Design Lab; in the Electrical & Computer Engineering Department. 
