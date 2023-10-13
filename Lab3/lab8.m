%%Create a script that calculates the factorial of a given number using a while loop. Prompt the user for input.

number=input('enter the factorial number \n'); %number that get factorial from it by user
n=number;  % save the value in another variable that came from user
fac=1; %initial value of fac
while(number>=1)
    
   fac=fac*number;
   number=number-1;
end

fprintf('factoral of %d is %d\n',n,fac);