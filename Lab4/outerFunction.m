
%Task 4: Nested Functions
%Create a main function called outerFunction.
%Inside outerFunction, define another function called innerFunction.
%innerFunction should take two inputs, add them, and return the result.
%Call innerFunction from outerFunction and display the result.

function  main=outerFunction

innerFunction(1,2)
    function add=innerFunction(number1,number2)

       add=number1+number2;
        
    end


end
