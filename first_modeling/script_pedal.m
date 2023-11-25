new_system('new_pedal_script');
set_param('new_pedal_script', 'Input', '{t,u}');
set_param('new_pedal_script', 'PreLoadFcn', 'data');

open_system('new_pedal_script');


add_block('built-in/Subsystem','new_pedal_script/Pedal');
add_block('built-in/Gain','new_pedal_script/Pedal/Slope');
add_block('simulink/Sources/In1','new_pedal_script/Pedal/In1');
add_block('simulink/Sinks/Out1','new_pedal_script/Pedal/Out1');
add_block('simulink/Sources/In1','new_pedal_script/Accelerating_pedal_poistion');
add_block('simulink/Sinks/Out1','new_pedal_script/potentiomter_voltage');
add_block('simulink/Math Operations/Add','new_pedal_script/Pedal/sum');
add_block('simulink/Sources/Constant','new_pedal_script/Pedal/Offset');


set_param('new_pedal_script/Pedal/Slope','Gain','4');
set_param('new_pedal_script/Pedal/Offset','Value','0.5');

add_line('new_pedal_script/Pedal','In1/1','Slope/1');
add_line('new_pedal_script/Pedal','Slope/1','sum/1');
add_line('new_pedal_script/Pedal','Offset/1','sum/2');
add_line('new_pedal_script/Pedal','sum/1','Out1/1');
add_line('new_pedal_script','Accelerating_pedal_poistion/1','Pedal/1');
add_line('new_pedal_script','Pedal/1','potentiomter_voltage/1');
out=sim('new_pedal_script');
set_param('new_pedal_script', 'StopFcn', 'drawing');
save_system('new_pedal_script');






