% // Nawaf Abdullah
% // CMPSC 201 SU 2016
% // Date 8-02-16
% // HW #9
% // MATLAB Analysis of Temp data with interpolation and regression.

time = 0:1:24;   %time in hours for each temperture value
temp = [66 65 65 65 64 64 64 65 67 70 73 77 80 82 84 85 86 85 84 82 79 77 75 72 69]; %temperture values


%Linear fit
coef = polyfit(time, temp, 1);
newTemp = polyval(coef, time);
tempPredict = polyval(coef, 25)
figure, plot(time, temp, 'o',time, newTemp, 25, tempPredict, '*')


%Quadratic fit
coef = polyfit(time, temp, 2);
newTemp = polyval(coef, time);
tempPredict = polyval(coef, 25)
figure, plot (time, temp, 'o',time, newTemp, 25, tempPredict, '*')


%3rd Order fit
coef = polyfit(time, temp, 3);
newTemp = polyval(coef, time);
tempPredict = polyval(coef, 25)
figure, plot (time, temp, 'o',time, newTemp, 25, tempPredict, '*')