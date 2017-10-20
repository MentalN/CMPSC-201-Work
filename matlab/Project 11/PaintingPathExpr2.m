function driveForwardUntilWall2(serPort)
% Robot drives forward until it senses a wall using front sonar
SetDriveWheelsCreate(serPort, 0.5, 0.5);
while(1) % robot is moving during this loop
distance = ReadSonarMultiple(serPort, 1, 2, 3);
fprintf('sonar distance = %.1f\n', distance) % for debugging
[x y th] = OverheadLocalizationCreate(serPort);
plot(x, y, '*'); pause(0.1)
if distance < 1.0 % check to see if sonar d < 1m
break
end % end if statement
end % end while loopSetDriveWheelsCreate(serPort, 0, 0) % turn off motors
 
turnAngle(serPort, .3, -90)