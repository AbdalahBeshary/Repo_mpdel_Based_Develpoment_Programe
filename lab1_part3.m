originalMatrix =randi(2,2);
repeatedMatrix=vertcat(horzcat(originalMatrix,originalMatrix),horzcat(originalMatrix,originalMatrix));
%other way
repeatedMatrix=repmat(repeatedMatrix,1,1);
disp(repeatedMatrix);