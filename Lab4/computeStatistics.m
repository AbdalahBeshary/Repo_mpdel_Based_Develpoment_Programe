%Task 3: Function with Multiple Outputs


%Create a function named computeStatistics that takes a vector of numbers as input.
%This function should return both the mean and the standard deviation of the input vector.
%Call the function with sample data and display the results.

function [mean1,standard_devation]=computeStatistics(varargin)

mean1=mean(varargin{1});
 standard_devation=std(varargin{1}) ;
disp('mean =')
disp(mean1)
disp('standard_devation =')
disp(standard_devation)
end


