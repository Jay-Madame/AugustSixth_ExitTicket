# August 6 Exit Ticket

## CSCII With Jonathon Baarsch

### Jewell Callahan

__Cube_it__
[ ] Create a function template cube_it, that returns the cube of any data type that implements the * operator. <br>
    <t>[ ] Demonstrate cube_it with both ints and doubles.<br>

__NumEater__

[ ] Create a class template called NumEater, that eats numbers. <br>
    <t> [ ] NumEater should have:<br>
        <t><t> [ ] an instance variable sum,<br> 
        <t><t> [ ] a constructor that initializes sum to zero, <br>
        <t><t> [ ] and two functions:<br>
            <t><t><t> [ ] void eat(T num) and T burp()<br>

<br>

<hr width="100%" size="2">
Upon every call to eat, the NumEater will display "nom-nom" to the console and add the eaten number to sum.  <br>
<t> [ ] The burp function will return the sum. <br>
<br>
[ ] Create two instances of NumEater, an intEater and a doubleEater. <br>
<t> [ ] Have both Eaters eat the same numbers and then burp the results back onto the console.<br>
<br>
[ ] Include at least one floating point number in the list of eaten numbers. <br>

To be extra fancy, we could add an NotEdibleException to NumEater.  If we did that, what else would need to change about the solution?