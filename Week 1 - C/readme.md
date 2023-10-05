<h1>Lab 1 (Population)</h1>

<h3> Implementation Details </h3>
<p>Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.</p>
<ul>
<li>Your program should first prompt the user for a starting population size.
<ul>  
<li>If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)</li>
</ul>
</li>
<li>Your program should then prompt the user for an ending population size.
<ul>  
<li>if the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)</li>
</ul>
</li>
<li>Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.</li>
<li>Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.</li>
</ul>

<h4>Output</h4>
<img src="assets/output.png">
<h3>Check50 Result </h3>
<img src="assets/1.png">
<img src="assets/2.png">

---
<h1>Problem Set</h1>
<h3>Hello</h3>
<h4>Getting User Input</h4>
<p>suffice it to say, no matter how you compile or execute this program, it only ever prints hello, world. Let’s personalize it a bit, just as we did in class.
Modify this program in such a way that it first prompts the user for their name and then prints hello, so-and-so, where so-and-so is their actual name.</p>
<img src="assets/hello.png">

---

<h3>Mario More</h3>
<h4>World 1-1</h4>
<p>Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.</p>
<p>Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.</p>
<img src="assets/mario.png">



---

<h3>Credit</h3>
<h4>Implementation Details</h4>
<p>In the file called credit.c in the credit directory, write a program that prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. So that we can automate some tests of your code, we ask that your program’s last line of output be AMEX\n or MASTERCARD\n or VISA\n or INVALID\n, nothing more, nothing less. For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card) and that it won’t have leading zeroes. But do not assume that the user’s input will fit in an int! Best to use get_long from CS50’s library to get users’ input. (Why?)</p>
<img src="assets/credit.png">
