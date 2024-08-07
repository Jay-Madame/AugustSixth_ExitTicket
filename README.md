# August 6 Exit Ticket

## CSCII With Jonathon Baarsch

### Jewell Callahan

__Cube_it__

[x] Create a function template cube_it, that returns the cube of any data type that implements the * operator. <br>
    <t>[x] Demonstrate cube_it with both ints and doubles.<br>

__NumEater__

[x] Create a class template called NumEater, that eats numbers. <br>
    <t> [x] NumEater should have:<br>
        <t><t> [x] an instance variable sum,<br> 
        <t><t> [x] a constructor that initializes sum to zero, <br>
        <t><t> [x] and two functions:<br>
            <t><t><t> [x] void eat(T num) and T burp()<br>

<hr width="100%" size="2">

Upon every call to eat, the NumEater will display "nom-nom" to the console and add the eaten number to sum.  <br>
<t> [x] The burp function will return the sum. <br>
<br>
[x] Create two instances of NumEater, an intEater and a doubleEater. <br>
<t> [x] Have both Eaters eat the same numbers and then burp the results back onto the console.<br>
<br>
[x] Include at least one floating point number in the list of eaten numbers. <br>

To be extra fancy, we could add an NotEdibleException to NumEater.  If we did that, what else would need to change about the solution?