clc;clear;
data = load('output.txt');

x = [data(:,1); data(:,2)];
b = bar(x, 0.4);

xtips = b(1).XEndPoints;
ytips = b(1).YEndPoints;
labels = string(b(1).YData);
text(xtips,ytips,labels,'HorizontalAlignment','center','VerticalAlignment','bottom');

xlabel('Result');
set(gca, 'xticklabel', {'Win','Lose'});
ylabel('Probability') ;
ylim([0, 1]);
title('Probability of the lottery system');
