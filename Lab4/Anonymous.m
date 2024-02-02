%Task 6: Anonymous Functions


%Create an anonymous function that calculates the area of a triangle. The function should take base and height as inputs.

Area_oftriangle=@(b,h)b.*h.*0.5;

Area_vector_triangle=Area_oftriangle([2 4 6],[2 4 6])
