%  Nawaf Abdullah
%  CMPSC 201 SU 2016
%  Date 8-1-16
%  HW #8B
%  MATLAB Robot Simulation


function squarePath(serPort)
% Robot moves along a path that forms a square
% serPort is the serial port number (for controlling the actual robot).

%%%% DO NOT MODIFY CODE ABOVE %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

travelDist(serPort, .3, 6)  %% Travel at 0.3m/s for 6 meters.


turnAngle(serPort, .2, 90)  %% Turn 90 degrees counterclockwise.


travelDist(serPort, .3, 5)  %% Travel at 0.3m/s for 5 meters.
                            

turnAngle(serPort, .2, -90) %% Turn 90 degrees clockwise.


travelDist(serPort, .3, 5)  %% Travel at 0.3m/s for 5 meters.






