## **SEWING-ROBOT // HARDWARE I**
A sewing robotic effector to explore a dry and flexible connection of rigid materials
Explore a dry and flexible connection of rigid materials. A joint that allows to connect large parts by moving the robotic arm and not the material.
The hypothesis is to work on a joint that allows to connect large parts by moving the robotic arm and not the material. The goal to achieve is to explore a new field of connections and joints with traditional systems.

### **Concept**
According to the traditional techniques for sewing, the machine is stable and the material is moving. In our case the process is inverted, as the machine is moving freely by the robotic arm and the material is held by a support structure.

|               1 |               2 |              3 |               4 |
| -------------- | -------------- | ------------- | -------------- |
| <img src="doc/SMR_Sewing_singer_1st_patent.jpeg" width="300"> | <img src="doc/SMR_Sewing_US3745950-drawings-page-2b.png" width="300"> |  ![example](doc/SMR_Sewing%20gibbs_rotating_%20hook.jpg) | ![example](doc/SMR_Gutenberg%20Position_of_the_hands.jpg) |

**1. First sewing machine, patented 1851**
Wood engraving image of Isaac Merrit Singer's Universal Images Group / Getty Images. At Latson, Jennifer. The Invention That Spawned a Fashion Revolution. Time Magazine.  August 12 2015 https://time.com/3985665/sewing-machine-invented/

**2. Portable electric sewing machine, Patent US3745950A United States**
https://patents.google.com/patent/US3745950A/

**3. Gibbs' rotating hook chain stitch mechanism**
http://ismacs.net/willcoxandgibbs/james-gibbs-other-chain-stitch-sewing-machine.html

**4. Position of the hands and explanation of chain stitch**
https://www.gutenberg.org/files/20776/20776-h/chapter_9.html


### **Portable Sewing Machine**
During the manual tests with the machine in the original state, we defined the parts that need to be modified. Since the machine will be controlled by the arduino we changed the on/off button with a digital signal from the arduino.
![example](doc/SM_portable_sewing_machine_parts.jpg)

### **BOM**
| **Part #** | **Part Name** | **Quantity** | **Description** |
| ------------- | ------------- | ------------- | ------------- |
| 1  | Portable Sewing Machine  | 1  |  6 volt portable sewing machine  |
| 2  | Arduino Board  | 1  | Arduino Uno  |
| 3  | Breadboard  | 1  | Electronic circuit builderr  |
| 4  | Mosfet Module  | 1  | Arduino Metal Oxide Semiconductor Field Effect Transistor  |
| 5  | Optocoupler  | 1  | Electronic component to transfer signals from ABB to Arduino board   |
| 6  | Power Supply  | 1  | 220 volt to 6 volt transformer  |
| 7  | Textile  | 1  | Test materials  |
| 8  | Textile Support | 1  | MDF board to laser cut  |

### **Schematic and Wire prototype**
|               |                |                |
| ------------- | -------------- | -------------- |
| <img src="doc/SM_Work_cell.jpg" width="300">  | <img src="doc/SM_Firmware.jpg" width="300">  | <img src="doc/SM_flow-chart-hardware.jpg" width="300"> |

### **Firmware sketch**
* [Arduino code](https://github.com/MRAC-IAAC/SEWING-ROBOT/src/Sewing01.ino)

|               |                |                |       
| ------------- | -------------- | -------------- | 
| <img src="doc/SM01.JPG" width="300"> | <img src="doc/SM02.jpg" width="300">  |  <img src="doc/SM03.jpg" height="200">  |

[Workflow video](https://youtu.be/R_Z0p0leJvI)

**SEWING-ROBOT // HARDWARE I** is a project of **IAAC, Institute for Advanced Architecture of Catalonia**, developed at the Master in Robotics and Advanced Construction in 2020/2021 by:

**Students:** Alberto Browne, Juan E. Ojeda, Orestis Pavlidis

**Faculty:** Angel Muñoz

**Faculty Assistant:** Matthew Gordon
