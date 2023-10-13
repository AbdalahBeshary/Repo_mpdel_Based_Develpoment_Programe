%2. Structures:


%Create a simple structure to store information about a person (name, age, city).
 person.name='Abdalah Beshary'
 person.age=25
 person.city='suez'
%another way person=struct('name','Abdalah Beshary','age',25,'city','suez')

%Access and display the structure fields.
names='Ahmed Beshary';
age=28;
city='suez';
person.name=names;
 person.age=age;
 person.city=city;
 disp(person)

