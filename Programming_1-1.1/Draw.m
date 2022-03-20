clc;clear;
data = load('output.txt')
plot(1:2, data(:,2))
xlabel('Win or not')
ylabel('Time(s)')
title('123')