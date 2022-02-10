# Numerical Method

## Methodology
1)Backward Euler’s Method:
The Backward Euler’s method is an implicit one which,contrary to the explicit method in thesolution by solving a differential equation involving the current state of the system and later one.

2)Electrical and Mechanical Equations of Universal Motor.

3)Universal Motor Parameters for AC Input adn DC Input and Theoretical Calculations.


# Program flow 
Step 1: Start

Step 2: Include libraries stdio.h and math.h

Step 3:Declare files
       Use a file structure and define file pointers
       open the file.
       
Step 4: Declaring all constants and variables

Step 5: Initialising the I and w

Step 6: Initialising the loop.

Step7: Computing formulas
        𝜔𝑚+1 = (𝜔𝑚 +𝑇𝑒−𝑇𝐿−𝐵𝜔𝑚+1𝐽 )𝛿𝑡
         𝑖𝑎𝑖+1 = 𝑖𝑎 +(𝑉𝑡 − 𝑘𝑎𝜔 − 𝑖𝑎𝑖+1(𝑟𝑓 + 𝑟𝑎)(Laa + 𝐿𝑓𝑓)
         𝑁[𝑖] = (𝐸𝑏[𝑖]𝑘∗𝑛∗𝑖)/15
        𝑇𝑒 = 𝜑Ia/2
        
Step8: Printing values of current
       Printing values of Torque
       Printing values of speed
       
Step9: Copying the values of currents into file current.xls
       Copying the values of Torque into file torque.xls
       Copying the values of speed into file speed.xls
       
Step10: Closing all files declared.

Step11: End.

# Analysis
The speed of universal motorcan be controlled by tapped winding technique. The plotting results for both AC and DC are
shown for variation of speed with flux and speed with torque. We have compared the
efficiency for AC and DC supplies and we found DC is more efficient than AC.In the future
scope, to improve the efficiency of the universal motor better algorithm can be developed for
calculating iron losses with prominence on the rotor. In this paper, the high rotor field
frequency and due to the eddy currents weakening of the magnetic field is not considered
