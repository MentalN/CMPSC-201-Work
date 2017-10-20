function driveForwardUntilWall2(serPort)
% Robot drives forward until it senses a wall using front sonar
SetDriveWheelsCreate(serPort, 0.5, 0.5);
while(1) % robot is moving during this loop
distance2 = ReadSonarMultiple(serPort, 2);
distance3 = ReadSonarMultiple(serPort, 3);
fprintf('sonar distance2 = %.1f\n', distance2)
fprintf('sonar distance3 = %.1f\n', distance3)
[x y th] = OverheadLocalizationCreate(serPort);
plot(x, y, '*'); pause(0.1)
if distance2 < 1.0 % check to see if sonar d < 1m
break
end % end if statement
end % end while loopSetDriveWheelsCreate(serPort, 0, 0) % turn off motors
 
turnAngle(serPort, .3, -90)
 
