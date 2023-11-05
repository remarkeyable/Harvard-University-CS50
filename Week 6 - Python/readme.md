<h1>Lab 6: World Cup</h1>
<h2>Implementation Details</h2>
<p>Complete the implementation of tournament.py, such that it simulates a number of tournaments and outputs each team’s probability of winning.

First, in main, read the team data from the CSV file into your program’s memory, and add each team to the list teams.</p>


<ul>
  <li>The file to use will be provided as a command-line argument. You can access the name of the file, then, with sys.argv[1.</li>
  <li>Recall that you can open a file with open(filename), where filename is a variable storing the name of the file.</li>
  <li>Once you have a file f, you can use csv.DictReader(f) to give you a “reader”: an object in Python that you can loop over to read the file one row at a time, treating each row as a dictionary.</li>
  <li>By default, all values read from the file will be strings. So be sure to first convert the team’s rating to an int (you can use the int function in Python to do this).</li>
  <li>Ultimately, append each team’s dictionary to teams. The function call teams.append(x) will append x to the list teams.</li>
  <li>Recall that each team should be a dictionary with a team name and a rating.</li>
</ul>
<p>Next, implement the simulate_tournament function. This function should accept as input a list of teams and should repeatedly simulate rounds until you’re left with one team. The function should then return the name of that team.</p>
<ul>
  <li>You can call the simulate_round function, which simulates a single round, accepting a list of teams as input and returning a list of all of the winners.</li>
  <li>Recall that if x is a list, you can use len(x) to determine the length of the list.</li>
  <li>You should not assume the number of teams in the tournament, but you may assume it will be a power of 2.</li>
</ul>
<p>Finally, back in the main function, run N tournament simulations, and keep track of how many times each team wins in the counts dictionary.</p>
<ul>
  <li>For example, if Uruguay won 2 tournaments and Portugal won 3 tournaments, then your counts dictionary should be {"Uruguay": 2, "Portugal": 3}.</li>
  <li>You should use your simulate_tournament to simulate each tournament and determine the winner.</li>
  <li>Recall that if counts is a dictionary, then syntax like counts[team_name] = x will associate the key stored in team_name with the value stored in x.</li>
  <li>You can use the in keyword in Python to check if a dictionary has a particular key already. For example, if "Portugal" in counts: will check to see if "Portugal" already has an existing value in the counts dictionary.</li>
</ul>

<img src="assets/wordlcup.png">

---

<h1>Problem Set 6</h1>
<h2>Hello</h2>
<h2>Specification</h2>
<p>Write, in a file called hello.py, a program that prompts a user for their name, and then prints hello, so-and-so, where so-and-so is their provided name, exactly as you did in Problem Set 1, except that your program this time should be written in Python.</p>
<img src="assets/hello.png">

<h2>Mario</h2>
<h2>Specification</h2>

---

<ul>
  <li>Write, in a file called mario.py, a program that recreates these half-pyramids using hashes (#) for blocks, exactly as you did in Problem Set 1, except that your program this time should be written in Python.</li>
  <li>To make things more interesting, first prompt the user with get_int for the half-pyramid’s height, a positive integer between 1 and 8, inclusive. (The height of the half-pyramids pictured above happens to be 4, the width of each half-pyramid 4, with a gap of size 2 separating them).</li>
  <li>If the user fails to provide a positive integer no greater than 8, you should re-prompt for the same again.</li>
  <li>Then, generate (with the help of print and one or more loops) the desired half-pyramids.</li>
  <li>Take care to align the bottom-left corner of your pyramid with the left-hand edge of your terminal window, and ensure that there are two spaces between the two pyramids, and that there are no additional spaces after the last set of hashes on each row.</li>
</ul>

<img src="assets/mario.png">


---

<h2>Credit</h2>
<h2>Specification</h2>
<ul>
  <li>In credit.py, write a program that prompts the user for a credit card number and then reports (via print) whether it is a valid American Express, MasterCard, or Visa card number, exactly as you did in Problem Set 1, except that your program this time should be written in Python.</li>
  <li>So that we can automate some tests of your code, we ask that your program’s last line of output be AMEX\n or MASTERCARD\n or VISA\n or INVALID\n, nothing more, nothing less.</li>
  <li>For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card).</li>
  <li>Best to use get_int or get_string from CS50’s library to get users’ input, depending on how you decide to implement this one.</li>
</ul>
<img src="assets/credit.png">
