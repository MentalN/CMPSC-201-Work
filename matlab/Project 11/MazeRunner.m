function MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5)%Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4) %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop when wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
   plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end


if dRear > dRight && dRear > dLeft
    turnAngle(serPort, .2, 180);
elseif dRight > dRear && dRight > dLeft
    turnAngle(serPort, .2, -90);
elseif dLeft > dRear && dLeft > dRight
    turnAngle(serPort, .2, 90);
elseif dLeft == dRear 
    turnAngle(serPort, .2, 90);
elseif dRight == dRear
    turnAngle(serPort, .2, -90);
else
    turnAngle(serPort, .2, 90)
end


MazeRunner(serPort)
SetDriveWheelsCreate(serPort, 0.5, 0.5) %Robot drives with a speed of 0.5m/s
while (1)
    dFront = ReadSonarMultiple(serPort, 2) %Front Sensor
    dRear = ReadSonarMultiple(serPort, 4)  %Rear Sensor
    dRight = ReadSonarMultiple(serPort, 1) %Right Sensor
    dLeft = ReadSonarMultiple(serPort, 3)  %Left Sensor
    [x y th] = OverheadLocalizationCreate(serPort);
    plot(x, y, '*'); pause(0.1) %Paint path
    if   dFront < 1.0 %Stop wjhen wall is within 1 meter
        break
    end
end