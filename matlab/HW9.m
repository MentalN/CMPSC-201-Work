% // Nawaf Abdullah
% // CMPSC 201 SU 2016
% // Date 8-02-16
% // HW #9
% // MATLAB Analysis of Temp data with interpolation and regression.


time = 0:1:24;   %time in hours for each temperture value
temp = [66 65 65 65 64 64 64 65 67 70 73 77 80 82 84 85 86 85 84 82 79 77 75 72 69]; %temperture values


fprintf('Minimum temperture')  
min(temp)

fprintf('Maximum temperture')
max(temp)

fprintf('Mean temperture')
mean(temp)

fprintf('Median temperture')
median(temp)

fprintf('Standarf deviation of temperture')
std(temp)

fprintf('Hours when temperture values above mean')
find(temp>mean(temp))


disp('Time(hours)      Temperture(F)')      %raw data table
disp([time'        temp'])


figure, plot(time,temp,'-o') %raw data plot

figure, hist(temp)