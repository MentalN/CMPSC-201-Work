% // Nawaf Abdullah
% // CMPSC 201 SU 2016
% // Date 8-02-16
% // HW #9
% // MATLAB Analysis of Temp data with interpolation and regression.


time = 0:1:24;   %time in hours for each temperature value
temp = [66 65 65 65 64 64 64 65 67 70 73 77 80 82 84 85 86 85 84 82 79 77 75 72 69]; %temperture values

plot(time, temp, '-o')
newtemp=interp1(time, temp, 12.5, 'linear') %Interpolating new point at 12.5 (12:30) hour
plot(time, temp, '-o', 12.5, newtemp, 'ro') %Adding new point to plot