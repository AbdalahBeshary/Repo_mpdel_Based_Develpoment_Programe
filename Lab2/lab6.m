%6. Basic Plotting:

%Generate data for a simple plot (e.g., a sine wave).
x=0:360;
sinewave=sind(x);
%Plot the data with proper labels and a legend.
plot(x,sinewave)
xlabel('x :degree')
ylabel('sinewave:value')
legend('x_axis')
title('sine wave graph')