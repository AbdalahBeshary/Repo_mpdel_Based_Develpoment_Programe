
%1-Numeric Types:
%Define and initialize a variable intVar with an integer value of your choice.
intVar=int8(22);
%Define and initialize a variable doubleVar with a double-precision floating-point value.
doubleVar=55.336548;
%Display the data type of both intVar and doubleVar using the class function.
disp('intVar');
disp(class(intVar));
disp('doubleVar');
disp(class(doubleVar));
%%

%2-Creating Numeric Arrays:

%Create a row vector evenNumbers containing the first 5 even numbers (2, 4,6, 8, 10).
evenVector=[2:2:10]; %another way linspace(2,10,5)

%Create a column vector primeNumbers containing the first 5 prime numbers (2, 3, 5, 7, 11).
primeVector=primes(11);

%Display both evenNumbers and primeNumbers.
disp('even number =')
disp(evenVector)
disp('prime number =')
disp(primeVector)

%%

%3-Specialized Matrix Functions:

%Create a 3x3 identity matrix identityMatrix using a specialized matrix function.
identityMatrix=eye(3,3);
%Create a 2x2 magic square magicSquare using another specialized matrix function.
magicSquare=ones(2,2);
%Display both identityMatrix and magicSquare.
disp('identityMatrix =')
disp(identityMatrix)
disp('magicSquare =')
disp(magicSquare)

%%

%4-Matrix Concatenation

%Concatenate the evenNumbers vector horizontally with the primeNumbers with
%display

combinedVector=horzcat(evenVector,primeVector);
disp('combinedVector =')
disp(combinedVector)

%combinedMatrix by vertically concatenating identityMatrix and magicSquare.
%with display

if(length(identityMatrix)>length(magicSquare)) %check which number larger in num
    
    MAX=length(identityMatrix); %know length of large col number
    magicSquare(end+1:MAX,MAX)=0; % add remain matrix by zero to make it 3*3
else
    MAX=length(magicSquare);
   identityMatrix(end+1:MAX,MAX)=0;
    
end
    combinedVector=vertcat(identityMatrix,magicSquare); %combined between two matrix

disp('combinedVector =')
disp(combinedVector)

