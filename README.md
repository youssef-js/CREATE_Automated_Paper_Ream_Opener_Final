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
 
 
 Lastly, in the scenario where an individual may wish to replicate the design we have provided the source code from the Fall and Spring semester that is used to control the logic behind the device. The initial circuit schematic, initial preliminary prototype model, final circuit schematic, final 3D model and lastly a compilation of the fianl components being used have also been included, these can be found within the "Misc" folder.
 
  ### System Parts
  
  The system was designed with the intention of being completely reproducible by any individual with the desire to do so. As such for the convenience of the prospective designer, the utilized components and their respective links are compiled below:
  
  1. Drive System Components

     * Belt Driven Nema 17: 500mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
       
     * Belt Driven Nema 17: 500mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
       
     * Belt Driven Nema 17: 250mm 1070-Bundle
  
       Link: https://openbuildspartstore.com/v-slot-nema-17-linear-actuator-bundle-belt-driven/
       
     * STEPPERONLINE NEMA 23 Stepper Motor 3.0A
  
       Link: https://www.amazon.com/gp/product/B077Z5QJCL/ref=ewc_pr_img_2?smid=AWQBCGWISS7BL&psc=1
       
     * NEMA23 Stepper Motor Mounting Plate
  
       Link: https://www.amazon.com/gp/product/B0836P59M4/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
       
     * Saiper 5pcs GT2 20 Teeth 6.35mm Bore Timing Pulley
  
       Link: https://www.amazon.com/gp/product/B07MGMBX3N/ref=ewc_pr_img_3?smid=A3ILYKI8R26I7D&th=1
       
     * Threaded Rod with Cart and NEMA Stepper Motor Apparatus
  
       -Obtained from Public Laboratory Supplies, it had been fully assembled by another individual
      
    
  2. Control-Oriented Components
  
     * CNC Shield Expansion Board V3.0 + 4Pcs A4988 Stepper Motor Driver
  
       Link: https://www.amazon.com/Shield-Expansion-Stepper-Engraver-Printer/dp/B07DXNZ9PS/ref=cm_cr_arp_d_pl_foot_top?ie=UTF8
       
       
     * 12V 6A Power Supply
  
       Link: https://www.amazon.com/Signcomplex-Supply-Transformer-Switching-Adapter/dp/B074HV582Q/ref=sr_1_1_sspa?crid=1S0OV8LTMPDO3&keywords=12v%2B6amp%2Bpower%2Bsupply&qid=1667590086&qu=eyJxc2MiOiI0LjE4IiwicXNhIjoiMy42NiIsInFzcCI6IjMuMjgifQ%3D%3D&s=industrial&sprefix=12v%2B6A%2Cindustrial%2C77&sr=1-1-spons&th=1
       
          
     * 24V 6A Power Supply
  
       Link: https://www.amazon.com/Adapter-100-240V-Transformers-Security-Computers/dp/B08Z7X9F1V/ref=sr_1_1_sspa?crid=2WVPUI5FJIYCW&keywords=24v%2B6a%2Bpower%2Bsupply&qid=1683031869&sprefix=24V%2B6A%2B%2Caps%2C428&sr=8-1-spons&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzUlZWV0tSOE4xWlZMJmVuY3J5cHRlZElkPUEwMTQ3NTg1M0ZYRFRRVFdHSFpNVyZlbmNyeXB0ZWRBZElkPUEwMjg2NjU0MlQzODZISlAxUFRVJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ&th=1
       
     * Arduino Mega 
  
       Link: https://www.amazon.com/ELEGOO-ATmega2560-ATMEGA16U2-Projects-Compliant/dp/B01H4ZDYCE/ref=asc_df_B01H4ZLZLQ/?tag=hyprod20&linkCode=df0&hvadid=309743296044&hvpos=&hvnetw=g&hvrand=5459596528536033104&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9004731&hvtargid=pla-490931309987&th=1
       
  3. Crucial Supplies
 
     * Wires
  
       Link: https://www.amazon.com/dp/B08B8XX89H/ref=twister_B09H6XQRJG?_encoding=UTF8&th=1
       
     * Bulk Pack of A4988 Stepper Motor Drivers
  
       Link: https://www.amazon.com/HiLetgo-Stepstick-Stepper-Printer-Compatible/dp/B07BND65C8/ref=sr_1_3?crid=G0BBGVX4W37D&keywords=a4988&qid=1664568298&qu=eyJxc2MiOiI0LjA3IiwicXNhIjoiMy41MiIsInFzcCI6IjMuMjUifQ%3D%3D&sprefix=A4988%2Caps%2C2232&sr=8-3

     * DM542T STEPPERONLINE CNC Stepper Motor Driver
  
       Link: https://www.amazon.com/STEPPERONLINE-1-0-4-2A-20-50VDC-Micro-step-Resolutions/dp/B06Y5VPSFN/ref=sr_1_13?keywords=nema+17+driver&qid=1664568370&qu=eyJxc2MiOiI0LjA2IiwicXNhIjoiMy43NyIsInFzcCI6IjMuNTAifQ%3D%3D&sr=8-13
       
     * DM542T STEPPERONLINE CNC Stepper Motor Driver
  
       Link: https://www.amazon.com/STEPPERONLINE-1-0-4-2A-20-50VDC-Micro-step-Resolutions/dp/B06Y5VPSFN/ref=sr_1_13?keywords=nema+17+driver&qid=1664568370&qu=eyJxc2MiOiI0LjA2IiwicXNhIjoiMy43NyIsInFzcCI6IjMuNTAifQ%3D%3D&sr=8-13
       
     * 18mm Snap-off Blades by HEIKIO
  
       Link: https://www.amazon.com/Snap-Off-50-Pack-Quality-Stainless-Replacement/dp/B07XRTWWMS
       
     * LED Illuminated Push Buttons
  
       Link: https://www.amazon.com/gp/product/B01M7PNCO9/ref=ox_sc_act_title_1?smid=A3H7VB6FZ4M9FM&psc=1
       
     * 2pcs 2040 V Slot 600mm Aluminum Extrusion
  
       Link: https://www.amazon.com/dp/B0B9WY6PK9?ref=ppx_yo2ov_dt_b_product_details&th=1
       
     * 460PCS M4 Screws Metric Button Head
  
       Link: https://www.amazon.com/gp/product/B09YM7V1JC/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&th=1
       
     * Iverntech 20pcs Black Aluminum Corner Bracket
  
       Link: https://www.amazon.com/dp/B091GH5QKF?ref=ppx_pop_mob_ap_share&th=1

  4. Store-Bought Components
  
     * Wooden Planks
  
       Store: Home Depot
     
     * Acrylic Top Cover
  
       Store: Lowes

  
 ### Itemized Expenses
  
