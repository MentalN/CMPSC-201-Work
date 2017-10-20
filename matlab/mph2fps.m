% Nawaf Abdullah
% CMPSC 201 SU 2016
% Date 7-25-16
% HW 7C
% Miles per hour to feett per second table

vi = input('Enter start speed (miles per hour)')  %start mph input
vf = input('Enter end speed (miles per hour)')  %end  mph input
dv = input('Enter increment (miles per hour)')  %increment input

mph = vi:dv:vf;
fps = mph * 1.46667;   %1.46667 is the conversion factor from mph to fps


disp('mph           ft/sec')      % displaying conversion table
disp([mph'           fps'])       



%Test cases:


% mph           ft/sec
%          0         0
%    13.0000   19.0667
%    26.0000   38.1334
%    39.0000   57.2001
%    52.0000   76.2668
%    65.0000   95.3335
%    78.0000  114.4003


% mph           ft/sec
%   -50.0000  -73.3335
%   -39.0000  -57.2001
%   -28.0000  -41.0668
%   -17.0000  -24.9334
%    -6.0000   -8.8000
%     5.0000    7.3333
%    16.0000   23.4667
%    27.0000   39.6001
%    38.0000   55.7335
%    49.0000   71.8668


% mph           ft/sec
%    50.0000   73.3335
%    33.0000   48.4001
%    16.0000   23.4667
%    -1.0000   -1.4667
%   -18.0000  -26.4001
%   -35.0000  -51.3334
%   -52.0000  -76.2668
%   -69.0000 -101.2002
