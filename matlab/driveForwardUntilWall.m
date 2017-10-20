%  Nawaf Abdullah
%  CMPSC 201 SU 2016
%  Date 8-1-16
%  HW #8B
%  MATLAB Robot Simulation



function driveForwardUntilWall(serPort)
% Robot drives forward until it bumps a wall.
% serPort is the serial port number (for controlling the actual robot).

[BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...            %% Move forward if there are no obstacles.
    BumpsWheelDropsSensorsRoomba(serPort);
while ~BumpRight && ~BumpLeft && ~BumpFront 
    SetDriveWheelsCreate(serPort, .5,.5)
    pause(.1)
    [BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...
        BumpsWheelDropsSensorsRoomba(serPort);
end
StopCreate(serPort)
Signal()


turnAngle(serPort, .3, 90)   %% Turn 90 Degrees counterclockwise after bumbing into a wall.


[BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...            %% Move forward if there are no obstacles.
    BumpsWheelDropsSensorsRoomba(serPort);
while ~BumpRight && ~BumpLeft && ~BumpFront 
    SetDriveWheelsCreate(serPort, .5,.5)
    pause(.1)
    [BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...
        BumpsWheelDropsSensorsRoomba(serPort);
end
StopCreate(serPort)
Signal()


turnAngle(serPort, .3, -90)  %% Turn 90 Degrees clockwise after bumbing into a wall.


[BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...         %% Move forward if there are no obstacles.
    BumpsWheelDropsSensorsRoomba(serPort);
while ~BumpRight && ~BumpLeft && ~BumpFront 
    SetDriveWheelsCreate(serPort, .5,.5)
    pause(.1)
    [BumpRight,BumpLeft,WheDropRight,WheDropLeft,WheDropCaster,BumpFront] = ...
        BumpsWheelDropsSensorsRoomba(serPort);
end
StopCreate(serPort)
Signal()


%%%%%%%%%%%%%%%%%%%%%%%%
function StopCreate(serPort)
% Stop the robot
% serPort is the serial port number (for controlling the actual robot).
SetDriveWheelsCreate(serPort, 0,0)

%%%%%%%%%%%%%%%%%%%%%%%%
function Signal()
% Make signal sound (4 beeps)
n= 4;
for k=1:4
    beep
    pause(.2)
end
