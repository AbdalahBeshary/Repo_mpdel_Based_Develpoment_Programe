%Write a MATLAffB script to calculate the cost of a trip based on the mode of transportation

%struct of way of trasnportation
transportation.car=1;
transportation.airplane=2;
transportation.train=3;
transportation.bus=4;

cost.car=10;            %car cost per mile
cost.airplane=100;            %car cost per mile
cost.train=5;            %car cost per mile
cost.bus=7;            %car cost per mile

trans=input('enter the way of travel\n');  %type of machine used
distance=input('how many miles you wanna go\n'); %distance in mile that you wanna cross
%switch between way used for transportation
switch(trans)
    case 1
        fprintf('cost of car per mile is :%d dollar\n',cost.car)
        fprintf('the total cost :%d dollar\n',cost.car*distance)

case 2
        fprintf('cost of airplane per mile is :%d dollar\n',cost.airplane)
        fprintf('the total cost :%d dollar\n',cost.airplane*distance)
        
case 3
        fprintf('cost of train per mile is :%d dollar\n',cost.train)
        fprintf('the total cost :%d dollar\n',cost.train*distance)
case 4
        fprintf('cost of bus per mile is :%d dollar\n',cost.bus)
        fprintf('the total cost :%d dollar\n',cost.bus8*distance)
        
        
    otherwise
        disp('not valid\n')
end




