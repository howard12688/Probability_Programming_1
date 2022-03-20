clc;clear;
data = load('pmf.txt')
plot(data(:,1), data(:,2))
set(gca,'XTick',[1:1:24])
xlabel('How many egg(s) that hen lay in 4 hours')
ylabel('Probability')
title('Probability Mass Function Plotting')