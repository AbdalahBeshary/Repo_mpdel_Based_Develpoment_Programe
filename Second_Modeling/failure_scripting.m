new_system('sensor_failure','Model');
open_system('sensor_failure');

add_block('built-in/Subsystem','sensor_failure/APP_cohercent');
add_block('simulink/Logic and Bit Operations/Compare To Zero','sensor_failure/APP_cohercent/compare_s1_45');
add_block('simulink/Logic and Bit Operations/Compare To Zero','sensor_failure/APP_cohercent/compare_s1_05');
add_block('simulink/Logic and Bit Operations/Compare To Zero','sensor_failure/APP_cohercent/compare_s2_45');
add_block('simulink/Logic and Bit Operations/Compare To Zero','sensor_failure/APP_cohercent/compare_s2_05');
add_block('simulink/Logic and Bit Operations/Compare To Zero','sensor_failure/APP_cohercent/compare_five');
add_block('simulink/Math Operations/Add','sensor_failure/APP_cohercent/sum');
add_block('simulink/Quick Insert/Logic and Bit Operations/OR','sensor_failure/APP_cohercent/OR_s1');
add_block('simulink/Quick Insert/Logic and Bit Operations/OR','sensor_failure/APP_cohercent/OR_s2');

set_param('sensor_failure/APP_cohercent/compare_s1_05','Constant Value','0.5');
set_param('sensor_failure/APP_cohercent/compare_s1_45','Constant Value','4.5');



