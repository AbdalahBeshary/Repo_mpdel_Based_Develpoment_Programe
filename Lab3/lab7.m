%Task 1: While Loop

%Write a MATLAB script that uses a while loop to print even numbers from 2 to 20.


num=0;
while(num<=20)
    
 if(rem(num,2)==0)
     fprintf('even number is :%d\n',num);
 end
num=num+1;
end

