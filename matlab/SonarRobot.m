% Nawaf Abdullah
% CMPSC 201 SU 2016
% Date 8-2-16
% HW #10
% Robot Simulation Using Sonar


function driveForwardUntilWall2(serPort)
% Robot drives forward until it senses a wall using front sonar
SetDriveWheelsCreate(serPort, 0.5, 0.5);
while(1) % robot is moving during this loop
distance = ReadSonarMultiple(serPort, 2);
fprintf('sonar distance = %.1f\n', distance) % for debugging
[x y th] = OverheadLocalizationCreate(serPort);
plot(x, y, 'o'); pause(0.1)
if distance < 1.0 % check to see if sonar d < 1m
break
end % end if statement
end % end while loopSetDriveWheelsCreate(serPort, 0, 0) % turn off motors

turnAngle(serPort, .3, -90)

SetDriveWheelsCreate(serPort, 0.5, 0.5);
while(1) % robot is moving during this loop
distance = ReadSonarMultiple(serPort, 2);
fprintf('sonar distance = %.1f\n', distance) % for debugging
[x y th] = OverheadLocalizationCreate(serPort);
plot(x, y, 'o'); pause(0.1)
if distance < 1.0 % check to see if sonar d < 1m
break
end % end if statement
end % end while loopSetDriveWheelsCreate(serPort, 0, 0) % turn off motors

turnAngle(serPort, .3, 90)


SetDriveWheelsCreate(serPort, 0.5, 0.5);
while(1) % robot is moving during this loop
distance = ReadSonarMultiple(serPort, 2);
fprintf('sonar distance = %.1f\n', distance) % for debugging
[x y th] = OverheadLocalizationCreate(serPort);
plot(x, y, 'o'); pause(0.1)
if distance < 1.0 % check to see if sonar d < 1m
break
end % end if statement
end %while loopSetDriveWheelsCreate(serPort, 0, 0) % turn off motors

SetDriveWheelsCreate(serPort, 0,0) % turn off motors