| Category                   | Item                                  | Price |
| -------------------------- |:-----------------------------------------------------------------:| -----:|
| Drive System               |Belt Driven Nema 17: 500mm 1070-Bundle                             |$117.99|
|                            |Belt Driven Nema 17: 500mm 1070-Bundle                             |$117.99|
|                            |Belt Driven Nema 17: 250mm 1070-Bundle                             |$111.99|
|                            |STEPPERONLINE NEMA 23 Stepper Motor 3.0A                           |$31.98 |
|                            |NEMA23 Stepper Motor Mounting Plate                                |$9.49  |
|                            |Saiper 5pcs GT2 20 Teeth 6.35mm Bore Timing Pulley                 |$8.39  |
|                            |Threaded Rod with Cart and NEMA Stepper Motor Apparatus            |FREE   |
|                            |                                                                   |       |
| Control-Oriented Components|CNC Shield Expansion Board V3.0 + 4Pcs A4988 Stepper Motor Driver  |$15.39 |
|                            |12V 6A Power Supply                                                |$19.99 |
|                            |24V 6A Power Supply                                                |$15.98 |
|                            |Arduino Mega                                                       |$20.99 |
|                            |                                                                   |       |
| Crucial Supplies           | Wires                                                             |$14.94 |
|                            |Bulk Pack of A4988 Stepper Motor Drivers                           |$9.89  |
|                            |DM542T STEPPERONLINE CNC Stepper Motor Driver                      |$28.99 |
|                            |DM542T STEPPERONLINE CNC Stepper Motor Driver                      |$28.99 |
|                            |18mm Snap-off Blades by HEIKIO                                     |$21.99 |
|                            |LED Illuminated Push Buttons                                       |$18.86 |
|                            |2pcs 2040 V Slot 600mm Aluminum Extrusion                          |$86.97 |
|                            |460PCS M4 Screws Metric Button Head                                |$17.99 |
|                            |Iverntech 20pcs Black Aluminum Corner Bracket                      |$18.99 |
|                            |                                                                   |       |
|Store-Bought                |Wooden Planks                                          |Stakeholder Expense|
|                            |Acrylic Top Cover                                      |Stakeholder Expense| 
|                 |               |       |
|Grand Total      |-------------  |$717.79|


      
  
  
   ### Software Dependencies
   
   In the context of software dependencies there is none for the traditional user. This apparatus requires no external downloads and is advertised as a complete stand-alone product.
   
However, when initially setting up the device one must upload the source code onto the microcontroller. The first step is to download the Arduino IDE, the appropriate link is found below:

Link: https://www.arduino.cc/en/software

At this stage the setup in terms of software has been completed. Please download the source code provided within this repository and upload to the microcontroller to begin using the apparatus.

### Replication

In the interest of successfully replicating the aforementioned progress a concise check list has been provided below.

 1. Watch the instructional videos provided below:
  
     Basics
     * Link: https://www.screencast.com/t/LzzzPJ7e0wt

     Assembly of Linear Rail Kits
     * Link: https://www.youtube.com/watch?v=tHn-gffborc&ab_channel=OpenBuilds

     Specifics of Analog Blade Holders
     * Link: https://youtu.be/Tv00ml124e8

     NYSID CREATE Final Video Submission
     * Link: https://www.youtube.com/watch?v=cMDn14l95jw&ab_channel=MazinChater
       
Now that sufficient context has been provided an individual would proceed by purchasing the displayed equipment articulated within the video format. A complete list of parts with purchasing links has been organized up above in the "System Parts" section.
    
  2. Purchase Relevant Equipment
  
Lastly, the final step of the procedure is to recreate the circuit connections displayed within the "Misc" folder of this repository. After this has been accomplished an indvidual may upload the source code to the microcontroller.
    
  3. Follow Circuit Schematic and Upload Source Code
 
It will be known whether or not successful replication has been achieved based on the performance of the apparatus in comparison to the ideal case displayed in the instructional video.

### NYSID CREATE Competition

![image](https://user-images.githubusercontent.com/87021326/235700298-19ffbc43-7bbb-415f-b7b2-ba365784ed9b.png)

1st place finish at the NYSID CREATE competition. 
Beyond the prize money, the work is having a real impact.  It has enabled the Center for Disability Services Mailing Center to hire additional workers with disabilities.
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
