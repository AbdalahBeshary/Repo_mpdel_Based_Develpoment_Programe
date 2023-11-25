new_system('new_pedal_script_2');
set_param('new_pedal_script_2', 'PreLoadFcn', "data");
set_param('new_pedal_script_2', 'SaveFormat', 'Array');
set_param('new_pedal_script_2', 'LoadExternalInput', 'on');

add_block('built-in/Subsystem','new_pedal_script_2/Pedal');
add_block('built-in/Gain','new_pedal_script_2/Pedal/Slope');
add_block('simulink/Sources/In1','new_pedal_script_2/Pedal/In1');
add_block('simulink/Sinks/Out1','new_pedal_script_2/Pedal/Out1');
add_block('simulink/Sources/In1','new_pedal_script_2/Accelerating_pedal_poistion');
add_block('simulink/Sinks/Out1','new_pedal_script_2/potentiomter_voltage');
add_block('simulink/Math Operations/Add','new_pedal_script_2/Pedal/sum');
add_block('simulink/Sources/Constant','new_pedal_script_2/Pedal/Offset');


set_param('new_pedal_script_2/Pedal/Slope','Gain','-4');
set_param('new_pedal_script_2/Pedal/Offset','Value','4.5');

add_line('new_pedal_script_2/Pedal','In1/1','Slope/1');
add_line('new_pedal_script_2/Pedal','Slope/1','sum/1');
add_line('new_pedal_script_2/Pedal','Offset/1','sum/2');
add_line('new_pedal_script_2/Pedal','sum/1','Out1/1');
add_line('new_pedal_script_2','Accelerating_pedal_poistion/1','Pedal/1');
add_line('new_pedal_script_2','Pedal/1','potentiomter_voltage/1');
set_param('new_pedal_script_2', 'StopFcn', 'drawing');
save_system('new_pedal_script_2');
open_system('new_pedal_script_2');
close_system('new_pedal_script_2');
open_system('new_pedal_script_2');

out=sim('new_pedal_script_2');







