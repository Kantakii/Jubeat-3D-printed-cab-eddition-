# UNDER CONSTRUCTION Jubeat-3D-printed-cab-edition-
A 300 x 300 Jubeat con
Hi 
This is gonna be a quick and summarized version and im typing this while sleep deprived so feel free to ask me questions at
 Discord : MiMi#4182


Things you'll need
a printer with 300x300 printbed 
,x64 microswitches(refer to the pic below)
,arduino pro micro
,x50  M3x8x6
,x128 M2x10x4
and soldering set with thin wires (maybe awg20 wires)
![7e83328b-1606-455e-9dd7-ba577b0d3b85](https://user-images.githubusercontent.com/92096985/146870197-67868bca-1c97-4c53-ba8f-9d1479ccd0af.jpg)


-Intro
This was a project made to make Jubeat cons more accessible, I love the game a lot and I want to share my love for it by helping others achieve their cab goals.
The project was mostly copied from a different project using mainly acrylic cuts and hardware, but made cheaper by using 3D printing and lesser hardware in total while only needing acrylic buttons.

-CONSTRUCTION
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

-BOARD AND CONNECTIVITY
Also this project runs on arduino Leonardo. codes are for that board at least. 
the code takes Inputs from all input points so just connect the buttons there and bind accordingly.
The arduino file makes the controller into a 4x4 HID Game controller(joypad.ino).


-BUTTONS
Buttons are laser cutted so refer to the picture for more information. There is also a laser cut file.
The construction of the buttons contain 5.85cm square x 4mm acrylic (clear colorless) which makes up for the top part 
you'll have to glue it to the PDF stated "Jubeat button" x 2mm acrylic (clear colorless) which activates the switches 
I HIGHLY RECOMMEND FUSING WITH GLASS GLUE(THE ONES THEY USE FOR TV SCREENS) OR RESIN GLUE.Anything that cures with UV would be good
![Jubeat button](https://user-images.githubusercontent.com/92096985/146663272-ae2201dd-17d7-4d54-856c-5219c3eac1ad.PNG)


-ASSEMBLY 
Insert all 64 switches into the Core first using th 2M screws.
Solder and arrange 4 switches to one button based on the button's shape(refer to pic below) to the switches.(Each button needs 4 switches)
Connect the 4 switches to one Main Wire out, and that wire would be the input for that button. 
![button](https://user-images.githubusercontent.com/92096985/146663995-340e70f1-2794-4b04-8bbb-99fcbba42398.png)
Repeat this 15 more times to and connect each button's Main Wire to the board.
![beans](https://user-images.githubusercontent.com/92096985/146663830-876db9bd-dfed-4791-be73-de85ad02d6a6.jpg)


You should be left with 2 more extra input spaces on the arduino pro micro so feelfree to add some keyboard switches.

anyways feel free to contact me about this project, I personally enjoy the game a lot and would like you to build this as well
Thanks for reading ^^

Old videos from the other project.


Summary of the construction: https://youtu.be/bemd8mn8H4E

OG vid : https://www.youtube.com/watch?v=Gkj1iS0f2ws
 




