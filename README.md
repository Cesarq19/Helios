# Project Submission

### HELIOS
Team Name: Solar Coders
App Name: Helios

### High-Level Project Summary
We developed an interactive movil app to help the general public to understand the information about the solar wind and its effects on the Earth, we provide them with visual and sound experience of how space would be. In addition we implemented a prototype linked to the app that will help the user to know in real time how much our geomagnetic field in the Earth is affected by the energy of the sun. With our app and device we look forward to attract the interest of many people into the space world.

### Link to Final Project

**GitHub**
https://github.com/Cesarq19/Helios.git

**Simulation Prototype**
https://wokwi.com/projects/344391114323657298

**Figma**
https://www.figma.com/proto/2kwf3x6XR7zQLPdFXZUhxd/HeliusCKN?node-id=3%3A6&scaling=scale-down&page-id=3%3A4&starting-point-node-id=3%3A6

### Link to Project "Demo"

    **YouTube**
    https://www.youtube.com/watch?v=0tmyp7iEcHo


### Detailed Project Description

- **What exactly does it do?**

Our project consists of an interactive app that allows users to know important data about the sun and how it influences space and terrestrial weather with the guidance of a fictional character who will act as a guide and provide short descriptions to arouse the interest of users. as well as giving basic indications so that the user correctly understands each of the data, which were obtained from the NASA database about the solar wind and the index of magnetic disturbance exerted by the sun when geomagnetic storms occur. While as a complement, the geomagnetic disturbance index data was linked and represented as a traffic light so that the user can recognize in real time how these events affect telecommunications and services that are outside the Earth's orbit.
    
- **How does it work?**

It explains the information that is collected about the solar wind and its effects with  senses such as view and sounds throught the analysis  of this data with purpose of giving  interesting facts about this data ,reprensenting the temperature  of the solar wind as a sound , also being able to see the intensity of the interference of solar explosion on the earth throught a visual experienc with a rgb bulb using a wifi module sp32.
   
    
- **What benefits does it have**

Broadcasting the science about the space to the population that dont have a lot of knowledge about it  and being able to understand many phenomenas.

    
- **What do you hope to achieve**

Motivate the population to know about the  interesting that can be the  universe and the diferents ways in wich we can understand it and analize it , also the app helps us to understand in a interesting and funnt way the marverlous that ours universe can be without the worries of understanding complexity of the data .
   
    
- **What tools, coding languages, hardware, or software did you use to develop your project?**

We used diverse tools as coding language we use python  and libraries such as matplotlib, pandas , numpy and pygame to obtain, treat, filter and normalize the data for  the process of sonification, we took the temperature on real time and turn it into music. Also, we used c++ to program an Esp32 to obtain data about the kp index in real time and with this show through a rgb led how much the sun is affecting the Earth's magnetic field.
For the design of our application we used figma website to do the layouts and canva to get all character designs.    

---

### Space Agency Data

Thanks to Helmholtz Centre Potsdam (German Research Centre for Geosciences) we use realtime Kp indexes and build a prototype with the idea to be a physical indicator of the intensity of perturbances that affects the magnetic field on Earth. For this, we used an online simulator called Wokwi to work with the ESP32 microcontroller, we connected it to the internet and recollect the information about the Kp, which is updated every 3 hours and so our rgb led that visually (using semaphore parameters) helps the user know how much our magnectic field is affected by the sun and provide the experience to be part of the Nasa team from their homes.
Additionally, based on a project about turning the impacts of meteors with the moon  into music done by Dr. Matt Russo, astrophysicist, musician, and NASA sonification specialist we decided to turn the temperature of the solar wind into music using the sonification technique , first we collect the data on real time from the solar parker using web scrapping and we treat ,filter,normalize and scale the data using pandas and numpy, after this we mapped the data with musical tones to reproduce a music based on the temperature of the solar wind measured by the solar parker probe.
</aside>


https://services.swpc.noaa.gov/products/solar-wind/ (Use for sonification)

https://www-app3.gfz-potsdam.de/kp_index/Kp_ap_Ap_SN_F107_nowcast.txt (Use to get Kp index)

---

### Hackathon Journey

At the beginning we were uncertain about which project we should choose because it was our first time to join such a huge event. Through out the challenge we faced some difficulties like no internet conection during the first day but above that we complete succesfully what we proposed as the solution to the challenge. We learnt the importance of group work and to respect each others ideas. In addtion, we get to know more about what Nasa do by manipulating and understand their datasets.    
    
This challenge in particular gather our atention, before choosing it we learnt a little bit about Parker Solar Probe, how it works an its importance. We found this really interesting that we wanted to share what we just have learnt to other people as well.
    
We would like to specially thank our local mentors, who guided us and gave us advices so we could launch our proposal succesfully and the ones in Discord, who provided us with data.    

---

### References

https://www.zamzar.com/convert/midi-to-mp3/

https://github.com/SYSTEMSounds/sonification-tutorials/blob/main/data2midi-part1.ipynb

**SoundCloud Nasa**
https://soundcloud.com/nasa/sets/solar-system-beyond-sounds

**Sun’sImages**
https://sdo.gsfc.nasa.gov/data/

**Animations**
http://parkersolarprobe.jhuapl.edu/Multimedia/Animations.php#Animations
