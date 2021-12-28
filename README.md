#  Jubeat-3D-printed-cab-edition-
A 300 x 300 Jubeat con 
Hi 
This is gonna be a quick and summarized version and im typing this while sleep deprived so feel free to ask me questions at
 Discord : MiMi#4182
![thimbnail](https://user-images.githubusercontent.com/92096985/147399217-bb2e9975-b534-4a86-bf4f-165d7f2ae715.jpeg)


Things you'll need
a printer with 300x300 printbed 
,x64 microswitches(Like DM1-01P-30-3)
,arduino pro micro
,x50  M3x8x6
,x128 M2x10x4
,24"/23" monitor. 
and soldering set with thin wires (maybe awg20 wires)


-Intro
This was a project made to make Jubeat cons more accessible, I love the game a lot and I want to share my love for it by helping others achieve their cab goals.
The project was mostly copied from a different project using mainly acrylic cuts and hardware, but made cheaper by using 3D printing and lesser hardware in total while only needing acrylic buttons.

-3D PRINTED PARTS
there are 3 printed parts needed(no support needed)
Front("jubeat Front frame v4 CUT.stl" 1 wall),
Core("Jubeat Core 9587coreframe_v03_fixed.stl" 3 walls 20% infill) & 
Base("jubeat Base wirelog cut.stl" 1 wall).)

So the parts are sandwich into the following order top down 
Front, Core and then Base. 
The Core holds all the switches and each button will need a switch. 
these switches are the ones used for most mouses(Use the ones with the 2m mounting holes only and you'll need 64 of them)

![Screenshot_20210910-174655_Instagram](https://user-images.githubusercontent.com/92096985/146663522-45345d05-0789-4c17-a067-c4f630804e9c.jpg)

-This project is based on this other project made from acrylic but with no hex pins
and only needing M2x10x4(x128 FRICTION FITTED INTO THE CORE FRAME) and M3x8x6(x50 on the front and base parts)

-BODY
Jubeat Core 9587coreframe_v03_fixed.stl requires modification(cut along the Z axis to reduce height of the Core) 
for the switches you use based on the switches(Leaver or none) cuz travel distance of the switches differ a lot.
The travel distance of each button would also require some changes to buttons(more on that in the button section).
Make sure you test print the core first, insert a set of switches and a button and test the travel if you are particular about distance.
If not cut the core about this much using Slic3r, This travel length should be perfect for almost any configuration.

![image](https://user-images.githubusercontent.com/92096985/147397933-82bbf0a6-292d-4b16-807b-fb70c4afa6a8.png)


-BOARD AND CONNECTIVITY
Also this project runs on arduino Leonardo. codes are for that board at least. 
the code takes Inputs from all input points so just connect the buttons there and bind accordingly.
The arduino file makes the controller into a 4x4 HID Game controller(joypad.ino).


-BUTTONS & SWITCHES
There a are many switches out there, Make sure the ones you are planning to use have a M2 size holes.
I used DM1-01P-30-3 and some Huaon mouse switches for my leaver and non-leaver builds.
Depending on your preference of switches, you'll have to adjust these parts(CORE and TOP PART of the button)

![image](https://user-images.githubusercontent.com/92096985/147398102-d61e58db-59e5-4688-a090-cfcaa898eda1.png)


Buttons are laser cutted so refer to the picture for more information. There is also a laser cut file.
The construction of the buttons contain 5.85cm square x 4mm acrylic (clear colorless) which makes up for the TOP PART.
you'll have to glue it to the PDF stated "Jubeat button" x 2mm acrylic (clear colorless) which activates the switches. BOTTOM PART.
I HIGHLY RECOMMEND FUSING WITH GLASS GLUE(THE ONES THEY USE FOR TV SCREENS) OR RESIN GLUE.Anything that cures with UV would be good.
You can change the height of each button by stacking acrylic 5.85cm square x Xmm OR ordering a thicker square. This can help with the travel distance compensation.
Gaps will be present between the frame and the buttons if your button travel distance is long. Make sure you get a thickness of 6mm for your TOP PART acrylic Square.

![Jubeat button](https://user-images.githubusercontent.com/92096985/146663272-ae2201dd-17d7-4d54-856c-5219c3eac1ad.PNG)


-ASSEMBLY 
STEP 1
Insert all 64 switches into the "Core" first using th 2M screws.

STEP 2
Solder and arrange 4 switches to one button based on the button's shape(refer to pic below) to the switches.(Each button needs 4 switches)
Connect the 4 switches to one Main Wire out, and that wire would be the input for that button. 

![button](https://user-images.githubusercontent.com/92096985/146663995-340e70f1-2794-4b04-8bbb-99fcbba42398.png)
Repeat this 15 more times to and connect each button's Main Wire to the board.

![beans](https://user-images.githubusercontent.com/92096985/146663830-876db9bd-dfed-4791-be73-de85ad02d6a6.jpg)

STEP 3
Manage the wires and align them directly under the frame, you're gonna have to finesse the wires and tape them to the frame so they stay under the frame. 
Feed the Main Wires out by rows and arrange them by "LANE", having two buttons in a Lane fead out to the direction they are closest too. 
![illustration soldering](https://user-images.githubusercontent.com/92096985/147398442-bcb2d3c5-269a-4be6-897e-b41c507542bb.png)

STEP 4
Once the wires are neatly arranged, Attach the "jubeat Base wirelog cut .stl" Part to secure the wires under the frame. Use x25(M3x8x6) for mounting.

STEP 5
Construct the buttons.
Sand down the edges of the TOP PART acrylic button and create a smooth edge for charts with "sliding" involved(DO THIS ONLY ON ONE SIDE).
Glue the TOP PART acrylic to BOTTOM PART acrylic button parts with the recommended glue, make sure to remove the acrylic protective film on the contact point where the buttons touch.
Once the glue dries you can place them onto the "Core" assembly.

STEP 6
UPLOADING CODE AND TESTING.
Upload joypad.ino to the Pro micro board. 
Run "set up USB Game Controller" program(pic below) and check if Arduino Leonardo is present, Click on Properties and press every individual buttons.
Check if all buttons are working and Active.

![image](https://user-images.githubusercontent.com/92096985/147398568-d3e2b02f-8d2e-48b6-ba02-2cd2083033a7.png)
 
STEP 7
MOUNTING.
Once your controller is working, attach "jubeat Front frame v4 CUT .stl" with all 16 buttons in-between.
If your buttons are getting stuck between the Front Frame, try using "jubeat Front thinned with logos .stl".
Mounting onto a monitor is simple, you can use foam double sided tape to directly mount onto a screen. There are a lot of ways to mount, different monitors require different methods, you might need to figure out how to do this yourself.

STEP 8
Service>
I/O INPUT CHECK>
SCREEN CHECK> 
GAME SETTINGS> SCREEN TYPE A/B/AUTO>
-ALSO-
You should be left with 2 more extra input spaces on the arduino pro micro so feelfree to add some keyboard switches.


feel free to contact me about this project, I personally enjoy the game a lot and would like you to build this as well
Thanks for reading ^^

Old videos from the other project.


Summary of the construction: https://youtu.be/bemd8mn8H4E

OG vid : https://www.youtube.com/watch?v=Gkj1iS0f2ws
 




